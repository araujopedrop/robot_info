#pragma once
#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor.h"
#include <ros/ros.h>
#include <string>

class AGVRobotInfo : public RobotInfo {

public:
  AGVRobotInfo(ros::NodeHandle *node_handle);
  std::string get_hydraulic_oil_temperature();
  std::string get_hydraulic_oil_tank_fill_level();
  std::string get_hydraulic_oil_pressure();
  void publish_data();

private:
  std::string maximum_payload = "maximum_payload: 100 Kg";
  HydraulicSystemMonitor HSM = HydraulicSystemMonitor();

};