#include <AFMotor.h>

AF_DCMotor motor1(1); // Right side
AF_DCMotor motor2(2); // Right side
AF_DCMotor motor3(3); // Left side
AF_DCMotor motor4(4); // Left side

void setup() {
  motor1.setSpeed(200);
  motor2.setSpeed(200);
  motor3.setSpeed(200);
  motor4.setSpeed(200);
}

void loop() {
  // Move Forward
  motor1.run(FORWARD);   // Right
  motor2.run(FORWARD);   // Right

  motor3.run(BACKWARD);  // Left (reverse this!)
  motor4.run(BACKWARD);  // Left

  delay(3000);

  // Stop
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);

  delay(2000);
}
