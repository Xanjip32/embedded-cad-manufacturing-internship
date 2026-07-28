/*
  Session 2 Practice — Button Toggles LED (GPIO input + output)
  LED -> D8 (through 220ohm resistor) -> GND
  Button -> D2 -> GND (INPUT_PULLUP)
*/

const int LED_PIN = 8;
const int BUTTON_PIN = 2;

bool ledState = false;
int lastButtonState = HIGH; // HIGH = not pressed (pullup)

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW && lastButtonState == HIGH) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
    Serial.println(ledState ? "LED ON" : "LED OFF");
    delay(150); // simple debounce, proper edge-timing debounce comes in Session 4
  }

  lastButtonState = buttonState;
}
