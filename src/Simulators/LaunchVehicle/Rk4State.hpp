#ifndef SIMULATORS_LAUNCHVEHICLE_RK4_STATE_HPP_INCLUDED_
#define SIMULATORS_LAUNCHVEHICLE_RK4_STATE_HPP_INCLUDED_

#include <DUNE/Math/Matrix.hpp>

namespace Simulators::LaunchVehicle
{
  struct Rk4State
  {
    //! Linear velocity (x, y, z)
    DUNE::Math::Matrix v;
    //! Linear acceleration (x, y, z)
    DUNE::Math::Matrix a;
    //! Displacement (x, y, z)
    DUNE::Math::Matrix p;
    //! Angular Velocity (x, y, z)
    DUNE::Math::Matrix w;
    //! Angular Acceleration (x, y, z)
    DUNE::Math::Matrix wa;
    //! Euler angles (roll, pitch, yaw)
    DUNE::Math::Matrix e;

    Rk4State() :
      v(3, 1, 0),
      a(3, 1, 0),
      p(3, 1, 0),
      w(3, 1, 0),
      wa(3, 1, 0),
      e(3, 1, 0)
    {  }
  };
}

#endif
