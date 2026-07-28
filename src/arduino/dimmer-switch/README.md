# Dimmer Switch — Serial Monitor & Conditional LED Control

Potentiometer drives three LEDs with **if-else threshold logic** and **serial output** for real-time debugging.

## Circuit

<p align="center">
  <img src="/public/assets/dimmer_switch.png" alt="Dimmer switch circuit — Arduino UNO, potentiometer, and three LEDs on a breadboard" width="600"/>
  <br/>
  <em>Figure 1 — Tinkercad circuit: potentiometer on A0, three LEDs on D9/D10/D11</em>
</p>

| Pin | Component | Direction |
|-----|-----------|-----------|
| A0 | Potentiometer wiper | Analog input |
| D9 | LED 1 (220 Ω) | PWM output |
| D10 | LED 2 (220 Ω) | PWM output |
| D11 | LED 3 (220 Ω) | PWM output |

## If-Else Logic

The potentiometer value (`readValue`) is split into four ranges:

| Condition | readValue | Behavior |
|-----------|-----------|----------|
| `> 1000` | Near maximum | All three LEDs **blink** (250 ms on/off) |
| `< 600` | Low range | **LED 1 only** — brightness tracks the knob |
| `< 900` | Mid range | **LED 1 + LED 2** on |
| else | 900–1000 | **All three LEDs** on |

Each range uses `analogWrite()` to set PWM brightness proportional to the knob position.

## Serial Port Output

`Serial.begin(9600)` initializes the serial bus, and `Serial.print()` sends the potentiometer reading to the Serial Monitor (9600 baud).

```c
Serial.print(readValue);     // raw ADC value (0-1023)
Serial.print(" : ");
Serial.println(writeValue);  // PWM value (0-255)
```

This prints every 100 ms when `readValue` is in the 900–1000 range, giving real-time feedback like:

```
952 : 238
988 : 247
1010 : 252
```

Open the Serial Monitor in the Arduino IDE (**Tools → Serial Monitor**) at **9600 baud** to see the values.

## How it works

1. `analogRead(A0)` reads the potentiometer (0–1023).
2. Divided by 4 to fit PWM range (0–255).
3. `if-else` branches check the potentiometer value against thresholds.
4. `analogWrite()` sets LED brightness; `digitalWrite()` handles on/off for the blink mode.
5. `Serial.print()` outputs values to the Serial Monitor for debugging.

## Tinkercad simulation

No physical potentiometer was available, so the full circuit was built and tested in Tinkercad first.

**Live circuit:** [Open in Tinkercad](https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch)

## Skills demonstrated

- Analog input (`analogRead`)
- PWM output (`analogWrite`)
- ADC-to-PWM scaling (`10-bit → 8-bit`)
- `if-else` conditional branching on sensor thresholds
- Serial communication (`Serial.begin`, `Serial.print`, `Serial.println`)
- Real-time debugging via Serial Monitor
- Virtual prototyping in Tinkercad
