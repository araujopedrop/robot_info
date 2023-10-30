#include "robot_info/robot_info_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "robot_info_node");
  ros::NodeHandle nh;
  RobotInfo ri_node = RobotInfo(&nh);
  ros::spin();
}