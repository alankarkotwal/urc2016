#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float32.h>
#include <navigation/rover_mobility_arduino.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>
#include <sensor_msgs/Joy.h>

ros::Publisher ard_publisher;

void joyCallback(const sensor_msgs::Joy::ConstPtr& joy) {

	geometry_msgs::Twist ard_msg;

	geometry_msgs :: Vector3 linear;
	linear.x = joy->axes[1]*127;
	linear.y = 0;
	linear.z = 0;
	ard_msg.linear = linear;

        geometry_msgs :: Vector3 angular;
	angular.x = joy->axes[3]*45;
	angular.y = 0;
	angular.z = 0;
	ard_msg.angular = angular;

	ard_publisher.publish(ard_msg);
}

int main(int argc, char **argv) {

	ros::init(argc, argv, "mobility_driver");
	ros::NodeHandle n;

	ard_publisher = n.advertise<geometry_msgs::Twist>("/rover/nav_directives", 1000);
	ros::Subscriber nav_subscriber = n.subscribe("/joy", 1000, joyCallback);

	while (ros::ok()) {

		ros::spinOnce();
	}
	return 0;
}
