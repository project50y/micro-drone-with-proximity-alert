//Code to import necessary libraries and define pin mappings
#include <TFMini.h>
#include <Buzzer.h>
#include <LED.h>

// Define pin numbers for the TF mini LiDAR sensor
const int lidarRxPin = 2;  // Receive pin
const int lidarTxPin = 3;  // Transmit pin

// Define pin numbers for the buzzer and LED
const int buzzerPin = 4;
const int ledPin = 5;

// Create objects for the sensor, buzzer, and LED
TFMini lidar;
Buzzer buzzer(buzzerPin);
LED led(ledPin);