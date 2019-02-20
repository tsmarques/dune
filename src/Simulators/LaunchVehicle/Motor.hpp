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

    namespace Motor
    {
      //! Compute current thrust given a time in milliseconds
      //! since the motor was triggered
      fp64_t
      computeEngineThrust(ThrustCurve& thrust_curve_f, float curr_time_sec)
      {
        fp64_t thrust = 0;

        bool found = false;
        std::map<float, std::pair<float, float> >::iterator itr = thrust_curve_f.begin();
        while (itr != thrust_curve_f.end() && !found)
        {
          if (curr_time_sec < itr->first)
          {
            found = true;

            std::pair<float, float> linear_params = itr->second;
            thrust = linear_params.first * curr_time_sec + linear_params.second;
          }

          ++itr;
        }

        return thrust;
      }

      bool
      parseThrustCurve(DUNE::Tasks::Task* m_owner, ThrustCurve& thrust_curve_f, const std::vector<std::string>& thrust_curve_def)
      {
        // previous data points
        float yn1 = 0;
        float xn1 = 0;
        for (std::string line : thrust_curve_def)
        {
          float xn;
          float yn;
          if (std::sscanf(line.c_str(), "%f %f", &xn, &yn) != 2)
          {
            m_owner->err("Invalid thrust data points %s", line.c_str());
            return false;
          }

          float m = (yn - yn1) / (float) (xn - xn1);
          float b = yn - xn * m;
          thrust_curve_f[xn] = std::make_pair(m, b);

          yn1 = yn;
          xn1 = xn;
        }

        return true;
      }
    }
  }
}
#endif
