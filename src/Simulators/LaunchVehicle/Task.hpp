#ifndef DUNE_SIMULATORS_LAUNCH_VEHICLE_HPP
#define DUNE_SIMULATORS_LAUNCH_VEHICLE_HPP

#include "Parachute.hpp"

namespace Simulators::LaunchVehicle
{
  using DUNE_NAMESPACES;

  //! Drag force entity label
  static const char* c_drag_force_ent_label = "LV - Drag";
  //! Weight entity label
  static const char* c_weight_ent_label = "LV - Weight";
  //! Dynamic pressure entity label
  static const char* c_dynp_ent_label = "LV - Dynamic Pressure";
  //! Thrust force entity label
  static const char* c_thrust_ent_label = "LV - Thrust";
  //! Entity label to dispatch navigation messages
  static const char* c_navigation_ent_label = "Navigation";
  //! Entity label to dispatch drag coefficient data
  static const char* c_drag_coeff_ent_label = "Drag Coefficient";

  struct MotorArguments
  {
    //! Which motor is being simulated
    std::string name;
    //! Propellant's mass
    std::vector<std::string> prop_mass{};
    //! Motor's casing mass
    float mass{};
    //! Data points that describe this motor's thrust curve
    std::vector<std::string> thrust_curve;
  };

  //! %Task arguments.
  struct Arguments
  {
    //! How many motors this launch vehicle has
    int n_motors{};
    //! Launcher's mass without motor
    float dry_mass{};
    //! Crag coefficient
    std::vector<std::string> coeff_drag{};
    //! Cross sectional area
    float area{};
    //! Atmospheric density
    float atmos_density{};
    //! LV's initial latitude in radians
    double initial_lat{};
    //! LV's initial longitude in radians
    double initial_lon{};
    //! LV's initial altitude in meters
    float initial_altitude{};
    //! Parachute's arguments
    ParachuteArguments parachute{};
    //! Motor's arguments
    MotorArguments motor{};

    explicit Arguments(DUNE::Tasks::Task* task)
    {
      // Motor arguments
      task->param("Number Of Motors", n_motors)
          .defaultValue("1")
          .description("How many motors this launch vehicle has");

      task->param("Dry Mass", dry_mass)
          .defaultValue("2.550")
          .units(Units::Kilogram)
          .description("Launcher's mass without motor (and propellant) in kg");

      task->param("Motor -- Name", motor.name)
          .defaultValue("Aerotech I65W")
          .description("Name/Brand of the motor we're simulating");

      task->param("Motor -- Thrust Curve", motor.thrust_curve)
          .description("Data points, time in seconds and thrust in newtons,"
                       "that describe this motor's thrust function");

      task->param("Motor -- Mass", motor.mass)
          .defaultValue("0.375")
          .units(Units::Kilogram)
          .description("Motor's casing mass without propellant in kg");

      task->param("Motor -- Propellant Mass", motor.prop_mass)
          .defaultValue("")
          .units(Units::Kilogram)
          .description("Propellant's mass curve in kg");

      task->param("Drag Coefficient", coeff_drag)
          .defaultValue("")
          .description("Drag coefficient at Mach 0");

      task->param("Area", area)
          .defaultValue("0.006")
          .description("Launcher's reference area in m^2");

      task->param("Atmospheric density", atmos_density)
          .defaultValue("1.225")
          .units(Units::KilogramPerCubicMeter)
          .description("Atmospheric density at sea-level, kg/m^3");

      task->param("Initial Latitude", initial_lat)
          .defaultValue("0.4992520593366")
          .units(Units::Radian)
          .description("Initial latitude in radians");

      task->param("Initial Longitude", initial_lon)
          .defaultValue("-1.40678083")
          .units(Units::Radian)
          .description("Initial longitude in radians");

      task->param("Initial Altitude", initial_altitude)
          .defaultValue("0.0")
          .units(Units::Meter)
          .description("Initial altitude in meters");

      task->param("Parachute -- Drag Coefficient", parachute.drag_coeff)
          .defaultValue("1.5")
          .description("Parachute's drag coefficient when open");

      task->param("Parachute -- Area", parachute.area)
          .defaultValue("2.064")
          .description("Parachute's projected area in m^2");

      task->param("Parachute -- Mass", parachute.mass)
          .defaultValue("0.062")
          .units(Units::Kilogram)
          .description("Parachute's mass in kg");
    }
  };
}

#endif
