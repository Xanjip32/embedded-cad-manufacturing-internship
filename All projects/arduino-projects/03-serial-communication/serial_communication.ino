/*
 * Serial Communication — Bidirectional PC ↔ Arduino
 *
 * Sends sensor data to the Serial Monitor and responds to
 * character commands to control an LED.
 *
 * Commands:
 *   '1' — turn LED on
 *   '0' — turn LED off
 *   's' — print status
 *
 * Circuit:
 *   - LED → pin 13 → 220Ω resistor → GND
 *
 * Tinkercad: https://www.tinkercad.com/things/2khBEO6IYfk-serialcommcapstone
 */

const int LED_PIN = 13;
unsigned long lastPrint = 0;
const long interval = 1000;  // print every 1 second

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Serial Communication Demo ===");
  Serial.println("Commands: '1' ON | '0' OFF | 's' STATUS");
  Serial.println("==================================");
}

void loop() {
  // Check for incoming serial data
  if (Serial.available() > 0) {
    char cmd = Serial.read();

    switch (cmd) {
      case '1':
        digitalWrite(LED_PIN, HIGH);
        Serial.println("[OK] LED turned ON");
        break;

      case '0':
        digitalWrite(LED_PIN, LOW);
        Serial.println("[OK] LED turned OFF");
        break;

      case 's':
        Serial.print("[STATUS] LED is ");
        Serial.println(digitalRead(LED_PIN) ? "ON" : "OFF");
        break;

      case '\n':
      case '\r':
        break;  // ignore newlines

      default:
        Serial.print("[?] Unknown command: ");
        Serial.println(cmd);
        break;
    }
  }

  // Periodic heartbeat message
  unsigned long now = millis();
  if (now - lastPrint >= interval) {
    lastPrint = now;
    Serial.print("[HEARTBEAT] Millis: ");
    Serial.println(millis());
  }
}
