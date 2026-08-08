# 07 — Holiday Lights

> **Concept:** LED Arrays · Pattern Sequencing · Timing with `millis()`

## Overview

A festive light show using **5 LEDs** that cycle through four patterns: chase, blink, fill, and solid. Uses `millis()` for non-blocking timing so patterns transition smoothly without freezing the program.

## Circuit Diagram

```
Arduino Uno
┌──────────────┐
│              │
│   D3~ ──┤──── [LED 1] ──── [220Ω] ──── GND
│   D4  ──┤──── [LED 2] ──── [220Ω] ──── GND
│   D5  ──┤──── [LED 3] ──── [220Ω] ──── GND
│   D6  ──┤──── [LED 4] ──── [220Ω] ──── GND
│   D7  ──┤──── [LED 5] ──── [220Ω] ──── GND
│              │
└──────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| LEDs (assorted colors) | 5 |
| 220Ω Resistors | 5 |
| Breadboard & Jumper Wires | — |

## Patterns

| Pattern | Description |
|---------|-------------|
| **Chase** | One LED lights at a time, sweeping left to right |
| **Blink** | All LEDs flash on/off together |
| **Fill** | LEDs accumulate one by one, then reset |
| **All On** | All LEDs stay lit |

## How It Works

1. **`millis()` timing** — non-blocking alternative to `delay()`
2. **Step counter** — increments every 200ms, drives pattern logic
3. **Pattern selector** — `(step / 100) % 4` cycles through 4 patterns
4. **Each pattern function** — uses modulo to determine which LEDs to light

## Key Concepts

- **Non-blocking timing** — `millis()` vs `delay()` for multitasking
- **Array iteration** — LED pins stored in an array for clean loop-based control
- **Modulo cycling** — `%` operator wraps values to create repeating sequences
- **Pattern functions** — modular code: each pattern is its own function
- **State machine** — step counter acts as a simple state machine

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/fOwgaB9Lip0-holidaylights)
