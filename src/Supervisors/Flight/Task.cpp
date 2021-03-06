//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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

#include "DynamicPressureMonitor.hpp"
#include "ApogeeMonitor.hpp"

namespace Supervisors
{
  namespace Flight
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Entity ID for thrust messages
      std::string thrust_ent_label;
      //! Entity ID for pressure messages
      std::string pressure_eid;
      //! Minimum altitude to consider that liftoff has been achieved
      fp32_t liftoff_altitude;
      //! Window size for dynamic pressure monitor
      uint16_t pressure_window_size;
      //! Window size for apogee monitor
      uint16_t altitude_window_size;
      //! Delay in seconds
      double parachute_delay;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Current flight state
      IMC::FlightEvent m_flight_state;
      //! Latest thrust data
      IMC::Force m_thrust;
      //! Latest navigation data
      IMC::EstimatedState m_estate;
      //! Maximum dynamic pressure detector
      DynamicPressureMonitor* m_dyn_monitor;
      //! Apogee detector
      ApogeeMonitor* m_apogee_monitor;
      //! Entity ID for thrust messages
      unsigned int m_thrust_eid;
      //! Timer to trigger parachute
      Time::Counter<double> m_parachute_wdg;
      //! Task Arguments
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_flight_state(),
          m_thrust(),
          m_estate(),
          m_dyn_monitor(NULL),
          m_apogee_monitor(NULL),
          m_thrust_eid(0)
      {
        m_flight_state.type = IMC::FlightEvent::FLEV_IDLE;

        param("Entity Label - Thrust", m_args.thrust_ent_label)
            .defaultValue("LV - Thrust")
            .description("Entity Label for consuming producing Thrust messages");

        param("Entity Label - Pressure", m_args.pressure_eid)
            .defaultValue("LV - Pressure")
            .description("Entity Label for consuming Pressure messages");

        param("Liftoff Altitude", m_args.liftoff_altitude)
            .units(Units::Meter)
            .defaultValue("0.30")
            .description("Minimum altitude to consider that liftoff has been achieved");

        param("Max Q Window Size", m_args.pressure_window_size)
            .defaultValue("5")
            .description("Accumulate this number of pressure messages to make sure"
                         " we are in maximum dynamic pressure");

        param("Apogee Monitor - Window Size", m_args.altitude_window_size)
            .defaultValue("2")
            .description("Accumulate this number of altitude data to make sure"
                         " we have reached apogee");

        param("Parachute Delay", m_args.parachute_delay)
            .defaultValue("10")
            .units(Units::Second)
            .description("Wait this much before triggering parachute recovery");

        m_thrust.value = 0;
        bind<IMC::Force>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::Pressure>(this);
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
        try
        {
          m_thrust_eid = resolveEntity(m_args.thrust_ent_label);
        }
        catch (...)
        {
          err("failed to resolve entity");
        }
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_dyn_monitor = new DynamicPressureMonitor(m_args.pressure_window_size);
        m_apogee_monitor = new ApogeeMonitor(m_args.altitude_window_size);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_dyn_monitor);
        Memory::clear(m_apogee_monitor);
      }

      void
      consume(const IMC::Force* msg)
      {
        if (msg->getSourceEntity() != m_thrust_eid)
          return;

        m_thrust = *msg;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        m_estate = *msg;
        m_apogee_monitor->consume(msg);
      }

      void
      consume(const IMC::Pressure* msg)
      {
        m_dyn_monitor->consume(msg);
      }

      void update()
      {
        uint8_t start_state = m_flight_state.type;
        switch(m_flight_state.type)
        {
          case IMC::FlightEvent::FLEV_IDLE:
            if (m_thrust.value <= 0)
              break;
            inf("ignition");
            m_flight_state.type = IMC::FlightEvent::FLEV_IGNITION;
            break;
          case IMC::FlightEvent::FLEV_IGNITION:
            if (m_estate.height <= m_args.liftoff_altitude)
              break;

            inf("liftoff");
            m_flight_state.type = IMC::FlightEvent::FLEV_LIFTOFF;
            break;
          case IMC::FlightEvent::FLEV_LIFTOFF:
            if (!m_dyn_monitor->maxDynReached())
              break;

            inf("maximum dynamic pressure");
            m_flight_state.type = IMC::FlightEvent::FLEV_MAX_Q;
            break;
          case IMC::FlightEvent::FLEV_MAX_Q:
            // for now nothing to do here
            // TODO transition should'nt be to coasting
            //      coasting is when thrust == 0
            m_flight_state.type = IMC::FlightEvent::FLEV_COASTING;
            break;
          case IMC::FlightEvent::FLEV_COASTING:
            if (!m_apogee_monitor->apogeeReached())
              break;

            inf("apogee");
            m_flight_state.type = IMC::FlightEvent::FLEV_APOGEE;
            m_parachute_wdg.setTop(m_args.parachute_delay);
            break;
          case IMC::FlightEvent::FLEV_APOGEE:
            // TODO trigger recovery timer
            if (!m_parachute_wdg.overflow())
              break;

            inf("recovery");
            m_flight_state.type = IMC::FlightEvent::FLEV_RECOVERY;
            break;
          case IMC::FlightEvent::FLEV_RECOVERY:
            // do nothing ?
            break;
          default:
            war("Unknown flight event %d", m_flight_state.type);
            break;
        }

        if (start_state != m_flight_state.type)
          dispatch(m_flight_state);
      }

      //! Main loop.
      void
      onMain(void)
      {
        setEntityState(EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        while (!stopping())
        {
          consumeMessages();
          update();
        }
      }
    };
  }
}

DUNE_TASK
