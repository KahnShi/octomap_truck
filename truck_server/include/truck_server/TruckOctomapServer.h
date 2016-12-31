
#ifndef OCTOMAP_SERVER_TRUCK_H_
#define OCTOMAP_SERVER_TRUCK_H_

//#include "/home/shi/ros/shi_catkin_ws/src/octomap_mapping/octomap_server/include/octomap_server/OctomapServer.h"
#include <octomap_server/OctomapServer.h>
#include <octomap/OcTree.h>
#include <octomap/OcTreeNode.h>
#include <math.h>
#include <vector>
#include <nav_msgs/Path.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Point.h>
#include <visualization_msgs/Marker.h>
#include <std_msgs/Header.h>

using namespace octomap_server;
using namespace octomap;
using namespace octomath;
class TruckOctomapServer: public OctomapServer {
public:
  TruckOctomapServer();
  virtual ~TruckOctomapServer();
  float step_value;
  ros::Publisher pub_lane_marker;

  void init_param();
  void WriteVehicleOctree(int type, Pose6D rot_mat);
  //void WriteUavSafeBorderOctree(int type, Pose6D rot_mat);
  void publishTruckFullOctoMap(const ros::Time& rostime);
  void publishTruckAll(const ros::Time& rostime);
  void laneMarkerVisualization();
};

#endif
