#ifndef DUNE_SIMULATORS_LAUNCH_VEHICLE__DRAG_MODEL_HPP
#define DUNE_SIMULATORS_LAUNCH_VEHICLE__DRAG_MODEL_HPP

#include <DUNE/Math/General.hpp>
#include <DUNE/Physics.hpp>
#include <string>

using DUNE_NAMESPACES;

namespace Simulators::LaunchVehicle
{
  class DragModel
  {
  public:
    explicit DragModel(const std::vector<std::string>& model_str)
    {
      parseModel(model_str);
    }

    float
    computeDragCoefficient(float speed) const
    {
      float m = speed / Math::c_speed_of_sound_air;
      return Math::piecewiseLI(y_cd, x_mach, m);
    }

    float
    computeDrag(float speed, float ref_area, float dyn_p) const
    {
      return Physics::getDragForce(computeDragCoefficient(speed), ref_area, dyn_p);
    }

  private:
    //! X axis - Mach values
    std::vector<float> x_mach;
    //! Y axis - Drag coefficient
    std::vector<float> y_cd;

    void
    parseModel(const std::vector<std::string>& model_str)
    {
      if (model_str.empty())
        throw std::runtime_error("empty drag model");

      for (const std::string& line : model_str)
      {
        std::vector<std::string> parts;
        String::split(line, " ", parts);

        if (parts.size() != 2)
          throw std::runtime_error(String::str("drag model : bad format %s",
                                               line.c_str()));

        x_mach.push_back(std::atof(parts[0].c_str()));
        y_cd.push_back(std::atof(parts[1].c_str()));
      }

      if (x_mach.size() != y_cd.size())
        throw std::invalid_argument(String::str("Drag model needs symmetric sized data | %u != %u",
                                                x_mach.size(), y_cd.size()));
    }
  };
}
#endif
