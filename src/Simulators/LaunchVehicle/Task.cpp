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

#include "Task.hpp"
#include "Motor.hpp"
#include "SimulationState.hpp"
#include "Parachute.hpp"
#include "DragModel.hpp"

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
  //! %LaunchVehicle simulator task
  struct Task: public Tasks::Periodic
  {
    //! Timestep in seconds
    double dt;
    //! Motor(s) used by the launcher
    std::unique_ptr<Motor> m_motor;
    //! Rockets' Drag Model
    std::unique_ptr<DragModel> m_drag_model;
    //! Direct cosine matrix.
    Math::Matrix m_dcm;
    //! Thrust produced by this engine/motor
    IMC::Force m_thrust;
    //! Curent drag force
    IMC::Force m_drag;
    //! Weight force
    IMC::Force m_weight;
    //! Gravity readings
    IMC::Acceleration m_gravity;
    //! Dynamic pressure felt by the vehicle
    IMC::Pressure m_dynp;
    //! Current drag coefficient
    IMC::Scalar m_drag_coeff;
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
    float m_curr_drag_coeff;
    //! Current reference area
    float curr_ref_area;
    //! Parachute handler
    Parachute m_parachute;
    //! Task arguments
    Arguments m_args;

    Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Periodic(name, ctx),
        dt(0),
        m_dcm(3, 3 ,0),
        m_trigger_msec(0),
        m_prev_time_sec(0),
        m_mass(0),
        lift_off(false),
        m_curr_drag_coeff(0),
        curr_ref_area(0),
        m_parachute(m_args.parachute),
        m_args(this)
    {
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
      reserveEntity(c_gravity_accel_ent_label);
      reserveEntity(c_dynp_ent_label);
      reserveEntity(c_navigation_ent_label);
      reserveEntity(c_drag_coeff_ent_label);
    }

    void
    onEntityResolution() override
    {
      m_thrust.setSourceEntity(resolveEntity(c_thrust_ent_label));
      m_drag.setSourceEntity(resolveEntity(c_drag_force_ent_label));
      m_weight.setSourceEntity(resolveEntity(c_weight_ent_label));
      m_gravity.setSourceEntity(resolveEntity(c_gravity_accel_ent_label));
      m_dynp.setSourceEntity(resolveEntity(c_dynp_ent_label));
      m_estate.setSourceEntity(resolveEntity(c_navigation_ent_label));
      m_drag_coeff.setSourceEntity(resolveEntity(c_drag_coeff_ent_label));
    }

    void
    onUpdateParameters() override
    {
      dt = 1.0 / getFrequency();

      if (m_args.length < 0 || m_args.cg < 0 || m_args.cp < 0)
        throw std::invalid_argument("Length and positions can't be negative");

      if (m_args.cg > m_args.length)
        throw std::invalid_argument("Center of gravity greater than length");

      if (m_args.cp > m_args.length)
        throw std::invalid_argument("Center of pressure greater than length");

      if (m_args.cp < m_args.cg)
        war("launcher might be unstable : cp < cg (%f < %f)", m_args.cp, m_args.cg);

      if (m_args.motor.thrust_curve.empty())
      {
        war("No thrust curve found");
        return;
      }

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
        m_estate.height = m_args.initial_altitude;
      }
    }

    void
    onResourceAcquisition() override
    {
      m_motor = std::make_unique<Motor>(this, m_args.motor);
      m_drag_model = std::make_unique<DragModel>(m_args.coeff_drag);
    }

    //! Initialize resources.
    void
    onResourceInitialization() override
    {
      if (!m_motor->parseThrustCurve())
      {
        setEntityState(EntityState::ESTA_ERROR, String::str("Invalid thrust curve"));
        throw RestartNeeded(String::str("Invalid thrust curve"), 60);
      }

      setInitialConditions();
      setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
    }

    void
    consume(const IMC::SetThrusterActuation* msg)
    {
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

        m_drag.x = 0;
        m_drag.y = 0;
        m_drag.z = 0;

        m_estate.w = 0;
        m_estate.height = m_args.initial_altitude;
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
      m_curr_drag_coeff = std::max(m_parachute.getDragCoeff(), m_curr_drag_coeff);
      m_parachute.trigger();
    }

    Math::Matrix
    toDcm(const IMC::EstimatedState& es)
    {
      Math::Matrix euler(3, 1, 0);
      euler(0, 0) = es.phi;
      euler(1, 0) = es.theta;
      euler(2, 0) = es.psi;

      return euler.toDCM();
    }

    void
    updateForces(float t)
    {
      updateThrust(t);

      Math::Matrix g(3, 1, 0);
      g(0) = Physics::getGravity(m_estate.height, m_estate.lat);
      g(1) = 0;
      g(2) = 0;
      g = m_dcm * g;

      m_gravity.x = g(0);
      m_gravity.y = g(1);
      m_gravity.z = g(2);

      m_weight.x = m_gravity.x * m_mass;
      m_weight.y = m_gravity.y * m_mass;
      m_weight.z = m_gravity.z * m_mass;

      m_dynp.value = Physics::getDynamicPressure(m_args.atmos_density, m_estate.height, m_estate.w);

      m_drag_coeff.value = m_drag_model->computeDragCoefficient(m_estate.w);

      Math::Matrix d(3, 1, 0);
      d(0, 0) = m_drag_model->computeDrag(m_estate.w, curr_ref_area, m_dynp.value);
      d(1, 0) = 0;
      d(2, 0) = 0;
      d = m_dcm * d;
      m_drag.x = d(0, 0);
      m_drag.y = d(1, 0);
      m_drag.z = d(2, 0);

      // @todo x and y
      m_drag.z = m_drag.z * (m_estate.w >= 0 ? -1.0f : 1.0f);
    }

    void
    updateThrust(float curr_time_sec)
    {
      if (!m_motor->isActive())
      {
        m_thrust.x = 0;
        m_thrust.y = 0;
        m_thrust.z = 0;
        return;
      }

      // For now assume that all motors are equal
      // @todo x and y
      fp64_t f = m_motor->computeEngineThrust(curr_time_sec);
      Math::Matrix thrust(3, 1, 0);
      thrust(0, 0) = f;
      thrust(1, 0) = 0;
      thrust(2, 0) = 0;
      thrust = m_dcm * thrust;

      m_thrust.x = thrust.element(0, 0);
      m_thrust.y = thrust.element(1, 0);
      m_thrust.z = thrust.element(2, 0);
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
    computeNewState(const IMC::EstimatedState& curr_state, float t_sec, float mass)
    {
      SimulationState new_state;
      Math::Matrix dcm = toDcm(curr_state);

      fp64_t f = m_motor->computeEngineThrust(t_sec);
      Math::Matrix f_thrust(3, 1, 0);
      f_thrust(0, 0) = f;
      f_thrust(1, 0) = 0;
      f_thrust(2, 0) = 0;
      f_thrust = dcm * f_thrust;

      float dynp = Physics::getDynamicPressure(m_args.atmos_density, curr_state.height, curr_state.w);

      Math::Matrix f_drag(3, 1, 0);
      f_drag(0, 0) = m_drag_model->computeDrag(curr_state.w, curr_ref_area, dynp);
      f_drag(1, 0) = 0;
      f_drag(2, 0) = 0;
      f_drag = dcm * f_drag;

      f_drag = f_drag * (curr_state.w >= 0 ? -1.0f : 1.0f);

      // update linear acceleration
      Math::Matrix g(3, 1, 0);
      g(0, 0) = Physics::getGravity(curr_state.height, curr_state.lat);
      g(1, 0) = 0;
      g(2, 0) = 0;
      g = dcm * g;

      new_state.m_a = ((f_thrust + f_drag) / mass) - g;

      new_state.m_v(0, 0) = curr_state.u;
      new_state.m_v(1, 0) = curr_state.v;
      new_state.m_v(2, 0) = curr_state.w;

      return new_state;
    }

    void
    rk4Step(float t_sec)
    {
      // not enough to lift
      if (m_thrust.z < Physics::getGravity(m_estate.height, m_estate.lat) * m_mass && m_estate.height == 0)
        return;

      if (!lift_off && m_estate.height != 0)
        lift_off = true;

      SimulationState k1 = computeNewState(m_estate, t_sec, m_mass);

      std::unique_ptr<EstimatedState> estate_clone(m_estate.clone());
      float rk4dt;
      float mass;

      // k2
      rk4dt = 0.5f * dt;
      mass = computeMass(t_sec + rk4dt);
      estate_clone->u = m_estate.u + k1.m_a.element(0, 0) * 0.5;
      estate_clone->v = m_estate.v + k1.m_a.element(1, 0) * 0.5;
      estate_clone->w = m_estate.w + k1.m_a.element(2, 0) * 0.5;

      estate_clone->x = m_estate.x + k1.m_v.element(0, 0) * 0.5;
      estate_clone->y = m_estate.y + k1.m_v.element(1, 0) * 0.5;
      estate_clone->z = m_estate.z + k1.m_v.element(2, 0) * 0.5;
      SimulationState k2 = computeNewState(*estate_clone, t_sec + rk4dt, mass);

      // k3
      rk4dt = 0.5f * dt;
      mass = computeMass(t_sec + rk4dt);
      estate_clone->clear();
      estate_clone->u = m_estate.u  + k2.m_a.element(0, 0) * 0.5;
      estate_clone->v = m_estate.v  + k2.m_a.element(1, 0) * 0.5;
      estate_clone->w = m_estate.w  + k2.m_a.element(2, 0) * 0.5;

      estate_clone->x = m_estate.x + k2.m_v.element(0, 0) * 0.5;
      estate_clone->y = m_estate.y + k2.m_v.element(1, 0) * 0.5;
      estate_clone->z = m_estate.z + k2.m_v.element(2, 0) * 0.5;
      SimulationState k3 = computeNewState(*estate_clone, t_sec + rk4dt, mass);

      // k4
      rk4dt = dt;
      mass = computeMass(t_sec + rk4dt);
      estate_clone->clear();
      estate_clone->u = m_estate.u  + k3.m_a.element(0, 0);
      estate_clone->v = m_estate.v  + k3.m_a.element(1, 0);
      estate_clone->w = m_estate.w  + k3.m_a.element(2, 0);

      estate_clone->x = m_estate.x + k3.m_v.element(0, 0);
      estate_clone->y = m_estate.y + k3.m_v.element(1, 0);
      estate_clone->z = m_estate.z + k3.m_v.element(2, 0);
      SimulationState k4 = computeNewState(*estate_clone, t_sec + rk4dt, mass);

      // y(n+1) = y(n) + h*(k1 + 2 * (k2 + k3) + k4)/6
      SimulationState delta;
      // integrate for velocity
      delta.m_v = dt * (k1.m_a + 2 * (k2.m_a + k3.m_a) + k4.m_a) / 6.0f;
      // integrate for position
      delta.m_p = dt * (k1.m_v + 2 * (k2.m_v + k3.m_v) + k4.m_v) / 6.0f;

      // update state

      // velocity
      m_estate.u = m_estate.u + delta.m_v.element(0, 0);
      m_estate.v = m_estate.v + delta.m_v.element(1, 0);
      m_estate.w = m_estate.w + delta.m_v.element(2, 0);

      // position offsets
      m_estate.x = m_estate.x + delta.m_p.element(0, 0);
      m_estate.y = m_estate.y + delta.m_p.element(1, 0);
      m_estate.z = m_estate.z + delta.m_p.element(2, 0);
      WGS84::displace(m_estate.x, m_estate.y, -m_estate.z, &m_estate.lat, &m_estate.lon, &m_estate.height);
      m_estate.x = 0;
      m_estate.y = 0;
      m_estate.z = 0;

      if (m_estate.height < 0)
      {
        m_estate.height = 0;
        m_estate.w = 0;
      }
    }

    // @fixme: "F = ma" shouldn't be used for variable mass systems
    float
    computeMass(float curr_dt_sec) const
    {
      return m_args.dry_mass + m_motor->getMass(curr_dt_sec);
    }

    void
    setInitialConditions()
    {
      m_estate.theta = -Math::c_half_pi;
      if (m_args.randomize_pitch)
      {
        auto rnd = Random::Factory::create(Random::Factory::c_default, -1.0);
        // max 5º degrees of error
        m_estate.theta += (0.0872) * rnd->uniform();
      }

      dispatch(m_initial_fix);
      dispatch(m_estate);

      inf("Motor name: %s\n "
          "Number of motors: %d\n"
          "Dry Mass: %f\n"
          "Motor mass: %f\n"
          "Area: %f\n"
          "Parachute Drag Coefficient: %f\n"
          "Parachute area: %f\n"
          "Parachute mass: %f\n",
          m_args.motor.name.c_str(),
          m_args.n_motors,
          m_args.dry_mass,
          m_args.motor.mass,
          m_args.area,
          m_parachute.getDragCoeff(),
          m_parachute.getArea(),
          m_parachute.getMass());
    }

    void
    task() override
    {
      if (getEntityState() != IMC::EntityState::ESTA_NORMAL)
        return;

      float curr_time_sec = (Time::Clock::getSinceEpochMsec() - m_trigger_msec) / 1000.0;

      m_mass = computeMass(curr_time_sec);
      updateForces(curr_time_sec);
      rk4Step(curr_time_sec);

      // update dcm
      m_dcm = toDcm(m_estate);

      dispatch(m_thrust);
      dispatch(m_estate);
      dispatch(m_drag);
      dispatch(m_weight);
      dispatch(m_gravity);
      dispatch(m_dynp);
      dispatch(m_drag_coeff);

      m_prev_time_sec = curr_time_sec;
    }
  };
}

DUNE_TASK
