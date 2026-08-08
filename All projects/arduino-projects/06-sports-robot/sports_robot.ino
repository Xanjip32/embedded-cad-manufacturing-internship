/*
 * Sports Robot — Dual-Servo Robot Arm
 *
 * Two potentiometers independently control two servo motors,
 * simulating a simple robot arm that can grab and throw.
 * One servo = shoulder rotation, other = grip angle.
 *
 * Circuit:
 *   - Servo 1 (shoulder) → pin 9
 *   - Servo 2 (grip)     → pin 10
 *   - Pot 1 → A0, Pot 2 → A1
 *
 * Tinkercad: https://www.tinkercad.com/things/i9X4QrBlpkZ-sportsrobot
 */

#include <Servo.h>

Servo shoulderServo;
Servo gripServo;

const int SHOULDER_PIN = 9;
const int GRIP_PIN     = 10;
const int POT_1        = A0;
const int POT_2        = A1;

void setup() {
  shoulderServo.attach(SHOULDER_PIN);
  gripServo.attach(GRIP_PIN);
  Serial.begin(9600);
}

void loop() {
  int pot1 = analogRead(POT_1);  // 0–1023
  int pot2 = analogRead(POT_2);

  int shoulderAngle = map(pot1, 0, 1023, 0, 180);
  int gripAngle     = map(pot2, 0, 1023, 0, 180);

  shoulderServo.write(shoulderAngle);
  gripServo.write(gripAngle);

  // Debug output
  Serial.print("Shoulder: ");
  Serial.print(shoulderAngle);
  Serial.print("°  Grip: ");
  Serial.print(gripAngle);
  Serial.println("°");

  delay(15);  // servo settle time
}
