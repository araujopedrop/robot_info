#include "robot_info/hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor() {}

std::string HydraulicSystemMonitor::get_hydraulic_oil_temperature() {
  return this->hydraulic_oil_temperature;
}

std::string HydraulicSystemMonitor::get_hydraulic_oil_tank_fill_level() {
  return this->hydraulic_oil_tank_fill_level;
}

std::string HydraulicSystemMonitor::get_hydraulic_oil_pressure() {
  return this->hydraulic_oil_pressure;
}

std::vector<std::string> HydraulicSystemMonitor::get_hydraulic_oil_variables() {
  return {this->hydraulic_oil_temperature, this->hydraulic_oil_tank_fill_level,
          this->hydraulic_oil_pressure};
}