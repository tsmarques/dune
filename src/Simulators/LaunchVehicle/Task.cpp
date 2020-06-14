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
#include <DUNE/Physics.hpp>

#include "Motor.hpp"
#include "SimulationState.hpp"
#include "Parachute.hpp"

using DUNE_NAMESPACES;

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
namespace Simulators::LaunchVehicle
{
  struct MotorArguments
  {
    //! Which motor is being simulated
    std::string name;
    //! Propellant's mass
    float prop_mass{};
    //! Motor's casing mass
    float mass{};
    //! Data points that describe this motor's thrust curve
    std::vector<std::string> thrust_curve;
  };

  //! %Task arguments.
  struct Arguments
  {
    //! How many motors this launch vehicle has
    int n_motors{};
    //! Launcher's mass without motor
    float dry_mass{};
    //! Gravity constant
    float gravity{};
    //! Crag coefficient
    float coeff_drag{};
    //! Cross sectional area
    float area{};
    //! Atmospheric density
    float atmos_density{};
    //! LV's initial latitude in radians
    double initial_lat{};
    //! LV's initial longitude in radians
    double initial_lon{};
    //! LV's initial altitude in meters
    float initial_altitude{};
    //! Motor's arguments
    MotorArguments motor;
  };

  //! Drag force entity label
  static const char* c_drag_force_ent_label = "LV - Drag";

  //! Weight entity label
  static const char* c_weight_ent_label = "LV - Weight";

  //! Dynamic pressure entity label
  static const char* c_dynp_ent_label = "LV - Dynamic Pressure";

  //! Thrust force entity label
  static const char* c_thrust_ent_label = "LV - Thrust";

  //! Entity label to dispatch navigation messages
  static const char* c_navigation_ent_label = "Navigation";

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
    //! Navigation data
    IMC::EstimatedState m_estate;
    //! Initial GPS state
    IMC::GpsFix m_initial_fix;
    //! Previous timestep in seconds
    float m_prev_time_sec;
    //! Current mass of the launcher
    float m_mass;
    //! Take off event has happened
    bool lift_off;
    //! Current drag coefficient
    float curr_drag_coeff;
    //! Current reference area
    float curr_ref_area;
    //! Parachute's arguments
    Parachute m_parachute;
    //! Task arguments
    Arguments m_args;

    Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        tstep_sec(0),
        m_motor(nullptr),
        m_valid_thrust_curve(false),
        m_trigger_msec(0),
        m_prev_time_sec(0),
        m_mass(0),
        lift_off(false),
        curr_drag_coeff(0),
        curr_ref_area(0),
        m_parachute()
    {
      param("Number Of Motors", m_args.n_motors)
          .defaultValue("1")
          .description("How many motors this launch vehicle has");

      param("Dry Mass", m_args.dry_mass)
          .defaultValue("2.550")
          .units(Units::Kilogram)
          .description("Launcher's mass without motor (and propellant) in kg");

      param("Motor -- Name", m_args.motor.name)
          .defaultValue("Aerotech I65W")
          .description("Name/Brand of the motor we're simulating");

      param("Motor -- Thrust Curve", m_args.motor.thrust_curve)
          .description("Data points, time in seconds and thrust in newtons, that describe this motor's thrust function");

      param("Motor -- Mass", m_args.motor.mass)
          .defaultValue("0.375")
          .units(Units::Kilogram)
          .description("Motor's casing mass without propellant in kg");

      param("Motor -- Propellant Mass", m_args.motor.prop_mass)
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

      param("Initial Latitude", m_args.initial_lat)
          .defaultValue("0.4992520593366")
          .units(Units::Radian)
          .description("Initial latitude in radians");

      param("Initial Longitude", m_args.initial_lon)
          .defaultValue("-1.40678083")
          .units(Units::Radian)
          .description("Initial longitude in radians");

      param("Initial Altitude", m_args.initial_altitude)
          .defaultValue("0.0")
          .units(Units::Meter)
          .description("Initial altitude in meters");

      param("Parachute -- Drag Coefficient", m_parachute.m_args.drag_coeff)
          .defaultValue("1.5")
          .description("Parachute's drag coefficient when open");

      param("Parachute -- Area", m_parachute.m_args.area)
          .defaultValue("2.064")
          .description("Parachute's projected area in m^2");

      param("Parachute -- Mass", m_parachute.m_args.mass)
          .defaultValue("0.062")
          .units(Units::Kilogram)
          .description("Parachute's mass in kg");

      // Register consumers.
      bind<IMC::SetThrusterActuation>(this);
      bind<IMC::FlightEvent>(this);
    }

    void
    onEntityReservation() override
    {
      reserveEntity(c_thrust_ent_label);
      reserveEntity(c_drag_force_ent_label);
      reserveEntity(c_weight_ent_label);
      reserveEntity(c_dynp_ent_label);
      reserveEntity(c_navigation_ent_label);
    }

    void
    onEntityResolution() override
    {
      m_thrust.setSourceEntity(resolveEntity(c_thrust_ent_label));
      m_drag.setSourceEntity(resolveEntity(c_drag_force_ent_label));
      m_weight.setSourceEntity(resolveEntity(c_weight_ent_label));
      m_dynp.setSourceEntity(resolveEntity(c_dynp_ent_label));
      m_estate.setSourceEntity(resolveEntity(c_navigation_ent_label));
    }

    void
    onUpdateParameters() override
    {
      tstep_sec = 1.0 / getFrequency();

      if (m_args.motor.thrust_curve.empty())
      {
        war("No thrust curve found");
        return;
      }

      if (paramChanged(m_args.coeff_drag))
        curr_drag_coeff = m_args.coeff_drag;

      if (paramChanged(m_args.area))
        curr_ref_area = m_args.area;

      if (paramChanged(m_args.initial_lat))
      {
        m_initial_fix.lat = m_args.initial_lat;
        m_estate.lat = m_initial_fix.lat;
      }

      if (paramChanged(m_args.initial_lon))
      {
        m_initial_fix.lon = m_args.initial_lon;
        m_estate.lon = m_initial_fix.lon;
      }

      if (paramChanged(m_args.initial_altitude))
      {
        // @fixme is this correct?
        m_initial_fix.height = m_args.initial_altitude;
        m_estate.alt = m_args.initial_altitude;
      }
    }

    //! Initialize resources.
    void
    onResourceInitialization() override
    {
      m_valid_thrust_curve = m_motor->parseThrustCurve();
      setInitialConditions();

      Status::Code status = m_valid_thrust_curve ? Status::CODE_ACTIVE : Status::CODE_IDLE;
      IMC::EntityState::StateEnum state = m_valid_thrust_curve ? IMC::EntityState::ESTA_NORMAL : IMC::EntityState::ESTA_ERROR;
      setEntityState(state, status);
    }

    void
    onResourceAcquisition() override
    {
      m_motor = new Motor(this, m_args.motor.thrust_curve);
    }

    void
    onResourceRelease() override
    {
      Memory::clear(m_motor);
    }

    void
    consume(const IMC::SetThrusterActuation* msg)
    {
      if (!m_valid_thrust_curve)
        return;

      if (msg->value == 0)
      {
        war("can't stop a solid motor");
        return;
      }

      if (msg->value <= 0)
      {
        war("Invalid thrust %f for a solid motor", msg->value);
        return;
      }

      //! Solid motor: we just care about triggering (1)
      if (!m_motor->isActive() && msg->value == 1)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        m_motor->trigger();
        m_trigger_msec = Time::Clock::getSinceEpochMsec();
        m_drag.value = 0;
        m_estate.w = 0;
        m_estate.alt = m_args.initial_altitude;
        m_dynp.value = 0;
        return;
      }
    }

    void
    consume(const IMC::FlightEvent* event)
    {
      if (event->type != FlightEvent::FLEV_RECOVERY)
        return;

      inf("activating parachute");
      curr_ref_area = std::max(m_parachute.getArea(), curr_ref_area);
      curr_drag_coeff = std::max(m_parachute.getDragCoeff(), curr_drag_coeff);
      m_parachute.trigger();
    }

    void
    updateForces(float t)
    {
      updateThrust(t);

      m_weight.value = m_args.gravity * m_mass;
      m_dynp.value = Physics::getDynamicPressure(m_args.atmos_density, m_estate.alt, m_estate.w);
      m_drag.value = Physics::getDragForce(curr_drag_coeff, curr_ref_area, m_dynp.value);

      m_drag.value = m_drag.value * (m_estate.w >= 0 ? -1.0f : 1.0f);
    }

    void
    updateThrust(float curr_time_sec)
    {
      if (!m_motor->isActive() || !m_valid_thrust_curve)
      {
        m_thrust.value = 0;
        return;
      }

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
    SimulationState
    computeNewState(const IMC::EstimatedState& curr_state, float t_sec, float mass) const
    {
      SimulationState new_state;

      float f_thrust = m_motor->computeEngineThrust(t_sec);
      float f_drag = Physics::getDragForce(curr_drag_coeff, curr_ref_area,
                                           m_args.atmos_density, curr_state.alt,
                                           curr_state.w);

      f_drag = f_drag * (curr_state.w >= 0 ? -1.0f : 1.0f);

      // update linear acceleration (on z)
      new_state.m_a(0, 2) = ((f_thrust + f_drag) / mass) - m_args.gravity;

      new_state.m_v(0, 0) = curr_state.u;
      new_state.m_v(0, 1) = curr_state.v;
      new_state.m_v(0, 2) = curr_state.w;

      return new_state;
    }

    void
    rk4Step(float t_sec)
    {
      // not enough to lift
      if (m_thrust.value < m_args.gravity * m_mass && m_estate.alt == 0)
        return;

      if (!lift_off && m_estate.alt != 0)
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
        SimulationState k1 = computeNewState(m_estate, t0[step], m_mass);

        IMC::EstimatedState* estate_clone = m_estate.clone();
        float rk4dt;

        // k2
        rk4dt = 0.5f * dt[step];
        estate_clone->u = m_estate.u + k1.m_a.element(0, 0) * rk4dt;
        estate_clone->v = m_estate.v + k1.m_a.element(0, 1) * rk4dt;
        estate_clone->w = m_estate.w + k1.m_a.element(0, 2) * rk4dt;
        estate_clone->alt =  m_estate.alt + k1.m_v.element(0, 2) * rk4dt;
        SimulationState k2 = computeNewState(*estate_clone, t0[step] + rk4dt, m_mass);

        // k3
        rk4dt = 0.5f * dt[step];
        estate_clone->clear();
        estate_clone->u = m_estate.u  + k2.m_a.element(0, 0) * rk4dt;
        estate_clone->v = m_estate.v  + k2.m_a.element(0, 1) * rk4dt;
        estate_clone->w = m_estate.w  + k2.m_a.element(0, 2) * rk4dt;
        estate_clone->alt =  m_estate.alt + k2.m_v.element(0, 2) * rk4dt;
        SimulationState k3 = computeNewState(*estate_clone, t0[step] + rk4dt, m_mass);

        // k4
        rk4dt = dt[step];
        estate_clone->clear();
        estate_clone->u = m_estate.u  + k3.m_a.element(0, 0) * rk4dt;
        estate_clone->v = m_estate.v  + k3.m_a.element(0, 1) * rk4dt;
        estate_clone->w = m_estate.w  + k3.m_a.element(0, 2) * rk4dt;
        estate_clone->alt =  m_estate.alt + k3.m_v.element(0, 2) * rk4dt;
        SimulationState k4 = computeNewState(*estate_clone, t0[step] + rk4dt, m_mass);

        // y(n+1) = y(n) + h*(k1 + 2 * (k2 + k3) + k4)/6
        SimulationState delta;
        // integrate for velocity
        delta.m_v = dt[step] * (k1.m_a + 2 * (k2.m_a + k3.m_a) + k4.m_a) / 6.0f;
        // integrate for position
        delta.m_p = dt[step] * (k1.m_v + 2 * (k2.m_v + k3.m_v) + k4.m_v) / 6.0f;

        // update state

        // velocity
        m_estate.u = m_estate.u + delta.m_v.element(0, 0);
        m_estate.v = m_estate.v + delta.m_v.element(0, 1);
        m_estate.w = m_estate.w + delta.m_v.element(0, 2);

        // position offsets
        m_estate.x = m_estate.x + delta.m_p.element(0, 0);
        m_estate.y = m_estate.y + delta.m_p.element(0, 1);
        m_estate.z = m_estate.z + delta.m_p.element(0, 2);

        // @fixme: is altitude the same as Z offset?
        m_estate.alt =  m_estate.alt + delta.m_p.element(0, 2);

        delete estate_clone;

        ++step;
      }

      if (m_estate.alt < 0)
      {
        m_estate.alt = 0;
        m_estate.w = 0;
      }
    }

    void
    setInitialConditions()
    {
      dispatch(m_initial_fix);
      dispatch(m_estate);

      inf("Motor name: %s\n "
          "Number of motors: %d\n"
          "Dry Mass: %f\n"
          "Motor mass: %f\n"
          "Propellant Mass: %f\n"
          "Drag Coefficient: %f\n"
          "Area: %f\n"
          "Parachute Drag Coefficient: %f\n"
          "Parachute area: %f\n"
          "Parachute mass: %f\n",
          m_args.motor.name.c_str(),
          m_args.n_motors,
          m_args.dry_mass,
          m_args.motor.mass,
          m_args.motor.prop_mass,
          m_args.coeff_drag,
          m_args.area,
          m_parachute.getDragCoeff(),
          m_parachute.getDragCoeff(),
          m_parachute.m_args.mass);
    }

    void
    task() override
    {
      if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
        return;

      float curr_time_sec = (Time::Clock::getSinceEpochMsec() - m_trigger_msec) / 1000.0;

      m_mass = m_args.dry_mass + m_args.motor.prop_mass + m_args.motor.mass;
      updateForces(curr_time_sec);
      rk4Step(curr_time_sec);

      dispatch(m_thrust);
      dispatch(m_estate);
      dispatch(m_drag);
      dispatch(m_weight);
      dispatch(m_dynp);

      m_prev_time_sec = curr_time_sec;
    }
  };
}

DUNE_TASK
