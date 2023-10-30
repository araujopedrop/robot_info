#pragma once
#include "robotinfo_msgs/RobotInfo10Fields.h"
#include <ros/ros.h>

class RobotInfo {

public:
  RobotInfo(){};
  RobotInfo(ros::NodeHandle *node_handle);

protected:
  ros::NodeHandle *nh;
  std::string robot_description = "robot_description: Mir100";
  std::string serial_number = "serial_number: 567A359";
  std::string ip_address = "ip_address: 169.254.5.180";
  std::string firmware_version = "firmware_version: 3.5.8";

  ros::Publisher pub_robot_info;
  virtual void publish_data();

};