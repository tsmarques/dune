//**************************************************************************************************
// Copyright (C) 2020 OceanScan - Marine Systems & Technology, Lda. *
//**************************************************************************************************
//                                                                                                 *
// All information contained herein is, and remains the property of OceanScan -
// Marine             * Systems & Technology, Lda. Dissemination of this
// information or reproduction of this material   * is strictly forbidden unless
// prior written permission is obtained from OceanScan - Marine       * Systems
// & Technology, Lda. *
//                                                                                                 *
// This file is subject to the terms and conditions defined in file
// 'LICENSE.txt', which is part   * of this source code package. *
//                                                                                                 *
//**************************************************************************************************

#ifndef SIMULATORS_LAUNCHVEHICLE_PARACHUTE_HPP_INCLUDED_
#define SIMULATORS_LAUNCHVEHICLE_PARACHUTE_HPP_INCLUDED_

#include <DUNE/Simulation/VSIM/Object.hpp>

namespace Simulators::LaunchVehicle
{
  //! Initialization arguments
  //! Throughout simulation use proper getters for current values
  //! instead of accessing directly
  struct DuneArguments
  {
    //! Parachute's drag coefficient
    float drag_coeff;
    //! parachute's cross sectional area
    float area;
    //! Parachute's mass in kg
    float mass;
  };

  class Parachute
  {
  public:
    //! DUNE Arguments
    DuneArguments m_args;

    Parachute() :
        m_is_triggered(false),
        m_inertia(),
        m_forces(),
        m_args()
    { }

  private:
    //! If this parachute has been triggered
    bool m_is_triggered;
    //! Inertia matrix.
    double m_inertia[6];
    //! Forces acting on the vehicle. (body-fixed reference frame)
    double m_forces[6];

  public:
    void
    trigger()
    {
      m_is_triggered = true;
    }

    float
    getArea()
    {
      return m_args.area;
    }

    float
    getDragCoeff()
    {
      return m_args.drag_coeff;
    }

    float
    getMass()
    {
      return m_is_triggered ? m_args.mass : 0;
    }
  };
}

#endif
