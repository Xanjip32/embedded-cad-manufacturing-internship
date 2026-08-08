# Arduino Projects Portfolio

A collection of **9 Arduino projects** built and simulated on [Tinkercad](https://www.tinkercad.com), covering fundamental to intermediate embedded systems concepts.

> **Platform:** All projects were designed, coded, and tested in [Autodesk Tinkercad Circuits](https://www.tinkercad.com) using the Arduino Uno R3.

---

## Projects Overview

| # | Project | Concepts | Tinkercad |
|---|---------|----------|-----------|
| 01 | [LED On/Off](./01-led-on-off) | Digital I/O, Button Input, LED Output | [Link](https://www.tinkercad.com/things/9h70B5Xpf3j-ledonoff) |
| 02 | [Physical Interrupt](./02-physical-interrupt) | External Interrupts, `attachInterrupt()` | [Link](https://www.tinkercad.com/things/eL6uvw21iWT-physicalinterrupt) |
| 03 | [Serial Communication](./03-serial-communication) | Serial Monitor, `Serial.read()`, Data Parsing | [Link](https://www.tinkercad.com/things/2khBEO6IYfk-serialcommcapstone) |
| 04 | [Dimmer Switch](./04-dimmer-switch) | Analog Input, PWM Output, `analogWrite()` | [Link](https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch) |
| 05 | [Windshield Wipers](./05-windshield-wipers) | Servo Motor, Sensor Mapping, Real-world Simulation | [Link](https://www.tinkercad.com/things/kFDJV1jm2Vc-windshieldwipers) |
| 06 | [Sports Robot](./06-sports-robot) | Multi-Servo Control, Potentiometer Input | [Link](https://www.tinkercad.com/things/i9X4QrBlpkZ-sportsrobot) |
| 07 | [Holiday Lights](./07-holiday-lights) | LED Arrays, Pattern Sequencing, Timing | [Link](https://www.tinkercad.com/things/fOwgaB9Lip0-holidaylights) |
| 08 | [Electrical Instrument](./08-electrical-instrument) | Piezo Buzzer, Tone Generation, `tone()` | [Link](https://www.tinkercad.com/things/jnipdWI9AKa-electrialinstrument) |
| 09 | [Light Wave Reader](./09-light-wave-reader) | Photoresistor, Analog Read, Sensor Calibration | [Link](https://www.tinkercad.com/things/12MWZ1TbvjJ-lightwaverader) |

---

## Skills Demonstrated

- **Digital I/O** — reading buttons, driving LEDs
- **Analog I/O** — reading potentiometers and photoresistors, PWM dimming
- **Interrupts** — hardware interrupts for responsive input handling
- **Serial Communication** — bidirectional PC ↔ Arduino data exchange
- **Motor Control** — servo positioning with `Servo` library
- **Timing & Sequencing** — `millis()`-based state machines, LED patterns
- **Audio Output** — tone generation with piezo buzzers
- **Sensor Integration** — mapping sensor values to real-world outputs

---

## How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/<your-username>/arduino-projects.git
   ```
2. Open any `.ino` file in the [Arduino IDE](https://www.arduino.cc/en/software) or view it directly on Tinkercad via the links above.
3. For Tinkercad simulation — click the **Tinkercad** link for each project and hit **Start Simulation**.

---

## Hardware Used (Simulated)

| Component | Used In |
|-----------|---------|
| Arduino Uno R3 | All projects |
| LED (various colors) | 01, 04, 07, 09 |
| Pushbutton | 01, 02 |
| Potentiometer (10kΩ) | 04, 06 |
| Photoresistor (LDR) | 05, 09 |
| Servo Motor (Micro) | 05, 06 |
| Piezo Buzzer | 08 |
| Resistors (220Ω, 10kΩ) | Multiple |
| Breadboard & Jumper Wires | All projects |

---

## Author

**Aarya** — [GitHub Profile](https://github.com/<your-username>)

*All projects built and simulated in Autodesk Tinkercad Circuits.*
