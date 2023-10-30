#include "robot_info/robot_info_class.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"
#include <ros/ros.h>

RobotInfo::RobotInfo(ros::NodeHandle *node_handle) {
  nh = node_handle;
  this->pub_robot_info = nh->advertise<robotinfo_msgs::RobotInfo10Fields>(
      "robot_info", 1000, this);

  publish_data();
  ROS_INFO("RobotInfo service enable!");
}

void RobotInfo::publish_data() {

  robotinfo_msgs::RobotInfo10Fields msg;

  /*
    data_field_01 = robot_description: The robot description, for instance the
    brand or make. data_field_02 = serial_number: The robot's serial number
    data_field_03 = ip_address: The robot's IP Address
    data_field_04 = firmware_version: The robot's Firmware version
  */

  msg.data_field_01 = this->robot_description;
  msg.data_field_02 = this->serial_number;
  msg.data_field_03 = this->ip_address;
  msg.data_field_04 = this->firmware_version;

  this->pub_robot_info.publish(msg);
}
