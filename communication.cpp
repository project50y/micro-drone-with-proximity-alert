void loop() {
  // Read receiver channel values
  int throttle = receiver.read(throttleChannel);
  int roll = receiver.read(rollChannel);
  int pitch = receiver.read(pitchChannel);
  int yaw = receiver.read(yawChannel);

  // Perform motor control based on receiver input
  motor1.write(throttle + roll - pitch + yaw);
  motor2.write(throttle - roll - pitch - yaw);
  motor3.write(throttle + roll + pitch - yaw);
  motor4.write(throttle - roll + pitch + yaw);
}