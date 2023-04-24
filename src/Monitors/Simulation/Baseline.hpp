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
// Author: Tiago Sa Marques                                                 *
//***************************************************************************

#ifndef MONITORS_SIMULATION_BASELINE_HPP_INCLUDED_
#define MONITORS_SIMULATION_BASELINE_HPP_INCLUDED_

#include <memory>
#include <optional>

#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Compression.hpp>

using namespace DUNE;

namespace Monitors::Simulation
{
  class Baseline
  {
    DUNE::Tasks::Task* m_task{ nullptr };
    //! Simulation file handle
    std::istream* m_is{ nullptr };
    //! Estimated State data
    std::vector<IMC::EstimatedState> m_estate_data{};
    //! Estimated State data step iterator
    std::vector<IMC::EstimatedState>::iterator m_estate_itr{};
    //! Acceleration data
    std::vector<IMC::Acceleration> m_acc_data{};
    //! Flight events
    std::vector<IMC::FlightEvent> m_flight_stages{};
    //! Current baseline flight stage
    std::vector<IMC::FlightEvent>::iterator m_flight_stage_itr{};
    //! Integration timestep
    double m_timestep{ -1.F };
    //! Launch time
    double m_launch_time{ -1.F };

  private:
    explicit Baseline(DUNE::Tasks::Task* owner) : m_task(owner) {}

  public:
    Baseline(const Baseline&)            = delete;
    Baseline& operator=(const Baseline&) = delete;

    static std::unique_ptr<Baseline>
    from(DUNE::Tasks::Task* owner, const std::string& lsf)
    {
      // use new so we can call private constructor
      auto __ptr = new Baseline(owner);
      std::unique_ptr<Baseline> rv{ __ptr };

      rv->loadData(lsf);

      return rv;
    }

    void
    step()
    {
      m_estate_itr++;
    }

    double
    getAltitudeAtStep() const
    {
      // todo check if finished
      return m_estate_itr->height;
    }

    bool
    hasFinished() const
    {
      return m_estate_itr == m_estate_data.end();
    }

    double
    nextStep() const
    {
      return m_estate_itr->getTimeStamp();
    }

    double
    getTimestep() const
    {
      return m_timestep;
    }

    void
    start()
    {
      m_estate_itr = m_estate_data.begin();
      m_flight_stage_itr = m_flight_stages.begin();
    }

    //! Handle new simulation FlightEvent and return baseline navigation data
    //! at the corresponding event
    const IMC::EstimatedState*
    onEvent(const IMC::FlightEvent* m)
    {
      if (m->type != m_flight_stage_itr->type)
      {
        m_task->war("mismatched flight stages: got %d, expected %d", m->type,
                    m_flight_stage_itr->type);
        return nullptr;
      }

      m_flight_stage_itr++;

      return m_estate_itr.base();
    }

    void
    loadData(const std::string& file)
    {
      m_task->war("Loading data...");
      if (!FileSystem::Path(file).isFile())
      {
        m_task->err("'%s' %s", file.c_str(), DTR("is not a regular file"));
        return;
      }

      try
      {
        Compression::Methods method =
            Compression::Factory::detect(file.c_str());
        if (method == Compression::METHOD_UNKNOWN)
          m_is = new std::ifstream(file.c_str(), std::ios::binary);
        else
          m_is = new Compression::FileInput(file.c_str(), method);
      }
      catch (std::exception& e)
      {
        m_task->err("%s '%s': %s", DTR("could not open"), file.c_str(),
                    e.what());
        return;
      }

      IMC::Message* m = nullptr;

      try
      {
        while ((m = DUNE::IMC::Packet::deserialize(*m_is)) != nullptr
               && !m_is->eof())
        {
          if (m->getId() == DUNE_IMC_ESTIMATEDSTATE)
          {
            m_estate_data.push_back(*static_cast<IMC::EstimatedState*>(m));
          }
          else if (m->getId() == DUNE_IMC_ACCELERATION)
          {
            m_acc_data.push_back(*static_cast<IMC::Acceleration*>(m));
          }
          else if (m->getId() == DUNE_IMC_FLIGHTEVENT)
          {
            auto ev = static_cast<IMC::FlightEvent*>(m);
            if (ev->type == IMC::FlightEvent::FLEV_IDLE)
              continue;

            m_flight_stages.push_back(*ev);
          }
        }
      }
      catch (std::exception& e)
      {
        m_task->err("Parsing error: %s", e.what());
        delete m;
        return;
      }

      delete m;

      if (m_estate_data.empty())
        throw std::runtime_error("Failed to load EstimatedState messages from file.");

      // Calculate timestep
      m_timestep =
          m_estate_data[1].getTimeStamp() - m_estate_data[0].getTimeStamp();

      m_task->war("Ready");
    }
  };
}

#endif
