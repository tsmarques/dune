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
    };

    //! Atmosphere's "Scale height"
    static const float c_atmos_scale_height = 8000;

    //! Drag force entity label
    static const char* c_drag_force_ent_label = "LV - Drag";

    //! Weight entity label
    static const char* c_weight_ent_label = "LV - Weight";

    //! Dynamic pressure entity label
    static const char* c_dynp_ent_label = "LV - Dynamic Pressure";

    //! Thrust force entity label
    static const char* c_thrust_ent_label = "LV - Thrust";

    //! %LaunchVehicle simulator task
    struct Task: public Tasks::Periodic
    {
      //! Timestep in seconds
      double tstep_sec;
      //! Motor(s) used by the launcher
      Motor* m_motor;
      //! If task was given a valid description of the thrust curve
      bool m_valid_thrust_curve;
      //! Thrust produced by this engine/motor
      IMC::Force m_thrust;
      //! Curent drag force
      IMC::Force m_drag;
      //! Weight force
      IMC::Force m_weight;
      //! Dynamic pressure felt by the vehicle
      IMC::Pressure m_dynp;
      //! Epoch Time, in milliseconds, at which this motor was triggered
      uint64_t m_trigger_msec;
      IMC::SimulatedState m_sstate;
      //! Previous timestep in seconds
      float m_prev_time_sec;
      //! Current mass of the launcher
      float m_mass;
      //! Take off event has happened
      bool lift_off;
      //! Task arguments
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        tstep_sec(0),
        m_motor(NULL),
        m_valid_thrust_curve(false),
        m_trigger_msec(0),
        m_prev_time_sec(0),
        lift_off(false)
      {
        param("Number Of Motors", m_args.n_motors)
        .defaultValue("1")
        .description("How many motors this launch vehicle has");

        param("Dry Mass", m_args.dry_mass)
        .defaultValue("2.550")
        .units(Units::Kilogram)
        .description("Launcher's mass without motor (and propellant) in kg");

        param("Motor -- Name", m_args.motor_name)
        .defaultValue("Aerotech I65W")
        .description("Name/Brand of the motor we're simulating");

        param("Motor -- Thrust Curve", m_args.thrust_curve)
        .description("Data points, time in seconds and thrust in newtons, that describe this motor's thrust function");

        param("Motor -- Mass", m_args.motor_mass)
        .defaultValue("0.375")
        .units(Units::Kilogram)
        .description("Motor's casing mass without propellant in kg");

        param("Motor -- Propellant Mass", m_args.prop_mass)
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

        // Register consumers.
        bind<IMC::SetThrusterActuation>(this);
      }

      void
      onEntityReservation(void)
      {
        reserveEntity(c_thrust_ent_label);
        reserveEntity(c_drag_force_ent_label);
        reserveEntity(c_weight_ent_label);
        reserveEntity(c_dynp_ent_label);
      }

      void
      onEntityResolution(void)
      {
        m_thrust.setSourceEntity(resolveEntity(c_thrust_ent_label));
        m_drag.setSourceEntity(resolveEntity(c_drag_force_ent_label));
        m_weight.setSourceEntity(resolveEntity(c_weight_ent_label));
        m_dynp.setSourceEntity(resolveEntity(c_dynp_ent_label));
      }

      void
      onUpdateParameters(void)
      {
        tstep_sec = 1.0 / getFrequency();

        if (m_args.thrust_curve.empty())
        {
          war("No thrust curve found");
          return;
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_valid_thrust_curve = m_motor->parseThrustCurve();

        Status::Code status = m_valid_thrust_curve ? Status::CODE_ACTIVE : Status::CODE_IDLE;
        IMC::EntityState::StateEnum state = m_valid_thrust_curve ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_ERROR;
        setEntityState(state, status);
      }

      void
      onResourceAcquisition(void)
      {
        m_motor = new Motor(this, m_args.thrust_curve);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_motor);
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
      }

      //! Compute acceleration's integral
      //! F = Ft - Fd - Fg
      //! F - total force
      //! Ft - Thrust force
      //! Fd - Drag force
      //! Fg - Gravity force
      //!
      //! a(t) = (ht + b) - (0.5 * Cd * A * p * v^2) / m - g
      //! Cd - Drag coefficient
      //! A - Reference area
      //! p - Atmospheric density
      //! v - velocity
      //! m - Current launcher's total mass
      //! g - Gravity constant
      fp32_t
      dv_dt(const float& v, const float& t_sec, const float& mass)
      {
        float thrust = m_motor->computeEngineThrust(t_sec);
        float accel_thrust = thrust / mass;
        float accel_drag = (0.5 * m_args.coeff_drag * m_args.atmos_density * m_args.area * std::pow(v, 2)) / mass;

        // should be opposite to velocity
        accel_drag = accel_drag * (v >= 0 ? 1 : -1);

        return accel_thrust - m_args.gravity - accel_drag;
      }

      void
      computeVelocity(const ThrustParameters& thrust_f, const ThrustParameters& prev_thrust_f, const float& t_sec)
      {
        std::vector<float> t_steps;
        std::vector<float> t0;
        std::vector<float> dt;

        // prepare simulation step
        if (thrust_f.interval_start != prev_thrust_f.interval_start)
        {
          t_steps.reserve(2);
          t0.reserve(2);
          dt.reserve(2);

          t_steps[0] = prev_thrust_f.interval_end;
          t_steps[1] = t_sec;

          t0[0] = m_prev_time_sec;
          t0[1] = t_steps[0];

          dt[0] = (t_steps[0] - t0[0]);
          dt[1] = (t_steps[1] - t0[1]);
        }
        else
        {
          t_steps.reserve(1);
          t0.reserve(1);
          dt.reserve(1);

          t0[0] = m_prev_time_sec;
          t_steps[0] = t_sec;
          dt[0] = tstep_sec;
        }

        size_t step = 0;
        while (step < t_steps.capacity())
        {
          float k1 = dv_dt(m_sstate.w, t0[step], m_mass);
          float k2 = dv_dt(m_sstate.w + k1 * 0.5, t0[step] + (0.5 * dt[step]), m_mass);
          float k3 = dv_dt(m_sstate.w + k2 * 0.5, t0[step] + (0.5 * dt[step]), m_mass);
          float k4 = dv_dt(m_sstate.w + k3 * dt[step], t0[step] + dt[step], m_mass);

          m_sstate.w = m_sstate.w + (dt[step] * (k1 + 2 * (k2 + k3) + k4) / 6.0);
          ++step;
        }
      }

      void
      updateState(float t_sec)
      {
        // not enough to lift
        if (m_thrust.value < m_args.gravity * m_mass && !lift_off)
          return;

        if (!lift_off)
        {
          lift_off = true;
          war("Lift off %.4f", m_thrust.value);
        }

        ThrustParameters thrust_f = m_motor->getFunctionParameters(t_sec);
        ThrustParameters prev_params = m_motor->getFunctionParameters(m_prev_time_sec);

        std::vector<float> t_steps;
        std::vector<float> t0;
        std::vector<float> dt;

        // prepare simulation step
        if (thrust_f.interval_start != prev_params.interval_start)
        {
          t_steps.reserve(2);
          t0.reserve(2);
          dt.reserve(2);

          t_steps[0] = prev_params.interval_end;
          t_steps[1] = t_sec;

          t0[0] = m_prev_time_sec;
          t0[1] = t_steps[0];

          dt[0] = (t_steps[0] - t0[0]);
          dt[1] = (t_steps[1] - t0[1]);
        }
        else
        {
          t_steps.reserve(1);
          t0.reserve(1);
          dt.reserve(1);

          t0[0] = m_prev_time_sec;
          t_steps[0] = t_sec;
          dt[0] = tstep_sec;
        }

        size_t step = 0;
        while (step < t_steps.capacity())
        {
          float k1 = dv_dt(m_sstate.w, t0[step], m_mass);
          float k2 = dv_dt(m_sstate.w + k1 * 0.5, t0[step] + (0.5 * dt[step]), m_mass);
          float k3 = dv_dt(m_sstate.w + k2 * 0.5, t0[step] + (0.5 * dt[step]), m_mass);
          float k4 = dv_dt(m_sstate.w + k3 * dt[step], t0[step] + dt[step], m_mass);

          m_sstate.w = m_sstate.w + (dt[step] * (k1 + 2 * (k2 + k3) + k4) / 6.0);
          m_sstate.height = m_sstate.height + m_sstate.w * dt[step];
          ++step;
        }

        if (m_sstate.height <= 0)
        {
          m_sstate.height = 0;
          m_sstate.w = 0;
        }
      }

      void
      task(void)
      {
        if (!m_motor->isActive() && m_valid_thrust_curve)
        {
          m_motor->trigger();
          m_trigger_msec = Time::Clock::getSinceEpochMsec();
          m_drag.value = 0;
          m_sstate.w = 0;
          m_sstate.height = 0;
          m_dynp.value = 0;
        }

        float curr_time_sec = (Time::Clock::getSinceEpochMsec() - m_trigger_msec) / 1000.0;

        m_mass = m_args.dry_mass + m_args.prop_mass + m_args.motor_mass;
        updateThrust(curr_time_sec);
        updateState(curr_time_sec);

        m_weight.value = m_args.gravity * m_mass;
        m_dynp.value = 0.5 * m_args.atmos_density * std::pow(m_sstate.w, 2);
        m_drag.value = (m_args.coeff_drag * m_args.area * m_dynp.value);

        dispatch(m_thrust);
        dispatch(m_sstate);
        dispatch(m_drag);
        dispatch(m_weight);
        dispatch(m_dynp);
        m_prev_time_sec = curr_time_sec;
      }
    };
  }
}

DUNE_TASK
