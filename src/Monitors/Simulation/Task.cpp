//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <set>
#include <memory>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "BaselineGenerator.hpp"

namespace Monitors::Simulation
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! simulation file
      std::string simulation_file;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task Arguments
      Arguments m_args;
      //! Start time
      double m_launch_time;
      //! Altitude error
      double m_altitude_error;
      IMC::EstimatedState* m_curr_estate{nullptr};
      std::unique_ptr<Baseline> m_baseline{nullptr};

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_launch_time(0),
        m_altitude_error(0)
      {
        param("Load At Start", m_args.simulation_file)
        .defaultValue("")
        .description("File to load for comparison");

        // Bind messagens
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::FlightEvent>(this);
      }

      void
      onResourceInitialization() override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);

        try
        {
          m_baseline = BaselineGenerator::generateBaseline(this, m_args.simulation_file);
        }
        catch (std::exception& e)
        {
          setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IDLE);
          err("failed to load %s: %s", m_args.simulation_file.c_str(), e.what());
          return;
        }

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onEntityResolution() override
      {
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        requestActivation();
        m_launch_time = msg->getTimeStamp();
        m_baseline->start();

        war("Starting error integration...");
      }

      void 
      consume(const IMC::FlightEvent* m)
      {
        auto rv = m_baseline->onEvent(m);

        if (rv == nullptr)
          return;

        inf("[curr] %.4f m | %.4f m/s | %.4f m/s | %.4f m/s",
            m_curr_estate->height,
            m_curr_estate->u, m_curr_estate->v, m_curr_estate->w);

        inf("[base] %.4f m | %.4f m/s | %.4f m/s | %.4f m/s",
            rv->height,
            rv->u, rv->v, rv->w);
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (!isActive())
          return;

        if (msg->getSource() != getSystemId())
          return;

        m_curr_estate = msg->clone();

        if (m_baseline->hasFinished())
          return;

        double next_step = m_baseline->nextStep();
        double curr_step = msg->getTimeStamp() - m_launch_time;
        if (curr_step < next_step)
          return;

        // Sum error
        m_baseline->step();
        m_altitude_error += (msg->height - m_baseline->getAltitudeAtStep()) * m_baseline->getTimestep();

        debug("Altitude Error: %f", m_altitude_error);
      }

      void
      onMain() override
      {
        while (!stopping())
        {
          if (getEntityState() == IMC::EntityState::ESTA_NORMAL)
            waitForMessages(1.0);
          else
          {
            Delay::wait(1.0);
            err("in error");
          }
        }
      }
    };
  }

DUNE_TASK
