/*
 * Dimmer Switch with Serial Monitor & Conditional LED Control
 *
 * Reads a potentiometer on A0 and uses if-else thresholds to control
 * three LEDs in different modes. Potentiometer values are also printed
 * to the Serial Monitor for debugging.
 *
 * Circuit (Tinkercad):
 *   A0  ← Potentiometer wiper
 *   D9  → LED 1 (220 Ω to GND)
 *   D10 → LED 2 (220 Ω to GND)
 *   D11 → LED 3 (220 Ω to GND)
 *
 * https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch
 */

int readValue  = 0;
int writeValue = 0;

void setup() {
  pinMode(9, OUTPUT);    // declare the first LED pin as output
  pinMode(10, OUTPUT);   // declare the second LED pin as output
  pinMode(11, OUTPUT);   // declare the third LED pin as output
  Serial.begin(9600);    // initialize serial communication at 9600 baud
}

void loop() {
  readValue  = analogRead(A0);    // store the value from the potentiometer
  writeValue = readValue / 4;     // divide by 4 to map 0-1023 → 0-255

  if (readValue > 1000) {
    // All LEDs blink — potentiometer near maximum
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    delay(250);

    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(250);

  } else if (readValue < 600) {
    // Only LED 1 on — low range
    analogWrite(9, writeValue);
    analogWrite(10, 0);
    analogWrite(11, 0);

  } else if (readValue < 900) {
    // LEDs 1 and 2 on — mid range
    analogWrite(9, writeValue);
    analogWrite(10, writeValue);
    analogWrite(11, 0);

  } else {
    // All three LEDs on — high range
    analogWrite(9, writeValue);
    analogWrite(10, writeValue);
    analogWrite(11, writeValue);

    // Print values to Serial Monitor for debugging
    Serial.print(readValue);
    Serial.print(" : ");
    Serial.println(writeValue);
    delay(100);
  }
}
