/*
  Session 3 Practice — Sensor (ADC) Controls LED Brightness (PWM)
  Potentiometer wiper -> A0 | outer pins -> 5V and GND
  LED -> D9 (~PWM pin, through 220ohm resistor) -> GND
*/

const int SENSOR_PIN = A0;
const int LED_PIN = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);          // 0-1023
  int pwmValue = map(sensorValue, 0, 1023, 0, 255);  // rescale to PWM range
  analogWrite(LED_PIN, pwmValue);

  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" -> PWM: ");
  Serial.println(pwmValue);

  delay(50);
}
