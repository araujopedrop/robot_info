cmake_minimum_required(VERSION 3.0.2)
project(robot_info)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  robotinfo_msgs
  roscpp
)

###################################
## catkin specific configuration ##
###################################
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES robot_info
#  CATKIN_DEPENDS robotinfo_msgs roscpp
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

## Declare a C++ library
 add_library(${PROJECT_NAME}
   src/robot_info_class.cpp
 )


## Declare a C++ executable
## With catkin_make all packages are built within a single CMake context
## The recommended prefix ensures that target names across packages don't collide



## Specify libraries to link a library or executable target against
##target_link_libraries(robot_info_node  ${catkin_LIBRARIES})

add_executable(robot_info_node src/robot_info_main.cpp src/robot_info_class.cpp)
target_link_libraries(robot_info_node ${catkin_LIBRARIES} ${PROJECT_NAME})

add_executable(agv_robot_info_node src/agv_robot_info_main.cpp src/robot_info_class.cpp src/agv_robot_info_class.cpp src/hydraulic_system_monitor.cpp)
target_link_libraries(agv_robot_info_node ${catkin_LIBRARIES} ${PROJECT_NAME})