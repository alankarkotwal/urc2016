#include "ros/ros.h"
#include "navigation/systemparameter.h"

bool data(navigation::systemparameter::Request  &req,
         navigation::systemparameter::Response &res)
{
  res.kp[0] = req.k1;
  res.kp[1] = req.k2;
  res.kp[2] = req.k3;
  res.kp[3] = req.k4;
  ROS_INFO("request: k1=%ld, k2=%ld , k3=%ld ,k4=%ld ", req.k1, req.k2,req.k3,req.k4);
  ROS_INFO("sending back response: [%ld]", res.kp);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "data_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("data", data);
  ROS_INFO("Ready to provide data.");
  ros::spin();

  return 0;
}
