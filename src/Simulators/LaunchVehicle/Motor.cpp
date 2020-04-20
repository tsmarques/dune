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

    ThrustParameters
    Motor::getFunctionParameters(float curr_time_sec)
    {
      // if (m_thrust_curve_f.find(curr_time_sec) != m_thrust_curve_f.end())
      //   return m_thrust_curve_f[curr_time_sec];

      bool found = false;
      std::map<float, ThrustParameters >::iterator itr = m_thrust_curve_f.begin();
      while (itr != m_thrust_curve_f.end() && !found)
      {
        if (curr_time_sec <= itr->first)
        {
          found = true;
          m_owner_task->debug("Found interval for %f starting at %f", curr_time_sec, itr->first);
          continue;
        }

        ++itr;
      }

      if (found)
        return (itr->second);

      // default parameters
      return m_thrust_curve_f[-1];
    }


    fp64_t
    Motor::computeEngineThrust(float curr_time_sec)
    {
      fp64_t thrust = 0;

      bool found = false;
      std::map<float, ThrustParameters >::iterator itr = m_thrust_curve_f.begin();
      while (itr != m_thrust_curve_f.end() && !found)
      {
        if (curr_time_sec < itr->first)
        {
          found = true;

          ThrustParameters linear_params = itr->second;
          thrust = linear_params.m * curr_time_sec + linear_params.b;
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
      for (const std::string& line : m_thrust_curve_def)
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

        ThrustParameters f_params;
        f_params.interval_start = xn1;
        f_params.interval_end = xn;
        f_params.m = m;
        f_params.b = b;

        m_thrust_curve_f[xn] = f_params;

        yn1 = yn;
        xn1 = xn;
      }

      ThrustParameters default_parameters;
      default_parameters.interval_start = -1;
      default_parameters.interval_end = -1;
      default_parameters.m = 0;
      default_parameters.b = 0;
      m_thrust_curve_f[-1] = default_parameters;

      return true;
    }
  }
}
