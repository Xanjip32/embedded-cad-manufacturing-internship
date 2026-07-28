\\\\\\\\\\\/ Blink example for Arduino Uno (and clones)

int gPin = 3;     //green
int yPin = 4;     //yellow
int rPin = 5;     //red
int stopPin = 2;  // pedestrain stop button


void setup() {
  // Set the LED pin as an output
  pinMode(gPin, OUTPUT);
  pinMode(yPin, OUTPUT);
  pinMode(rPin, OUTPUT);
  pinMode(stopPin, INPUT);
}

void loop() {
  // Turn LED on

  if (digitalRead(stopPin) == LOW) {
    digitalWrite(gPin, HIGH);
    digitalWrite(yPin, LOW);
    digitalWrite(rPin, LOW);
    delay(500);  // Wait 1 second

    digitalWrite(gPin, LOW);
    digitalWrite(yPin, HIGH);
    digitalWrite(rPin, LOW);
    delay(500);  // Wait 1 second


    digitalWrite(gPin, LOW);
    digitalWrite(yPin, LOW);
    digitalWrite(rPin, HIGH);
    delay(500);  // Wait 1 second
  } else {
    digitalWrite(gPin, HIGH);
    digitalWrite(yPin, LOW);
    digitalWrite(rPin, LOW);
    delay(500);  // Wait 1 second
    digitalWrite(gPin, LOW);
    delay(500);
  }
}