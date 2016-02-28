#include <ros.h>
#include <std_msgs/Float64.h>
#include <std_msgs/Float32MultiArray.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Vector3.h>


ros::NodeHandle  nh;
int Rm = 2;
int Lm = 3; 

void messageCb( const std_msgs::Float32MultiArray& nav_msg){
  int speed1 = (2*nav_msg.data[0] + 3*nav_msg.data[7])/2;
  int speed2 = (2*nav_msg.data[0] - 3*nav_msg.data[7])/2;
  Serial.println(speed1);
  Serial.println(speed2);
  if (speed1 > 0 && speed2 > 0 ){
   analogWrite(Lm, speed1);
    digitalWrite(22, HIGH); 
    digitalWrite(23, LOW); 
    analogWrite(Rm, speed2);
    digitalWrite(24, HIGH); 
    digitalWrite(25, LOW);
} 

else if (speed1 > 0 && speed2 < 0 ){

   analogWrite(Lm, speed1);
    digitalWrite(22, HIGH); 
    digitalWrite(23, LOW); 
    analogWrite(Rm, -speed2);
    digitalWrite(24, LOW); 
    digitalWrite(25, HIGH);
}

else if  (speed1 < 0 && speed2 > 0 ){

    analogWrite(Lm, -speed1);
    digitalWrite(22, LOW); 
    digitalWrite(23, HIGH); 
    analogWrite(Rm, speed2);
    digitalWrite(24, HIGH); 
    digitalWrite(25, LOW);



}
else if (speed1 < 0 && speed2 <0){
    analogWrite(Lm, -speed1);
    digitalWrite(22, LOW); 
    digitalWrite(23, HIGH); 
    analogWrite(Rm, -speed2);
    digitalWrite(24, LOW); 
    digitalWrite(25, HIGH);
}

else {
    analogWrite(Lm, 0);
    analogWrite(Rm, 0); 




} 
}
ros::Subscriber<std_msgs::Float32MultiArray> sub("/rover/ros_mob_data", &messageCb );
void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);

  pinMode(3, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}


void loop()
{  
  nh.spinOnce();
  delay(1);
}

