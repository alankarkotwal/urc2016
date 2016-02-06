#include <ros/ros.h>
#include <std_msgs/Float64.h>

ros::Publisher ard_publisher;

void navCallback(const std_msgs::Float64::ConstPtr& msg) {

	ROS_INFO("You entered this: %d", msg->data);
	std_msgs::Float64 ard_msg;
	ard_msg.data = msg->data;

	ard_publisher.publish(msg);
}

int main(int argc, char **argv) {

	ros::init(argc, argv, "ard_controller");
	ros::NodeHandle n;

	ard_publisher = n.advertise<std_msgs::Float64>("/rover/ard_nav_directives", 1000);
	ros::Subscriber nav_subscriber = n.subscribe("/rover/nav_directives", 1000, navCallback);

	while (ros::ok()) {

		ros::spinOnce();
	}
	return 0;
}
