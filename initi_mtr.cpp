void setup() {
  // Initialize the motor pins
  motor1.attach();
  motor2.attach();
  motor3.attach();
  motor4.attach();

  // Initialize the receiver
  receiver.begin();
}