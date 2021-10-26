#include "Motor.hpp"

#include <utility>

namespace Simulators::LaunchVehicle
{
  Motor::Motor(DUNE::Tasks::Task* owner, const MotorArguments& args) :
      m_owner_task(owner),
      m_args(args),
      m_triggered(false)
  {
    parsePropellantMassModel();
  }


  DUNE::Math::Matrix
  Motor::computeEngineThrust(float curr_time_sec) const
  {
    float value = piecewiseLI(m_thrust_curve_f.thrust_value,
                              m_thrust_curve_f.time,
                              curr_time_sec);

    // [x, y, z]
    DUNE::Math::Matrix force(1, 3, 0);
    force(0, 0) = 0;
    force(0, 1) = 0;
    force(0, 2) = value > 0 ? value : 0;

    return force;
  }

  bool
  Motor::parseThrustCurve()
  {
    for (const std::string& line : m_args.thrust_curve)
    {
      float xn;
      float yn;
      if (std::sscanf(line.c_str(), "%f %f", &xn, &yn) != 2)
      {
        m_owner_task->err("Invalid thrust data points %s", line.c_str());
        return false;
      }

      m_thrust_curve_f.time.push_back(xn);
      m_thrust_curve_f.thrust_value.push_back(yn);
    }

    return true;
  }

  void
  Motor::parsePropellantMassModel()
  {
    for (const std::string& line : m_args.prop_mass)
    {
      float xn;
      float yn;
      if (std::sscanf(line.c_str(), "%f %f", &xn, &yn) != 2)
        throw std::invalid_argument(String::str("Invalid propellant mass data points %s", line.c_str()));

      m_prop_mass_model.time.push_back(xn);
      m_prop_mass_model.mass.push_back(yn);
    }

    m_owner_task->inf("test");
  }

  double
  Motor::getMass(float time_after_trigger_sec) const
  {
    double mass = m_args.mass;
    if (!m_triggered)
      return mass + m_prop_mass_model.mass[0];

    float value = piecewiseLI(m_prop_mass_model.mass,
                              m_prop_mass_model.time,
                              time_after_trigger_sec);

    if (value < 0)
      return mass;

    if (value > m_prop_mass_model.mass[0])
      return mass + m_prop_mass_model.mass[0];

    return mass + value;
  }
}
