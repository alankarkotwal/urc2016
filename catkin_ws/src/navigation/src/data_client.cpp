#include "ros/ros.h"
#include "navigation/systemparameter.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "data_client");
  

  ros::NodeHandle n;
  ros::ServiceClient client = n.serviceClient<navigation::systemparameter>("data");
  navigation::systemparameter srv;
  srv.request.k1 = atoll(argv[1]);
  srv.request.k2 =  atoll(argv[2]);
  srv.request.k3 = atoll(argv[3]);
  srv.request.k4 =  atoll(argv[4]);
  if (client.call(srv))
  {
    ROS_INFO("Data: %ld", srv.response.kp);
  }
  else
  {
    ROS_ERROR("Failed to call service data");
    return 1;
  }

  return 0;
}
