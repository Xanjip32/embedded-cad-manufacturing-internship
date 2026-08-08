/*
 * Light Wave Reader — Photoresistor Light Sensor
 *
 * Reads ambient light levels using a photoresistor (LDR)
 * and maps the values to an LED brightness. Also outputs
 * a bar graph to the Serial Monitor for visualization.
 *
 * Circuit:
 *   - LDR → A0 (voltage divider with 10kΩ to GND)
 *   - LED → pin 9 (PWM) → 220Ω → GND
 *
 * Tinkercad: https://www.tinkercad.com/things/12MWZ1TbvjJ-lightwaverader
 */

const int LDR_PIN  = A0;
const int LED_PIN  = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Light Wave Reader ===");
}

void loop() {
  int lightLevel = analogRead(LDR_PIN);  // 0–1023

  // Map light to LED brightness (inverse: dark → bright LED)
  int brightness = map(lightLevel, 0, 1023, 255, 0);
  analogWrite(LED_PIN, brightness);

  // Print bar graph to Serial Monitor
  Serial.print("Light: ");
  Serial.print(lightLevel);
  Serial.print("  [");

  int bars = map(lightLevel, 0, 1023, 0, 30);
  for (int i = 0; i < 30; i++) {
    Serial.print(i < bars ? "#" : ".");
  }
  Serial.println("]");

  delay(100);
}
