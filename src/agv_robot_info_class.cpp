#include "robot_info/agv_robot_info_class.h"
#include "robotinfo_msgs/RobotInfo10Fields.h"
#include <ros/ros.h>

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle *node_handle) {
  nh = node_handle;

  this->pub_robot_info = nh->advertise<robotinfo_msgs::RobotInfo10Fields>(
      "robot_info", 1000, this);
  /*
  this->robot_description = "robot_description: Mir100";
  this->serial_number = "serial_number: 567A359";
  this->ip_address = "ip_address: 169.254.5.180";
  this->firmware_version = "firmware_version: 3.5.8";
  */
  publish_data();
  ROS_INFO("RobotInfo service enable!");
}

void AGVRobotInfo::publish_data() {
  // config_output_srv = nh->advertiseService("robot_manager_output",
  // &RobotManagerBase::ConfigOutputCallback, this);
  robotinfo_msgs::RobotInfo10Fields msg;

  /*
    data_field_01 = robot_description: The AGV´s description, for instance the
    brand or make.
    data_field_02 = serial_number: The AGV´s serial number
    data_field_03 = ip_address: The AGV´s IP Address
    data_field_04 = firmware_version: The AGV´s Firmware version
    data_field_05 = maximum_payload: The AGV´s maximum_payload
  */

  msg.data_field_01 = this->robot_description;
  msg.data_field_02 = this->serial_number;
  msg.data_field_03 = this->ip_address;
  msg.data_field_04 = this->firmware_version;
  msg.data_field_05 = this->maximum_payload;

  this->pub_robot_info.publish(msg);
}
