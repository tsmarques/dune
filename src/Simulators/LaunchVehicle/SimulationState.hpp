#ifndef SIMULATORS_LAUNCHVEHICLE_SIMULATION_STATE_HPP_INCLUDED_
#define SIMULATORS_LAUNCHVEHICLE_SIMULATION_STATE_HPP_INCLUDED_

#include <DUNE/Math/Matrix.hpp>



namespace Simulators::LaunchVehicle
{
  struct SimulationState
  {
    //! Linear velocity (x, y, z)
    DUNE::Math::Matrix m_v;
    //! Linear acceleration (x, y, z)
    DUNE::Math::Matrix m_a;
    //! Rotational Velocity (x, y, z)
    DUNE::Math::Matrix m_rv;
    //! Rotational Aceleration (x, y, z)
    DUNE::Math::Matrix m_ra;
    //! Displacement (x, y, z)
    DUNE::Math::Matrix m_p;

    SimulationState() :
        m_v(1, 3, 0),
        m_a(1, 3, 0),
        m_rv(1, 3, 0),
        m_ra(1, 3, 0),
        m_p(1, 3, 0)
    {  }
  };
}

#endif