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

#ifndef SIMULATORS_LAUNCHVEHICLE_MOTOR_HPP_INCLUDED_
#define SIMULATORS_LAUNCHVEHICLE_MOTOR_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace LaunchVehicle
  {
    //! Thrust curve function parameters
    typedef std::map<float, std::pair<float, float> > ThrustCurve;

    class Motor
    {
      //! Tasks that created this motor
      DUNE::Tasks::Task* m_owner_task;
      //! Thrust curve definition, as string
      std::vector<std::string> m_thrust_curve_def;
      //! Mapping between the end of interval of time and the
      //! the pair of m and b that describe the linear thrust function
      ThrustCurve m_thrust_curve_f;
      //! If the engines have started combusting
      bool m_triggered;

    public:
      //! Motor Constructor
      Motor(DUNE::Tasks::Task* m_owner, const std::vector<std::string>& m_thrust_curve_def);

      //! Compute current thrust given a time in milliseconds
      //! since the motor was triggered
      fp64_t
      computeEngineThrust(float curr_time_sec);

      bool
      parseThrustCurve();

      void
      trigger(void)
      {
        m_triggered = true;
      }

      bool
      isActive(void)
      {
        return m_triggered;
      }
    };
  }
}
#endif
