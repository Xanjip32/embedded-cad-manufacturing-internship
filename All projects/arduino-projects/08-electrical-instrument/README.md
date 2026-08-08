# 08 — Electrical Instrument

> **Concept:** Piezo Buzzer · Tone Generation · `tone()` / `noTone()`

## Overview

Turn a potentiometer to select a pitch, press a button to play it through a **piezo buzzer**. This project demonstrates frequency-based sound generation, mapping analog input to audio output — the foundation for building musical instruments and alarm systems.

## Circuit Diagram

```
Arduino Uno
┌──────────────────┐
│                  │
│     D8  ├───┤──── [Piezo +] ──── GND
│                  │
│     A0  ├───┤──── [Pot Wiper]
│     5V  ├───┤──── [Pot Left]
│     GND ├───┤──── [Pot Right]
│                  │
│     D2  ├───┤──── [Button] ──── GND
│                  │
└──────────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| Piezo Buzzer | 1 |
| 10kΩ Potentiometer | 1 |
| Pushbutton | 1 |
| Breadboard & Jumper Wires | — |

## How It Works

1. **Read pitch** — potentiometer value maps to 200–1000 Hz range
2. **Button gate** — `tone()` only plays when button is held
3. **`tone(pin, freq)`** — generates a square wave at the specified frequency
4. **`noTone(pin)`** — stops the waveform when button is released

## Key Concepts

- `tone(pin, frequency)` — generates PWM square wave audible through piezo
- `noTone(pin)` — stops tone generation on a pin
- **Frequency mapping** — pot value → Hz range for continuous pitch control
- **Musical scale** — notes array shows standard frequencies (C4=262Hz to C5=523Hz)
- **Debouncing** — `delay(50)` prevents rapid on/off toggling

## Frequency Reference

| Note | Frequency |
|------|-----------|
| C4 | 262 Hz |
| D4 | 294 Hz |
| E4 | 330 Hz |
| F4 | 349 Hz |
| G4 | 392 Hz |
| A4 | 440 Hz |
| B4 | 494 Hz |
| C5 | 523 Hz |

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/jnipdWI9AKa-electrialinstrument)
