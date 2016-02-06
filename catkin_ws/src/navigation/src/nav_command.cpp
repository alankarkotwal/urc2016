#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {

	ros::init(argc, argv, "nav_controller");
	ros::NodeHandle n;

	ros::Publisher nav_publisher = n.advertise<std_msgs::Float64>("/rover/nav_directives", 1000);

	float speed;
	while (ros::ok()) {

		cout << "Enter next command: ";
		cin.clear(); 
		cin.ignore(INT_MAX,'\n'); 
		cin >> speed;

		std_msgs::Float64 msg;
		msg.data = speed;

		nav_publisher.publish(msg);

		ros::spinOnce();

	}

	return 0;
}
