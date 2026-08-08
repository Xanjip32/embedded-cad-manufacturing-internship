/*
  Session 5 Capstone — Integrated Sensor System
  --------------------------------------------
  Combines every curriculum item from the internship's Embedded Control (HW) (임베디드 제어) row:
  MCU Structure (MCU 구조) (implicit), GPIO, ADC/PWM, Interrupt (인터럽트), Communication (통신) (Serial)
  On-site tasks demonstrated: Arduino Circuit Configuration (아두이노 회로 구성) / Sensor Integration (센서 연동) / Serial Communication (시리얼 통신)

  Wiring (see schematic/circuit-diagram.svg):
    Status LED -> D8  (through 220ohm resistor) -> GND        [GPIO]
    PWM LED    -> D9  (through 220ohm resistor) -> GND        [PWM]
    Potentiometer wiper -> A0, outer pins -> 5V / GND          [ADC]
    Override switch -> D2 -> GND (INPUT_PULLUP, interrupt)     [Interrupt]
    Serial -> USB (built in)                                   [Communication]

  Behavior:
    - Normal mode: PWM LED brightness follows the potentiometer/sensor on A0.
    - Override mode (toggled by button interrupt OR typing 'm' in Serial Monitor):
      status LED turns on, PWM LED forced to full brightness, sensor is ignored.
    - Every ~500ms, current sensor value + mode is printed over Serial.
*/

const int STATUS_LED_PIN = 8;
const int PWM_LED_PIN    = 9;
const int SENSOR_PIN     = A0;
const int OVERRIDE_PIN   = 2;

const unsigned long DEBOUNCE_MS       = 50;
const unsigned long REPORT_INTERVAL   = 500;

volatile bool overrideMode = false;
volatile unsigned long lastInterruptTime = 0;

unsigned long lastReportTime = 0;

void setup() {
  pinMode(STATUS_LED_PIN, OUTPUT);
  pinMode(PWM_LED_PIN, OUTPUT);
  pinMode(OVERRIDE_PIN, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(OVERRIDE_PIN), toggleOverride, FALLING);

  Serial.begin(9600);
  Serial.println("Capstone system ready.");
  Serial.println("Type 'm' + Enter to toggle override mode manually.");
}

void loop() {
  handleSerialCommands();

  int sensorValue = analogRead(SENSOR_PIN); // ADC

  if (overrideMode) {
    digitalWrite(STATUS_LED_PIN, HIGH);   // GPIO
    analogWrite(PWM_LED_PIN, 255);        // PWM, forced full brightness
  } else {
    digitalWrite(STATUS_LED_PIN, LOW);    // GPIO
    int pwmValue = map(sensorValue, 0, 1023, 0, 255);
    analogWrite(PWM_LED_PIN, pwmValue);   // PWM, sensor-driven
  }

  if (millis() - lastReportTime >= REPORT_INTERVAL) {
    reportStatus(sensorValue);            // Serial communication
    lastReportTime = millis();
  }
}

// ISR: kept short, debounced with a timestamp check, only touches volatile flags
void toggleOverride() {
  unsigned long now = millis();
  if (now - lastInterruptTime > DEBOUNCE_MS) {
    overrideMode = !overrideMode;
    lastInterruptTime = now;
  }
}

// Lets the PC toggle override mode too, as an alternate communication path
void handleSerialCommands() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == 'm' || command == 'M') {
      overrideMode = !overrideMode;
      Serial.println("Override toggled via Serial command.");
    }
  }
}

void reportStatus(int sensorValue) {
  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" | Mode: ");
  Serial.println(overrideMode ? "OVERRIDE" : "AUTO");
}
