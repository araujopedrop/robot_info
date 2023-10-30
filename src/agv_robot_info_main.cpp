#include "robot_info/agv_robot_info_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "agv_robot_info_node");
  ros::NodeHandle nh;
  AGVRobotInfo agv = AGVRobotInfo(&nh);
  ros::spin();
}