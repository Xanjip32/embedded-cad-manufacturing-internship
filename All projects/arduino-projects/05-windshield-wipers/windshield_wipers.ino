/*
 * Windshield Wipers — Servo Motor Simulation
 *
 * Simulates a car's windshield wiper system. A photoresistor
 * (light sensor) determines wiper speed: brighter light = faster
 * wiping, like an automatic rain-sensing wiper.
 *
 * Circuit:
 *   - Servo signal → pin 9
 *   - Photoresistor → pin A0 (voltage divider with 10kΩ)
 *   - Servo power → 5V & GND
 *
 * Tinkercad: https://www.tinkercad.com/things/kFDJV1jm2Vc-windshieldwipers
 */

#include <Servo.h>

Servo wiperServo;

const int SERVO_PIN = 9;
const int LDR_PIN   = A0;

const int WIPER_MIN = 0;    // left position
const int WIPER_MAX = 180;  // right position

void setup() {
  wiperServo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);  // 0–1023

  // Map light level to speed: brighter → faster sweep
  int sweepDelay = map(ldrValue, 0, 1023, 30, 5);

  // Sweep right
  for (int pos = WIPER_MIN; pos <= WIPER_MAX; pos++) {
    wiperServo.write(pos);
    delay(sweepDelay);
  }

  // Sweep left
  for (int pos = WIPER_MAX; pos >= WIPER_MIN; pos--) {
    wiperServo.write(pos);
    delay(sweepDelay);
  }

  // Debug output
  Serial.print("LDR: ");
  Serial.print(ldrValue);
  Serial.print("  Delay: ");
  Serial.print(sweepDelay);
  Serial.println("ms");
}
