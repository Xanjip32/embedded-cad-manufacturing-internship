# 03 — Serial Communication

> **Concept:** Serial Monitor · Bidirectional Data Exchange

## Overview

This project establishes **serial communication** between the Arduino and your computer. You can send character commands to control an LED, query its status, and receive periodic heartbeat messages — demonstrating the foundation of PC-to-microcontroller communication.

## Circuit Diagram

```
Arduino Uno
┌──────────────┐
│              │
│     D13 ├───┤──── [LED +] ──── [220Ω] ──── GND
│              │
│     USB ─────┼──── Serial (9600 baud)
│              │
└──────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| LED (Red) | 1 |
| 220Ω Resistor | 1 |
| USB Cable | 1 |

## Serial Commands

| Command | Action |
|---------|--------|
| `1` | Turn LED ON |
| `0` | Turn LED OFF |
| `s` | Print current LED status |

## How It Works

1. **`Serial.begin(9600)`** — initializes UART at 9600 baud
2. **`Serial.available()`** — checks if data has arrived from the PC
3. **`Serial.read()`** — reads one byte at a time
4. **`Serial.println()`** — sends text back to the Serial Monitor
5. **Heartbeat** — prints `millis()` every second as a connection check

## Key Concepts

- `Serial.begin(baud)` — must match between Arduino and Serial Monitor
- `Serial.available()` — returns number of bytes in the receive buffer
- `Serial.read()` — returns the next byte (-1 if none available)
- **Baud rate** — bits per second; 9600 is standard for Arduino Uno
- **Newline handling** — filtering `\n` and `\r` to avoid false commands

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/2khBEO6IYfk-serialcommcapstone)
