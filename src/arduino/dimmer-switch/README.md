# Dimmer Switch

Potentiometer controls three LEDs via PWM — turn the knob, all three dims together.

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

## How it works

1. `analogRead(A0)` reads the potentiometer (0–1023).
2. Divided by 4 to fit PWM range (0–255).
3. `analogWrite()` drives all three LEDs at the same brightness.

## Tinkercad simulation

No physical potentiometer was available, so the full circuit was built and tested in Tinkercad first.

**Live circuit:** [Open in Tinkercad](https://www.tinkercad.com/things/cuFjfuSvv3k-dimmerswitch)

## Skills demonstrated

- Analog input (`analogRead`)
- PWM output (`analogWrite`)
- ADC-to-PWM scaling (`10-bit → 8-bit`)
- Virtual prototyping in Tinkercad
