#include <ros.h>
#include <std_msgs/Float64.h>

ros::NodeHandle  nh;
int Rm = 2;
int Lm = 3; 

void messageCb( const std_msgs::Float64& nav_msg){
  int motorspeed;
  if (nav_msg.data >0){
    motorspeed = nav_msg.data;
    analogWrite(Lm, motorspeed);
    digitalWrite(22, HIGH); 
    digitalWrite(23, LOW); 
    analogWrite(Rm, motorspeed);
    digitalWrite(24, HIGH); 
    digitalWrite(25, LOW);
  }
  else if (nav_msg.data <0){
    motorspeed = -nav_msg.data;
    analogWrite(Lm, motorspeed);
    digitalWrite(22, LOW); 
    digitalWrite(23, HIGH); 
    analogWrite(Rm, motorspeed);
    digitalWrite(24, LOW); 
    digitalWrite(25, HIGH);
  }
  else if(nav_msg.data == 0) {
    analogWrite(Lm, 0);
    analogWrite(Rm, 0); 
  } 
}
ros::Subscriber<std_msgs::Float64> sub("/rover/ard_nav_directives", &messageCb );
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



