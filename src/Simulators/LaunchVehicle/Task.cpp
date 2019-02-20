
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

#include "Motor.hpp"

using DUNE_NAMESPACES;

namespace Simulators
{
  //! %Launch Vehicle (aka Rocket) simulator for DUNE.
  //! %LaunchVehicle is responsible for all aspects of
  //! of the physics simulation as well as simulating
  //! the output thrust of the rocktet motor(s) given
  //! a model of the motor's thrust curve.
  //! Thrust curve is given as parameter as "x, y"
  //! data points where "x" is time in seconds, and "y"
  //! is thrust in Newtons
  //!
  //! @author Tiago Sá Marques
  namespace LaunchVehicle
  {
    //! %Task arguments.
    struct Arguments
    {
      //! How many motors this launch vehicle has
      int n_motors;
      //! Data points that describe this motor's thrust curve
      std::vector<std::string> thrust_curve;
      //! Which motor is being simulated
      std::string motor_name;
    };

    //! %LaunchVehicle simulator task
    struct Task: public Tasks::Periodic
    {
      //! Motors' entity labels
      std::vector<std::string> m_motor_labels;
      //! If the engines have started combusting
      bool m_triggered;
      //! If task was given a valid description of the thrust curve
      bool m_valid_thrust_curve;
      //! Thrust produced by this engine/motor
      IMC::Thrust m_thrust;
      //! Epoch Time, in milliseconds, at which this motor was triggered
      uint64_t m_trigger_msec;
      //! Mapping between the end of interval of time and the
      //! the pair of m and b that describe the linear thrust function
      ThrustCurve m_thrust_curve_f;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_triggered(false),
        m_valid_thrust_curve(false),
        m_trigger_msec(0)
      {
        param("Number Of Motors", m_args.n_motors)
        .defaultValue("1")
        .description("How many motors this launch vehicle has");

        param("Thrust Curve", m_args.thrust_curve)
        .description("Data points, time in seconds and thrust in newtons, that describe this motor's thrust function");

        param("Motor Name", m_args.motor_name)
        .defaultValue("")
        .description("Name/Brand of the motor we're simulating");

        // Register consumers.
        bind<IMC::SetThrusterActuation>(this);
      }

      void
      onEntityReservation(void)
      {
        for (int i = 0; i < m_args.n_motors; ++i)
        {
          std::string motor_label = String::str("%s - %d", m_args.motor_name.c_str(), i);
          m_motor_labels.push_back(motor_label);
          reserveEntity(motor_label);
          debug("Reserving %s", motor_label.c_str());
        }
      }

      void
      onUpdateParameters(void)
      {
        if (m_args.thrust_curve.empty())
        {
          war("No thrust curve found");
          return;
        }

        m_motor_labels.reserve(m_args.n_motors);
        m_valid_thrust_curve = Motor::parseThrustCurve(this, m_thrust_curve_f, m_args.thrust_curve);
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

      void
      updateThrust(void)
      {
        if (!m_triggered || !m_valid_thrust_curve)
          return;

        // For now assume that all motors are equal
        float curr_time_sec = (Time::Clock::getSinceEpochMsec() - m_trigger_msec) / 1000.0;
        m_thrust.value = Motor::computeEngineThrust(m_thrust_curve_f, curr_time_sec);

        for (int i = 0; i < m_args.n_motors; ++i)
        {
          m_thrust.setSourceEntity(resolveEntity(m_motor_labels[i]));
          dispatch(m_thrust);
        }
      }

      void
      task(void)
      {
        updateThrust();
      }
    };
  }
}

DUNE_TASK
