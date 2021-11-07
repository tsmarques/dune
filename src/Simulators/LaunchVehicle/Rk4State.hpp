#ifndef SIMULATORS_LAUNCHVEHICLE_SIMULATION_STATE_HPP_INCLUDED_
#define SIMULATORS_LAUNCHVEHICLE_SIMULATION_STATE_HPP_INCLUDED_

#include <DUNE/Math/Matrix.hpp>

namespace Simulators::LaunchVehicle
{
  struct Rk4State
  {
    //! Linear velocity (x, y, z)
    DUNE::Math::Matrix v;
    //! Linear acceleration (x, y, z)
    DUNE::Math::Matrix a;
    //! Angular Velocity (x, y, z)
    DUNE::Math::Matrix w;
    //! Angular Acceleration (x, y, z)
    DUNE::Math::Matrix wa;
    //! Displacement (x, y, z)
    DUNE::Math::Matrix p;

    Rk4State() :
      v(3, 1),
      a(3, 1),
      w(3, 1),
      wa(3, 1),
      p(3, 1)
    {  }
  };
}

#endif
