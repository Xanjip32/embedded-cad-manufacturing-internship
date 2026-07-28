/*
 * Dimmer Switch
 *
 * Reads a potentiometer on A0, maps the 10-bit ADC value (0-1023)
 * down to 8-bit PWM (0-255) and drives three LEDs at equal brightness.
 *
 * Circuit (Tinkercad):
 *   A0  ← Potentiometer wiper
 *   D9  → LED 1 (220 Ω to GND)
 *   D10 → LED 2 (220 Ω to GND)
 *   D11 → LED 3 (220 Ω to GND)
 *
 * Simulated in Tinkercad — no physical potentiometer required.
 * https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch
 */

int readValue  = 0;
int writeValue = 0;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  readValue  = analogRead(A0);     // 0-1023 from potentiometer
  writeValue = readValue / 4;      // scale to 0-255 for PWM
  analogWrite(9, writeValue);
  analogWrite(10, writeValue);
  analogWrite(11, writeValue);
}
