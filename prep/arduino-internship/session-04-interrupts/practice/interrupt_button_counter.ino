/*
  Session 4 Practice — Interrupt-Driven Button Counter
  Button -> D2 -> GND (INPUT_PULLUP, hardware interrupt)
*/

const int BUTTON_PIN = 2;
const unsigned long DEBOUNCE_MS = 50;

volatile int pressCount = 0;
volatile unsigned long lastInterruptTime = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), handleButtonPress, FALLING);
  Serial.begin(9600);
  Serial.println("Interrupt counter ready. Press the button.");
}

void loop() {
  // loop() stays free to do other work; the interrupt handles the button independently
  static int lastPrinted = -1;
  if (pressCount != lastPrinted) {
    Serial.print("Press count: ");
    Serial.println(pressCount);
    lastPrinted = pressCount;
  }
}

// ISR: kept short, no delay()/Serial inside, debounced with a timestamp check
void handleButtonPress() {
  unsigned long now = millis();
  if (now - lastInterruptTime > DEBOUNCE_MS) {
    pressCount++;
    lastInterruptTime = now;
  }
}
