/*
 * LED On/Off — Button-Controlled LED
 *
 * Press the button to turn the LED on; release to turn it off.
 * Demonstrates basic digital input (button) and digital output (LED).
 *
 * Circuit:
 *   - LED → pin 13 → 220Ω resistor → GND
 *   - Button → pin 2 → GND (internal pull-up enabled)
 *
 * Tinkercad: https://www.tinkercad.com/things/9h70B5Xpf3j-ledonoff
 */

const int LED_PIN    = 13;
const int BUTTON_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // internal pull-up, button reads LOW when pressed
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {       // button pressed (pulled to GND)
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
