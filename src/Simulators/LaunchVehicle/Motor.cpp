
#include "Motor.hpp"

namespace Simulators
{
  namespace LaunchVehicle
  {
    Motor::Motor(DUNE::Tasks::Task* owner, const std::vector<std::string>& thrust_curve_def) :
      m_owner_task(owner),
      m_thrust_curve_def(thrust_curve_def),
      m_triggered(false)
    { }


    fp64_t
    Motor::computeEngineThrust(float curr_time_sec)
    {
      fp64_t thrust = 0;

      bool found = false;
      std::map<float, std::pair<float, float> >::iterator itr = m_thrust_curve_f.begin();
      while (itr != m_thrust_curve_f.end() && !found)
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
    Motor::parseThrustCurve()
    {
      // previous data points
      float yn1 = 0;
      float xn1 = 0;
      for (std::string line : m_thrust_curve_def)
      {
        float xn;
        float yn;
        if (std::sscanf(line.c_str(), "%f %f", &xn, &yn) != 2)
        {
          m_owner_task->err("Invalid thrust data points %s", line.c_str());
          return false;
        }

        float m = (yn - yn1) / (float) (xn - xn1);
        float b = yn - xn * m;
        m_thrust_curve_f[xn] = std::make_pair(m, b);

        yn1 = yn;
        xn1 = xn;
      }

      return true;
    }
  }
}
