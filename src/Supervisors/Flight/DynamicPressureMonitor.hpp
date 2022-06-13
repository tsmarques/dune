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

#ifndef SUPERVISORS_FLIGHT_DYNPRESSURE_MONITOR_HPP_INCLUDED_
#define SUPERVISORS_FLIGHT_DYNPRESSURE_MONITOR_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace Supervisors::Flight
{
  using DUNE_NAMESPACES;

  class DynamicPressureMonitor
  {
  public:
    //! After maximum pressure accumulate this amount of data until triggering
    uint16_t m_window_size;
    //! Current maximum pressure read
    fp64_t m_max_press;
    //! When == m_window_size, trigger MAX Q
    uint16_t m_nmatch;
    //! If this montiro has been triggered
    bool m_triggered;

    explicit DynamicPressureMonitor(uint16_t window_size) :
        m_window_size(window_size),
        m_max_press(0),
        m_nmatch(0),
        m_triggered(false)
    { }

    //! Return if MAX Q has been reached
    bool
    maxDynReached() const
    {
      return m_triggered;
    }

    void
    consume(const IMC::Pressure* msg)
    {
      if (m_triggered)
        return;

      if (msg->value > m_max_press)
      {
        m_max_press = msg->value;
        m_nmatch = 0;
      }
      else
        ++m_nmatch;

      m_triggered = (m_nmatch >= m_window_size);
    }
  };
}

#endif
