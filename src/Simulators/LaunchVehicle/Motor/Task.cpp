
//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Tiago Sá Marques                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  namespace LaunchVehicle
  {
    //! %Chemical engine/motor simulator for DUNE.
    //! %Motor is responsible for outputing thrust
    //! values given a model of the motor's thrust curve
    //! Thrust curve is given as parameter as "x, y"
    //! data points where "x" is time in seconds, and "y"
    //! is thrust in newtons
    //!
    //! @author Ricardo Martins
    namespace Motor
    {
      //! %Task arguments.
      struct Arguments
      {
        //! Thruster Id.
        int thruster_id;
        //! Data points that describe this motor's thrust curve
        std::vector<std::string> thrust_curve;
      };

      //! %Rocket engine/motor simulator task
      struct Task: public Tasks::Periodic
      {
        //! If this engine has started combusting
        bool m_triggered;
        //! If task was given a valid description of the thrust curve
        bool m_valid_thrust_curve;
        //! Thrust produced by this engine/motor
        IMC::Thrust m_thrust;
        //! Epoch Time, in milliseconds, at which this motor was triggered
        uint64_t m_trigger_msec;
        //! Mapping between the end of interval of time and the
        //! the pair of m and b that describe the linear thrust function
        std::map<float, std::pair<float, float> > m_thrust_curve_f;
        //! Task arguments
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Periodic(name, ctx),
          m_triggered(false),
          m_valid_thrust_curve(false),
          m_trigger_msec(0)
        {
          // Initialize Engine Id.
          param("Engine Id", m_args.thruster_id)
          .defaultValue("0")
          .description("Engine identification");

          // Engine's Thrust Curve
          param("Thrust Curve", m_args.thrust_curve)
          .description("Data points, time in seconds and thrust in newtons, that describe this motor's thrust function");

          // Register consumers.
          bind<IMC::SetThrusterActuation>(this);
        }

        void
        onUpdateParameters(void)
        {
          if (m_args.thrust_curve.empty())
            return;

          // previous data points
          float yn1 = 0;
          float xn1 = 0;
          for (std::string line : m_args.thrust_curve)
          {
            float xn;
            float yn;
            if (std::sscanf(line.c_str(), "%f %f", &xn, &yn) != 2)
            {
              err("Invalid thrust data points %s", line.c_str());
              return;
            }

            float m = (yn - yn1) / (float) (xn - xn1);
            float b = yn - xn * m;
            m_thrust_curve_f[xn] = std::make_pair(m, b);

            yn1 = yn;
            xn1 = xn;
          }

          m_valid_thrust_curve = true;
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
          Status::Code status = m_valid_thrust_curve ? Status::CODE_ACTIVE : Status::CODE_IDLE;
          IMC::EntityState::StateEnum state = m_valid_thrust_curve ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_ERROR;
          setEntityState(state, status);
        }

        void
        consume(const IMC::SetThrusterActuation* msg)
        {
          if (!m_valid_thrust_curve)
            return;

          if (!m_triggered && std::abs(msg->value) == 1)
          {
            m_triggered = true;
            m_trigger_msec = Time::Clock::getSinceEpochMsec();
            return;
          }

          //! Solid motor: we just care about triggering (1)
          war("Invalid thrust %f for a solid motor", msg->value);
          (void) msg;
        }

        //! Compute current thrust given a time in milliseconds
        //! since the motor was triggered
        fp64_t
        computeEngineThrust(float curr_time_sec)
        {
          fp64_t thrust = 0;

          bool found = false;
          std::map<float, std::pair<float, float> >::iterator itr = m_thrust_curve_f.begin();
          while (itr != m_thrust_curve_f.end() && !found)
          {
            if (curr_time_sec < itr->first)
            {
              found = true;

              std::pair<float, float> linear_params = itr->second;
              thrust = linear_params.first * curr_time_sec + linear_params.second;
            }

            ++itr;
          }

          return thrust;
        }

        void
        task(void)
        {
          if (!m_triggered || !m_valid_thrust_curve)
            return;

          float curr_time_sec = (Time::Clock::getSinceEpochMsec() - m_trigger_msec) / 1000.0;
          m_thrust.value = computeEngineThrust(curr_time_sec);

          dispatch(m_thrust);
          inf("%lf", m_thrust.value);
        }
      };
    }
  }
}

DUNE_TASK
