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
// Author: Tiago Marques                                                    *
//***************************************************************************

#include <thread>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include <Mahi/Gui.hpp>
#include <Mahi/Util.hpp>

#include "Renderer.hpp"

namespace UI::Rviz
{
  using DUNE_NAMESPACES;

  struct Task: public DUNE::Tasks::Periodic
  {
    //! Signal renderer to keep drawing
    std::atomic<bool> m_canary;
    //! Renderer thread
    std::thread m_worker;
    //! Flag if we started renderer
    bool m_running;
    RendererArguments m_args_rend;
    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_running(false),
        m_args_rend(m_canary)
    {
      bind<IMC::EstimatedState>(this);
      bind<IMC::Force>(this);
    }

    void
    startRenderer(float init_t)
    {
      m_canary.store(true);
      m_running = true;
      Renderer m_rend(m_args_rend, init_t);
      m_rend.run();
    }

    void
    onEntityResolution() override
    {
      m_args_rend.eid_drag = resolveEntity("LV - Drag");
      m_args_rend.eid_thrust = resolveEntity("LV - Thrust");
    }

    void
    onResourceInitialization() override
    {
      setEntityState(IMC::EntityState::ESTA_NORMAL, CODE_ACTIVE);
    }

    void
    onResourceRelease() override
    {
      if (!m_running)
        return;

      m_canary.store(false);
      if (m_worker.joinable())
        m_worker.join();
    }

    void
    consume(const IMC::Force* m)
    {
      if (!m_running)
        return;

      m_args_rend.inqueue.push(m->clone());
    }

    void
    consume(const EstimatedState* m)
    {
      m_args_rend.inqueue.push(m->clone());

      if (!m_running)
      {
        m_running = true;
        m_worker = std::thread(&Task::startRenderer, this, m->getTimeStamp());
      }
    }

    //! Main loop.
    void
    task() override
    {
      IMC::Message* m = m_args_rend.outqueue.pop();
      while (m != nullptr)
      {
        dispatch(m);
        delete m;

        m = m_args_rend.outqueue.pop();
      }
    }
  };
}

DUNE_TASK
