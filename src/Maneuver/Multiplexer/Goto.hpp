//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Pedro Calado                                                     *
// Author: Eduardo Marques (original maneuver implementation)               *
//***************************************************************************

#ifndef MANEUVER_MULTIPLEXER_GOTO_HPP_INCLUDED_
#define MANEUVER_MULTIPLEXER_GOTO_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Maneuver
{
  namespace Multiplexer
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Goto;

    //! Plan Specification parser
    class Goto
    {
    public:
      //! Default constructor.
      //! @param[in] task pointer to Maneuver task
      Goto(Maneuvers::Maneuver* task):
        m_task(task)
      { }

      //! Start maneuver function
      //! @param[in] maneuver goto maneuver message
      void
      start(const IMC::Goto* maneuver)
      {
        m_task->setControl(IMC::CL_PATH);

        IMC::DesiredPath path;
        path.end_lat = maneuver->lat;
        path.end_lon = maneuver->lon;
        path.end_z = maneuver->z;
        path.end_z_units = maneuver->z_units;
        path.speed = maneuver->speed;
        path.speed_units = maneuver->speed_units;

        m_task->dispatch(path);
      }

      //! On PathControlState message
      //! @param[in] pcs pointer to PathControlState message
      void
      onPathControlState(const IMC::PathControlState* pcs)
      {
        if (pcs->flags & IMC::PathControlState::FL_NEAR)
          m_task->signalCompletion();
        else
          m_task->signalProgress(pcs->eta);
      }

      ~Goto(void)
      { }

    private:
      //! Pointer to task
      Maneuvers::Maneuver* m_task;
    };
  }
}

#endif