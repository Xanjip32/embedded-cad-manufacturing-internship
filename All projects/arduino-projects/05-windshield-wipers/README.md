# 05 — Windshield Wipers

> **Concept:** Servo Motor · Sensor Mapping · Real-World Simulation

## Overview

Simulates an automatic windshield wiper system where a **photoresistor** (light sensor) controls the **wiper speed**. More light = faster sweeping, mimicking how rain-sensing wipers respond to changing conditions. A servo motor sweeps back and forth like a real wiper blade.

## Circuit Diagram

```
Arduino Uno
┌──────────────────┐
│                  │
│     D9  ~──┤──── [Servo Signal]
│     5V  ├───┤──── [Servo VCC] ──── [LDR] ──── A0
│     GND ├───┤──── [Servo GND] ──── [10kΩ] ──── GND
│                  │
└──────────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| Micro Servo Motor | 1 |
| Photoresistor (LDR) | 1 |
| 10kΩ Resistor | 1 |
| Breadboard & Jumper Wires | — |

## How It Works

1. **Light read** — `analogRead(A0)` reads the LDR through a voltage divider
2. **Speed map** — light level maps to sweep delay (bright → fast, dark → slow)
3. **Servo sweep** — `for` loops move the servo from 0° → 180° → 0°
4. **Dynamic timing** — `sweepDelay` adjusts between 5ms (fast) and 30ms (slow)

## Key Concepts

- `Servo library` — `attach()`, `write(angle)` for position control
- **Voltage divider** — LDR + fixed resistor creates a readable voltage
- `map()` — scaling sensor range to servo delay range
- **Sweep pattern** — bidirectional `for` loops for continuous motion
- **Non-blocking consideration** — `delay()` blocks; for real apps use `millis()`

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/kFDJV1jm2Vc-windshieldwipers)
