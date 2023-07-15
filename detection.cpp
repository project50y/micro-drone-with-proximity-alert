void loop() {
  // Read distance measurement from the TF mini LiDAR sensor
  int distance = lidar.getDistance();

  if (distance > 0) {
    // Obstacle detected
    if (distance < 100) {  // Adjust the threshold as needed
      // Perform reflex actions: activate buzzer and LED
      buzzer.play(1000, 100);  // Play a tone for 100ms (adjust frequency and duration as desired)
      led.turnOn();
    } else {
      // No obstacle detected, turn off buzzer and LED
      buzzer.stop();
      led.turnOff();
    }
  }

  // Add any additional flight control or navigation logic here

  // Delay for a short interval between measurements
  delay(100);
}