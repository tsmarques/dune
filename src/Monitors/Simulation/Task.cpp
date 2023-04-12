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

// DUNE headers.
#include <DUNE/DUNE.hpp>

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
      //! Simulation file handle
      std::istream* m_is;
      //! Start time
      double m_launch_time;
      //! Integration timestep
      double m_timestep;
      //! Estimated State data
      std::vector<IMC::EstimatedState> m_estate_data;
      //! Estimated State data step iterator
      std::vector<IMC::EstimatedState>::iterator m_estate_itr;
      //! Altitude error
      double m_altitude_error;
      //! Acceleration data
      std::vector<IMC::Acceleration> m_acc_data;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_is(nullptr),
        m_launch_time(0),
        m_timestep(0),
        m_altitude_error(0)
      {
        param("Load At Start", m_args.simulation_file)
        .defaultValue("")
        .description("File to load for comparison");
        
        // Bind messagens
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::EstimatedState>(this);
      }

      void
      onResourceInitialization() override
      {
        setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_ACTIVATING);
        
        loadData(m_args.simulation_file);
        
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

        m_estate_itr = m_estate_data.begin();

        war("Starting error integration...");
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (!isActive())
          return;

        if (msg->getSource() != getSystemId())
          return;

        if (m_estate_itr == m_estate_data.end())
          return;

        double next_step = m_launch_time + m_estate_itr->getTimeStamp();
        if (msg->getTimeStamp() < next_step)
          return;

        // Sum error
        m_altitude_error += (msg->height - m_estate_itr->height) * m_timestep;
        // Increase iterator
        m_estate_itr++;

        debug("Altitude Error: %f", m_altitude_error);
      }

      void
      loadData(const std::string& file)
      {
        war ("Loading data...");
        if (!Path(file).isFile())
        {
          err("'%s' %s", file.c_str(), DTR("is not a regular file"));
          return;
        }

        try
        {
          Compression::Methods method = Compression::Factory::detect(file.c_str());
          if (method == Compression::METHOD_UNKNOWN)
            m_is = new std::ifstream(file.c_str(), std::ios::binary);
          else
            m_is = new Compression::FileInput(file.c_str(), method);
        }
        catch (std::exception& e)
        {
          err("%s '%s': %s", DTR("could not open"), file.c_str(), e.what());
          return;
        }

        IMC::Message* m = nullptr;

        try
        {
          while ((m = DUNE::IMC::Packet::deserialize(*m_is)) != nullptr && !m_is->eof())
          {
            if (m->getId() == DUNE_IMC_ESTIMATEDSTATE)
            {
              m_estate_data.push_back(*static_cast<IMC::EstimatedState*>(m));
            }
            else if (m->getId() == DUNE_IMC_ACCELERATION)
            {
              m_acc_data.push_back(*static_cast<IMC::Acceleration*>(m));
            }
          }
        }
        catch (std::exception& e)
        {
          err("Parsing error: %s", e.what());
          delete m;
          return;
        }

        delete m;

        // Calculate timestep
        m_timestep = m_estate_data[1].getTimeStamp() - m_estate_data[0].getTimeStamp();
        war("Ready");
      }

      void
      onMain() override
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }

DUNE_TASK
