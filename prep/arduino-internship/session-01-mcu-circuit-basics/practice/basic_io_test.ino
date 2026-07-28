/*
  Session 1 Practice — Basic I/O + Circuit Test
  LED -> D8 (through 220ohm resistor) -> GND

  Goal: confirm your first circuit works, and get a first look at Serial output
  (covered properly in Session 5).
*/

const int LED_PIN = 8;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Session 1: MCU + circuit basics OK, blinking LED on D8");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
