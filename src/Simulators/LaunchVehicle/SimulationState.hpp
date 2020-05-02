#ifndef SIMULATORS_LAUNCHVEHICLE_SIMULATION_STATE_HPP_INCLUDED_
#define SIMULATORS_LAUNCHVEHICLE_SIMULATION_STATE_HPP_INCLUDED_

#include <DUNE/Math/Matrix.hpp>



namespace Simulators::LaunchVehicle
{
  struct SimulationState
  {
    //! Linear velocity
    DUNE::Math::Matrix m_v;
    //! Linear acceleration
    DUNE::Math::Matrix m_a;
    //! Rotational Velocity
    DUNE::Math::Matrix m_rv;
    //! Rotational Aceleration
    DUNE::Math::Matrix m_ra;
    //! Position
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
