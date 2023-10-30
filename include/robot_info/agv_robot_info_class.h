#pragma once
#include "robot_info/robot_info_class.h"
#include <ros/ros.h>
#include <string>

class AGVRobotInfo : public RobotInfo {

public:
  AGVRobotInfo(ros::NodeHandle *node_handle);
  void publish_data();
private:
  std::string maximum_payload = "maximum_payload: 100 Kg";

};