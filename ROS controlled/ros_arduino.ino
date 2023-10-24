#include <ros.h>
#include <std_msgs/Float32MultiArray.h>
#include <Arduino.h>
#include <Servo.h>

// Define Servo objects for each joint
Servo servo0, servo1, servo2, servo3, servo4;

ros::NodeHandle nh;  // Initialize a ROS node handle
std_msgs::Float32MultiArray msg;

// Callback function to control the servos based on received position data
void servopub(const std_msgs::Float32MultiArray& msg) {
    int angle0 = msg.data[0];
    
    // Move servo0 to the specified angle incrementally
    for (int pos = 0; pos <= angle0; pos += 1) { 
        servo0.write(pos);            
    }

    int angle1 = msg.data[1];
    for (int pos = 0; pos <= angle1; pos += 1) { 
        servo1.write(pos);            
    }
    
    int angle2 = msg.data[2];
    for (int pos = 0; pos <= angle2; pos += 1) { 
        servo2.write(pos);            
    }
    
    int angle3 = msg.data[3];
    for (int pos = 0; pos <= angle3; pos += 1) { 
        servo3.write(pos);            
    }
    
    int angle4 = msg.data[4];
    for (int pos = 0; pos <= angle4; pos += 1) { 
        servo4.write(pos);            
    }            
}

ros::Subscriber<std_msgs::Float32MultiArray> sub("/cmd_pos", &servopub);

void setup() {
   // Attach Servo objects to the corresponding pins
   servo0.attach(3);
   servo1.attach(5);
   servo2.attach(6);
   servo3.attach(9);
   servo4.attach(10);

   nh.initNode();  // Initialize the ROS node
   nh.subscribe(sub);  // Subscribe to the "/cmd_pos" topic
}

void loop() {
  nh.spinOnce();
  delay(100);
}
