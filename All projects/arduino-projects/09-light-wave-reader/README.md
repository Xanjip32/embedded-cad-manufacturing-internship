# 09 — Light Wave Reader

> **Concept:** Photoresistor · Analog Read · Sensor Calibration · Visualization

## Overview

A **light-reactive system** that reads ambient light levels with a photoresistor and displays them as both physical LED brightness and a visual **ASCII bar graph** in the Serial Monitor. The LED gets brighter in darkness and dimmer in light — acting as an automatic nightlight.

## Circuit Diagram

```
Arduino Uno
┌──────────────────┐
│                  │
│     A0  ├───┤──── [LDR] ──── 5V
│         ├───┤──── [10kΩ] ──── GND
│                  │
│     D9  ~──┤──── [LED +] ──── [220Ω] ──── GND
│                  │
└──────────────────┘
```

## Components

| Component | Quantity |
|-----------|----------|
| Arduino Uno R3 | 1 |
| Photoresistor (LDR) | 1 |
| LED (any color) | 1 |
| 10kΩ Resistor | 1 |
| 220Ω Resistor | 1 |
| Breadboard & Jumper Wires | — |

## How It Works

1. **Voltage divider** — LDR + 10kΩ resistor creates a voltage proportional to light
2. **ADC read** — `analogRead(A0)` returns 0 (dark) to 1023 (bright)
3. **Inverse mapping** — LED brightness is inverted (dark → bright LED)
4. **Serial bar graph** — 30-character visual representation of light level

## Serial Output Example

```
Light: 512  [##############..............]
Light: 1023 [##############################]
Light: 128  [####..........................]
```

## Key Concepts

- **Voltage divider** — two resistors in series; midpoint voltage is readable by ADC
- **Inverse mapping** — `map(val, 0, 1023, 255, 0)` flips the relationship
- **Sensor calibration** — real LDRs vary; you may need to adjust min/max values
- **ASCII visualization** — `#` and `.` characters create a simple bar graph
- **Light-to-action** — sensor reading directly drives physical output (LED)

## Tinkercad Simulation

🔗 [Open in Tinkercad](https://www.tinkercad.com/things/12MWZ1TbvjJ-lightwaverader)
