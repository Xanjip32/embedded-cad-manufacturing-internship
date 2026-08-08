/*
 * Electrical Instrument — Piezo Buzzer Tone Generator
 *
 * Uses a piezo buzzer to play musical notes controlled by a
 * potentiometer (pitch) and a button (trigger). Turn the knob
 * to set the pitch, press the button to play the note.
 *
 * Circuit:
 *   - Piezo buzzer → pin 8 → GND
 *   - Potentiometer → A0, 5V, GND
 *   - Button → pin 2 → GND (pull-up)
 *
 * Tinkercad: https://www.tinkercad.com/things/jnipdWI9AKa-electrialinstrument
 */

const int BUZZER_PIN  = 8;
const int POT_PIN     = A0;
const int BUTTON_PIN  = 2;

// Musical note frequencies (Hz)
const int NOTES[] = {
  262, 294, 330, 349, 392, 440, 494, 523  // C4 to C5
};
const int NUM_NOTES = sizeof(NOTES) / sizeof(NOTES[0]);

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);

  Serial.println("=== Electrical Instrument ===");
  Serial.println("Turn pot to set pitch, press button to play");
  Serial.println("================================");
}

void loop() {
  int potValue = analogRead(POT_PIN);  // 0–1023

  // Map pot to frequency range (200Hz — 1000Hz)
  int frequency = map(potValue, 0, 1023, 200, 1000);

  // Check button
  if (digitalRead(BUTTON_PIN) == LOW) {
    tone(BUZZER_PIN, frequency);

    Serial.print("Playing: ");
    Serial.print(frequency);
    Serial.println(" Hz");
  } else {
    noTone(BUZZER_PIN);
  }

  delay(50);  // debounce
}
