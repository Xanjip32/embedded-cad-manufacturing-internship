/*
 * Holiday Lights — LED Pattern Sequencer
 *
 * Creates festive light patterns using multiple LEDs.
 * Cycles through: chase, fade, blink, and all-on patterns
 * with timed transitions.
 *
 * Circuit:
 *   - 5 LEDs → pins 3–7 → 220Ω resistors → GND
 *
 * Tinkercad: https://www.tinkercad.com/things/fOwgaB9Lip0-holidaylights
 */

const int NUM_LEDS = 5;
const int LED_PINS[] = {3, 4, 5, 6, 7};

unsigned long previousMillis = 0;
unsigned long interval = 200;  // pattern step timing (ms)
int step = 0;

void setup() {
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    step++;
  }

  // Cycle through patterns every 100 steps
  int pattern = (step / 100) % 4;

  switch (pattern) {
    case 0: chasePattern();    break;
    case 1: blinkPattern();    break;
    case 2: fillPattern();     break;
    case 3: allOnPattern();    break;
  }
}

// Pattern 1: Chase — one LED at a time
void chasePattern() {
  int pos = step % NUM_LEDS;
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(LED_PINS[i], (i == pos) ? HIGH : LOW);
  }
}

// Pattern 2: Blink — all on/off alternating
void blinkPattern() {
  int state = (step % 2 == 0) ? HIGH : LOW;
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(LED_PINS[i], state);
  }
}

// Pattern 3: Fill — LEDs light up one by one, then reset
void fillPattern() {
  int fillCount = step % (NUM_LEDS + 1);
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(LED_PINS[i], (i < fillCount) ? HIGH : LOW);
  }
}

// Pattern 4: All On — every LED lit
void allOnPattern() {
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(LED_PINS[i], HIGH);
  }
}
