#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float32MultiArray.h>
#include <navigation/rover_mobility_arduino.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>

ros::Publisher ard_publisher;

void navCallback(const geometry_msgs::Twist::ConstPtr& msg) {

	std_msgs::Float32MultiArray ard_msg;
	std::vector<float> values(10, 0.0);

	geometry_msgs::Vector3 speed = msg->linear;
	values[0] = speed.x;
	values[1] = speed.x;
	values[2] = speed.x;
	values[3] = speed.x;
	values[4] = speed.x;
	values[5] = speed.x;

	geometry_msgs::Vector3 angle = msg->angular;
	values[6] = angle.x;
	values[7] = angle.x;
	values[8] = angle.x;
	values[9] = angle.x;

	ard_msg.data = values;

	ard_publisher.publish(ard_msg);
}

int main(int argc, char **argv) {

	ros::init(argc, argv, "mobility_driver");
	ros::NodeHandle n;

	ard_publisher = n.advertise<std_msgs::Float32MultiArray>("/rover/ros_mob_data", 1000);
	ros::Subscriber nav_subscriber = n.subscribe("/rover/nav_directives", 1000, navCallback);

	while (ros::ok()) {

		ros::spinOnce();
	}
	return 0;
}
