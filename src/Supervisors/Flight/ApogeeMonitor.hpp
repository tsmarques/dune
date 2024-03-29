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

#ifndef SUPERVISORS_FLIGHT_APOGEE_MONITOR_HPP_INCLUDED_
#define SUPERVISORS_FLIGHT_APOGEE_MONITOR_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace Supervisors::Flight
{
  using DUNE_NAMESPACES;

  class ApogeeMonitor
  {
  public:
    //! After maximum pressure accumulate this amount of data until triggering
    uint16_t m_window_size;
    //! Current maximum atitude reached
    fp64_t m_max_altitude;
    //! When == m_window_size, trigger apogee detection
    uint16_t m_nmatch;
    //! If this monitor has been triggered
    bool m_triggered;

    explicit ApogeeMonitor(uint16_t window_size) :
        m_window_size(window_size),
        m_max_altitude(0),
        m_nmatch(0),
        m_triggered(false)
    { }

    //! Return if apogee has been reached
    bool
    apogeeReached() const
    {
      return m_triggered;
    }

    fp64_t
    apogeeAltitude() const
    {
      return m_max_altitude;
    }

    void
    consume(const IMC::EstimatedState* msg)
    {
      if (m_triggered)
        return;

      if (msg->height >= m_max_altitude)
      {
        m_max_altitude = msg->height;
        m_nmatch = 0;
      }
      else
        ++m_nmatch;

      m_triggered = (m_nmatch == m_window_size);
    }
  };
}

#endif
