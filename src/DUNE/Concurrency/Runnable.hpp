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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef DUNE_CONCURRENCY_RUNNABLE_HPP_INCLUDED_
#define DUNE_CONCURRENCY_RUNNABLE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Concurrency/ScopedMutex.hpp>
#include <DUNE/Concurrency/Scheduler.hpp>

namespace DUNE
{
  namespace Concurrency
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Runnable;

    class Runnable
    {
    public:
      enum State
      {
        StateStarting,
        StateRunning,
        StateStopping,
        StateDead,
        StateUnknown
      };

      Runnable():
        m_created(false)
      { }

      virtual ~Runnable () = default;

      void
      start()
      {
        startImpl();
        ScopedMutex m(m_created_lock);
        m_created = true;
      }

      void
      stop()
      {
        stopImpl();
      }

      void
      join()
      {
        joinImpl();
      }

      void
      stopAndJoin()
      {
        stop();
        join();
      }

      void
      setPriority(Scheduler::Policy policy, unsigned priority)
      {
        setPriorityImpl(policy, priority);
      }

      unsigned
      getPriority()
      {
        return getPriorityImpl();
      }

      State
      getState()
      {
        return getStateImpl();
      }

      bool
      isCreated()
      {
        ScopedMutex m(m_created_lock);
        return m_created;
      }

      bool
      isStopping()
      {
        return getState() == StateStopping;
      }

      bool
      isRunning()
      {
        return getState() == StateRunning;
      }

      bool
      isStarting()
      {
        return getState() == StateStarting;
      }

      bool
      isDead()
      {
        return getState() == StateDead;
      }

    protected:
      virtual void
      run() = 0;

      virtual void
      startImpl() = 0;

      virtual void
      stopImpl() = 0;

      virtual void
      joinImpl() = 0;

      virtual void
      setStateImpl(State value) = 0;

      virtual State
      getStateImpl() = 0;

      virtual void
      setPriorityImpl(Scheduler::Policy policy, unsigned priority) = 0;

      virtual unsigned
      getPriorityImpl() = 0;

    private:
      bool m_created;
      Mutex m_created_lock;
    };
  }
}

#endif
