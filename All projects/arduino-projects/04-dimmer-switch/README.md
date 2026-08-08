# 04 — Dimmer Switch

> **Concept:** Analog Input · PWM Output · `analogWrite()`

## Overview

A potentiometer acts as a physical dimmer knob — turning it smoothly adjusts an LED's brightness from fully off to full intensity. This project demonstrates **analog-to-digital conversion** (reading a pot) and **Pulse Width Modulation** (simulating analog output on a digital pin).

## Circuit Diagram

```
Arduino Uno
┌──────────────────┐
│                  │
│     D9  ~──┤──── [LED +] ──── [220Ω] ──── GND
│                  │
│     A0  ├───┤──── [Pot Wiper]
│     5V  ├───┤──── [Pot Left]
│     GND ├───┤──── [Pot Right]
│                  │
└──────────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| LED (any color) | 1 |
| 10kΩ Potentiometer | 1 |
| 220Ω Resistor | 1 |
| Breadboard & Jumper Wires | — |

## How It Works

1. **Analog read** — `analogRead(A0)` returns 0–1023 (10-bit ADC)
2. **Scale** — `map()` converts 0–1023 → 0–255 (8-bit PWM range)
3. **PWM write** — `analogWrite(pin, duty)` sets the duty cycle on pin 9
4. **Result** — LED brightness is proportional to potentiometer position

## Key Concepts

- `analogRead()` — 10-bit ADC, returns 0 (0V) to 1023 (5V)
- `analogWrite()` — 8-bit PWM, returns 0 (always off) to 255 (always on)
- `map(value, fromLow, fromHigh, toLow, toHigh)` — linear remapping
- **PWM pins** — on Uno: 3, 5, 6, 9, 10, 11 (marked with `~`)
- **Duty cycle** — percentage of time the signal is HIGH per cycle

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch)
