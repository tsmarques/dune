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
// Author: Tiago Sá Marques                                                 *
//***************************************************************************

#ifndef DUNE_PHYSICS_HPP_INCLUDED_
#define DUNE_PHYSICS_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace DUNE::Physics
{
  //! Get the atmospheric density at the given height
  //! @param[i] sea_level_dens Sea level density
  //! @param[in] height body's height
  inline fp64_t
  getAtmosphericDensity(double sea_level_dens, double height)
  {
    return sea_level_dens * std::exp((-height / Math::c_atmos_scale_height));
  }

  //! Compute the dynamic pressure of a body with the given velocity
  //! at the given height
  //! @param[in] height body's height
  //! @param[i] sea_level_dens Sea level density
  //! @param[i] vertical_velocity Body's vertical velocity
  inline fp64_t
  getDynamicPressure(double sea_level_dens, double height, double vertical_velocity)
  {
    return 0.5 * Physics::getAtmosphericDensity(sea_level_dens, height) * std::pow(vertical_velocity, 2);
  }

  //! Compute the drag force from a body moving vertically through the air
  //! @param[in] cd body's drag coefficient
  //! @param[i] area Body's cross-sectional area
  //! @param[in] height body's height
  //! @param[i] sea_level_dens Sea level density
  //! @param[i] vertical_velocity Body's vertical velocity
  inline fp64_t
  getDragForce(double cd, double area, double sea_level_dens, double height, double vertical_velocity)
  {
    return cd * area * getDynamicPressure(sea_level_dens, height, vertical_velocity);
  }

  //! Compute the drag force from a body moving vertically through the air
  //! @param[in] cd body's drag coefficient
  //! @param[i] area Body's cross-sectional area
  //! @param[in] dynp Current dynamic pressure
  inline fp64_t
  getDragForce(double cd, double area, double dynp)
  {
    return cd * area * dynp;
  }

  //!Approximate acceleration due to gravity on the surface of the Earth
  //! based on the altitude
  //! @param[in] altitude_m Altitude in meters
  //! @param[in] latitude_rad Latitude in radians
  inline fp64_t
  getGravity(double altitude_m, double latitude_rad)
  {
    double alt_km = altitude_m / 1000.0f;

    double sin2lat = std::pow(std::sin(latitude_rad), 2);
    double g0 = 9.7803267714 * ((1.0 + 0.00193185138639 * sin2lat) /
                                std::sqrt(1.0 - 0.00669437999013 * sin2lat));
    return g0 * std::pow(c_earth_radius / (c_earth_radius + alt_km), 2);
  }
}

#endif
