/*
 * Physical Interrupt — Button Interrupt for LED Toggle
 *
 * Uses an external hardware interrupt to toggle an LED each time
 * the button is pressed — no polling required.
 *
 * Circuit:
 *   - LED → pin 13 → 220Ω resistor → GND
 *   - Button → pin 2 (INT0) → GND (internal pull-up enabled)
 *
 * Tinkercad: https://www.tinkercad.com/things/eL6uvw21iWT-physicalinterrupt
 */

volatile bool ledState = false;

const int LED_PIN    = 13;
const int BUTTON_PIN = 2;

// Interrupt Service Routine — called on FALLING edge (button press)
void toggleLED() {
  ledState = !ledState;
}

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Attach interrupt to pin 2 (INT0), trigger on FALLING edge
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), toggleLED, FALLING);
}

void loop() {
  digitalWrite(LED_PIN, ledState ? HIGH : LOW);
}
