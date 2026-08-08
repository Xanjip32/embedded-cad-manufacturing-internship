# 06 — Sports Robot

> **Concept:** Multi-Servo Control · Potentiometer Input · Robotics

## Overview

A **two-axis robot arm** controlled by two potentiometers — one for the shoulder rotation and one for the grip angle. Turning each knob moves its corresponding servo in real time, demonstrating multi-channel servo control as a foundation for robotic manipulation.

## Circuit Diagram

```
Arduino Uno
┌──────────────────┐
│                  │
│     D9  ~──┤──── [Servo 1 Signal — Shoulder]
│     D10 ~──┤──── [Servo 2 Signal — Grip]
│                  │
│     A0  ├───┤──── [Pot 1 — Shoulder] ──── 5V / GND
│     A1  ├───┤──── [Pot 2 — Grip]     ──── 5V / GND
│                  │
│     5V  ├───┤──── [Both Servo VCC]
│     GND ├───┤──── [Both Servo GND]
│                  │
└──────────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| Micro Servo Motor | 2 |
| 10kΩ Potentiometer | 2 |
| Breadboard & Jumper Wires | — |

## How It Works

1. **Dual read** — reads two potentiometers independently
2. **Map to angle** — each pot value (0–1023) maps to servo angle (0–180°)
3. **Drive servos** — each servo receives its own angle command
4. **Settle time** — 15ms delay gives servos time to reach position

## Key Concepts

- **Multi-servo control** — multiple `Servo` objects, each on a different pin
- **Independent channels** — each pot → servo pair is independent
- **Real-time mapping** — analog input directly drives physical output
- **Servo power** — servos can draw significant current; power both from 5V rail
- **Application** — this is the basis for robotic arms, pan-tilt cameras, etc.

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/i9X4QrBlpkZ-sportsrobot)
