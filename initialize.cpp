void setup() {
  // Initialize the serial communication with the TF mini LiDAR sensor
  Serial.begin(115200);
  lidar.begin(&Serial, lidarRxPin, lidarTxPin);

  // Initialize the buzzer and LED pins
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  // Set initial states for the buzzer and LED
  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);
}