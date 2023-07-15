// Include the necessary libraries for motor control and communication
#include <ESC.h>
#include <Receiver.h>

// Define pin numbers for motor control
const int motorPin1 = 6;
const int motorPin2 = 7;
const int motorPin3 = 8;
const int motorPin4 = 9;

// Define receiver channel mapping
const int throttleChannel = 0;  // Throttle channel from receiver
const int rollChannel = 1;     // Roll channel from receiver
const int pitchChannel = 2;    // Pitch channel from receiver
const int yawChannel = 3;      // Yaw channel from receiver

// Create objects for ESC control and receiver communication
ESC motor1(motorPin1);
ESC motor2(motorPin2);
ESC motor3(motorPin3);
ESC motor4(motorPin4);
Receiver receiver;