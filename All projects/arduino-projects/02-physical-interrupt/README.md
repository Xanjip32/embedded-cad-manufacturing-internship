# 02 — Physical Interrupt

> **Concept:** Hardware Interrupts · `attachInterrupt()`

## Overview

Instead of continuously checking (polling) a button in `loop()`, this project uses a **hardware interrupt** to respond to button presses instantly. Each press toggles the LED on or off via an Interrupt Service Routine (ISR).

## Circuit Diagram

```
Arduino Uno
┌──────────────┐
│              │
│     D13 ├───┤──── [LED +] ──── [220Ω] ──── GND
│              │
│     D2  ├───┤──── [Button] ──── GND
│   (INT0)     │
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

1. **ISR triggers** — when the button is pressed, `toggleLED()` fires immediately
2. **`volatile` flag** — `ledState` is declared `volatile` so the compiler doesn't optimize it out
3. **Main loop** — continuously syncs the physical LED to `ledState`

## Key Concepts

- `attachInterrupt(pin, ISR, mode)` — binds a function to a hardware interrupt
- `digitalPinToInterrupt()` — maps a digital pin to its interrupt number
- `volatile` — tells the compiler the variable can change outside normal program flow
- `FALLING` edge trigger — fires once when the signal goes from HIGH to LOW
- **ISR rules** — keep ISRs short; no `delay()`, no `Serial.print()`, no `digitalWrite()` inside

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/eL6uvw21iWT-physicalinterrupt)
