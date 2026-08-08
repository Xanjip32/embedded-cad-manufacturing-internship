# 01 — LED On/Off

> **Concept:** Digital Input/Output · Button Control

## Overview

The most fundamental Arduino project — press a button, an LED turns on. Release it, the LED turns off. This project introduces `pinMode()`, `digitalRead()`, `digitalWrite()`, and the concept of internal pull-up resistors.

## Circuit Diagram

```
Arduino Uno
┌──────────────┐
│              │
│     D13 ├───┤──── [LED +] ──── [220Ω] ──── GND
│              │
│     D2  ├───┤──── [Button] ──── GND
│              │
└──────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| LED (Red) | 1 |
| Pushbutton | 1 |
| 220Ω Resistor | 1 |
| Breadboard & Jumper Wires | — |

## How It Works

1. **Pull-up resistor** — `INPUT_PULLUP` keeps the button pin HIGH by default
2. **Button press** — connects pin 2 to GND, pin reads `LOW`
3. **LED control** — when button reads `LOW`, LED pin goes `HIGH`

## Key Concepts

- `pinMode(pin, INPUT_PULLUP)` — enables Arduino's internal ~20kΩ pull-up resistor
- `digitalRead()` — reads HIGH or LOW from a digital pin
- `digitalWrite()` — sets a pin HIGH (5V) or LOW (0V)
- Active-low button wiring (button to GND, not to VCC)

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/9h70B5Xpf3j-ledonoff)
