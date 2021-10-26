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

#include "Task.hpp"

namespace Simulators::LaunchVehicle
{
  //! Thrust curve function parameters
  struct ThrustCurve
  {
    std::vector<float> time;
    std::vector<float> thrust_value;
  };

  struct PropellantMassModel
  {
    std::vector<float> time;
    std::vector<float> mass;
  };

  class Motor
  {
    //! Tasks that created this motor
    DUNE::Tasks::Task* m_owner_task;
    //! Motor parameters
    const MotorArguments& m_args;
    //! Thrust curve
    ThrustCurve m_thrust_curve_f;
    //! Model for propellant mass depletion
    PropellantMassModel m_prop_mass_model;
    //! If the engines have started combusting
    bool m_triggered;

    void
    parsePropellantMassModel();

  public:
    //! Motor Constructor
    Motor(DUNE::Tasks::Task* m_owner, const MotorArguments& args);

    //! Compute current thrust given a time in milliseconds
    //! since the motor was triggered
    DUNE::Math::Matrix
    computeEngineThrust(float curr_time_sec) const;

    //! Get casing and propellant mass at the given burn time
    double
    getMass(float time_after_trigger_sec) const;

    bool
    parseThrustCurve();

    void
    trigger()
    {
      m_triggered = true;
    }

    bool
    isActive() const
    {
      return m_triggered;
    }
  };
}
#endif
