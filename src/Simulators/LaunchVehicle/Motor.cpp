#include "Motor.hpp"

#include <utility>

namespace Simulators::LaunchVehicle
{
  Motor::Motor(DUNE::Tasks::Task* owner, std::vector<std::string> thrust_curve_def) :
      m_owner_task(owner),
      m_thrust_curve_def(std::move(thrust_curve_def)),
      m_triggered(false)
  { }


  fp64_t
  Motor::computeEngineThrust(float curr_time_sec) const
  {
    float value = piecewiseLI(m_thrust_curve_f.thrust_value,
                              m_thrust_curve_f.time,
                              curr_time_sec);

    return value > 0 ? value : 0;
  }

  bool
  Motor::parseThrustCurve()
  {
    for (const std::string& line : m_thrust_curve_def)
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
}
