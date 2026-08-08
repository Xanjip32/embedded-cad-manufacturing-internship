/*
 * Dimmer Switch — Potentiometer-Controlled LED Brightness
 *
 * Turn a potentiometer to smoothly dim an LED from off to full
 * brightness using Pulse Width Modulation (PWM).
 *
 * Circuit:
 *   - LED → pin 9 (PWM) → 220Ω resistor → GND
 *   - Potentiometer → pin A0, 5V, GND
 *
 * Tinkercad: https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch
 */

const int LED_PIN    = 9;   // must be a PWM-capable pin (~)
const int POT_PIN    = A0;

void setup() {
  // analogWrite doesn't require pinMode(OUTPUT), but it's good practice
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(POT_PIN);            // 0–1023
  int brightness = map(potValue, 0, 1023, 0, 255);  // scale to 0–255

  analogWrite(LED_PIN, brightness);               // PWM output

  // Debug: print values to Serial Monitor
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print("  Brightness: ");
  Serial.println(brightness);

  delay(10);  // small debounce
}
