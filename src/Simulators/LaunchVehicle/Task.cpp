//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//                                                                          *
// Copyright 2019 CEP - Clube Espacial Português                            *
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
      //! Launcher's mass without motor
      float dry_mass;
      //! Propellant's mass
      float prop_mass;
      //! Motor's casing mass
      float motor_mass;
      //! Gravity constant
      float gravity;
      //! Crag coefficient
      float coeff_drag;
      //! Cross sectional area
      float area;
      //! Atmospheric density
      float atmos_density;
      //! Motor's mass flow rate
      float mass_flow_rate;
    };

    //! Atmosphere's "Scale height"
    static const float c_atmos_scale_height = 8000;

    //! %LaunchVehicle simulator task
    struct Task: public Tasks::Periodic
    {
      //! Motor(s) used by the launcher
      Motor* m_motor;
      //! Motors' entity labels
      std::vector<std::string> m_motor_labels;
      //! If task was given a valid description of the thrust curve
      bool m_valid_thrust_curve;
      //! Thrust produced by this engine/motor
      IMC::Thrust m_thrust;
      //! Curent drag force
      IMC::Force m_drag;
      //! Epoch Time, in milliseconds, at which this motor was triggered
      uint64_t m_trigger_msec;
      IMC::SimulatedState m_sstate;
      //! Previous timestep in seconds
      float m_prev_time_sec;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        m_valid_thrust_curve(false),
        m_trigger_msec(0),
        m_prev_time_sec(0)
      {
        param("Number Of Motors", m_args.n_motors)
        .defaultValue("1")
        .description("How many motors this launch vehicle has");

        param("Thrust Curve", m_args.thrust_curve)
        .description("Data points, time in seconds and thrust in newtons, that describe this motor's thrust function");

        param("Motor Name", m_args.motor_name)
        .defaultValue("Aerotech I65W")
        .description("Name/Brand of the motor we're simulating");

        param("Dry Mass", m_args.dry_mass)
        .defaultValue("2.550")
        .units(Units::Kilogram)
        .description("Launcher's mass without motor (and propellant) in kg");

        param("Motor Mass", m_args.motor_mass)
        .defaultValue("0.375")
        .units(Units::Kilogram)
        .description("Motor's casing mass without propellant in kg");

        param("Propellant Mass", m_args.prop_mass)
        .defaultValue("0.377")
        .units(Units::Kilogram)
        .description("Propellant's mass in kg");

        param("Gravity", m_args.gravity)
        .defaultValue("9.80665")
        .units(Units::Newton)
        .description("Gravity's value in Newtons");

        param("Drag Coefficent", m_args.coeff_drag)
        .defaultValue("0.45")
        .description("Drag coefficient");

        param("Area", m_args.area)
        .defaultValue("0.006")
        .description("Launcher's reference area in m^2");

        param("Atmospheric density", m_args.atmos_density)
        .defaultValue("1.225")
        .units(Units::KilogramPerCubicMeter)
        .description("Atmospheric density at sea-level, kg/m^3");

        param("Mass Flow Rate", m_args.mass_flow_rate)
        .defaultValue("0.050")
        .description("Motor's mass flow rate in kg/s");

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

        m_motor = new Motor(this, m_args.thrust_curve);
        m_motor_labels.reserve(m_args.n_motors);
        m_valid_thrust_curve = m_motor->parseThrustCurve();
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
      onResourceRelease(void)
      {
        // Memory::clear(m_motor);
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (!m_valid_thrust_curve)
          return;

        if (!m_motor->isActive() && std::abs(msg->value) == 1)
        {
          m_motor->trigger();
          m_trigger_msec = Time::Clock::getSinceEpochMsec();
          return;
        }

        //! Solid motor: we just care about triggering (1)
        war("Invalid thrust %f for a solid motor", msg->value);
        (void) msg;
      }

      float
      computeMass(float t_sec)
      {
        float prop_mass_delta = t_sec * m_args.mass_flow_rate;
        if (prop_mass_delta > m_args.prop_mass)
          prop_mass_delta = m_args.prop_mass;
        return m_args.dry_mass + m_args.motor_mass + (m_args.prop_mass - prop_mass_delta);
      }

      float
      computeAtmosphericDensity(fp32_t height)
      {
        return m_args.atmos_density * std::exp((-height / c_atmos_scale_height));
      }

      void
      updateThrust(float curr_time_sec)
      {
        if (!m_motor->isActive() || !m_valid_thrust_curve)
          return;

        // For now assume that all motors are equal
        m_thrust.value = m_motor->computeEngineThrust(curr_time_sec);

        for (int i = 0; i < m_args.n_motors; ++i)
        {
          m_thrust.setSourceEntity(resolveEntity(m_motor_labels[i]));
          dispatch(m_thrust);
        }
      }

      //! Compute acceleration's integral on the given interval [s, f]
      //! F = Ft - Fd - Fg
      //! F - total force
      //! Ft - Thrust force
      //! Fd - Drag force
      //! Fg - Gravity force
      //!
      //! a(t) = (mt + b) - 0.5 * Cd * A * p * v^2 - mass * g
      //! Cd - Drag coefficient
      //! A - Reference area
      //! p - Atmospheric density
      //! v - velocity
      //! m - Current launcher's total mass
      //! g - Gravity constant
      fp32_t
      computeVelocity(const float& m, const float& b, const float& s, const float& f, const float& mass)
      {
        return (b * f - m_args.gravity * mass * f - mass * m_drag.value * f + 0.5 * std::pow(f, 2) * m - b * s + m_args.gravity * mass * s + mass * m_drag.value * s - 0.5 * m * std::pow(s, 2)) / mass;
      }

      fp32_t
      computeHeight(const float& m, const float& b, const float& s, const float& f, const float& mass)
      {
        return ((0.5 * (b - m_args.gravity * mass - m_drag.value) * (std::pow(f, 2) - std::pow(s, 2)) + 0.166667 * m * (std::pow(f, 3) - std::pow(s, 3))) / mass);
      }

      void
      updateState(float t_sec)
      {
        const float mass = computeMass(t_sec);

        ThrustParameters thrust_f = m_motor->getFunctionParameters(t_sec);
        ThrustParameters prev_params = m_motor->getFunctionParameters(m_prev_time_sec);

        if (m_thrust.value != 0)
        {
          if (thrust_f.interval_start != prev_params.interval_start)
          {
            // what's missing from previous interval
            m_sstate.w += computeVelocity(prev_params.m, prev_params.b, m_prev_time_sec, prev_params.interval_end, mass);
            m_sstate.height += computeHeight(prev_params.m, prev_params.b, m_prev_time_sec, prev_params.interval_end, mass);

            m_sstate.w += computeVelocity(thrust_f.m, thrust_f.b, thrust_f.interval_start, t_sec, mass);
            m_sstate.height += computeHeight(thrust_f.m, thrust_f.b, thrust_f.interval_start, t_sec, mass);
          }
          else
          {
            m_sstate.w += computeVelocity(thrust_f.m, thrust_f.b, m_prev_time_sec, t_sec, mass);
            m_sstate.height += computeHeight(thrust_f.m, thrust_f.b, m_prev_time_sec, t_sec, mass);
          }
        }
        else
        {
          float accel = -m_args.gravity + (m_drag.value / mass);
          float dt = t_sec - m_prev_time_sec;
          m_sstate.w = m_sstate.w + (accel * dt);
          m_sstate.height = m_sstate.height + (m_sstate.w * dt);
        }

        // hit the ground
        if (m_sstate.height < 0)
        {
          m_sstate.height = 0;
          m_sstate.w = 0;
        }

        fp32_t atmos_density = computeAtmosphericDensity(m_sstate.height);
        m_drag.value = 0.5 * m_args.coeff_drag * m_args.area * atmos_density * std::pow(m_sstate.w, 2);

        dispatch(m_sstate);
        dispatch(m_drag);
      }

      void
      task(void)
      {
        if (!m_motor->isActive() && m_valid_thrust_curve)
        {
          m_motor->trigger();
          m_trigger_msec = Time::Clock::getSinceEpochMsec();
          m_drag.value = 0;
        }

        float curr_time_sec = (Time::Clock::getSinceEpochMsec() - m_trigger_msec) / 1000.0;

        updateThrust(curr_time_sec);
        updateState(curr_time_sec);

        m_prev_time_sec = curr_time_sec;
      }
    };
  }
}

DUNE_TASK
