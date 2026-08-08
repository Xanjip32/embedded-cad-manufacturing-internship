# Traffic Light with Pedestrian Switch

A pedestrian crossing signal that alternates between a normal green-blink mode and a full traffic-light sequence triggered by a pushbutton.

## Circuit

<p align="center">
  <img src="/public/assets/traffic_light_layout.png" alt="Breadboard layout — Arduino UNO with three LEDs and pushbutton" width="600"/>
  <br/>
  <em>Figure 1 — Fritzing-style breadboard diagram</em>
</p>

<p align="center">
  <img src="/public/assets/traffic_light_schematic.png" alt="Schematic diagram — Arduino UNO, LEDs on pins 3/4/5, pushbutton on pin 2" width="600"/>
  <br/>
  <em>Figure 2 — Schematic with color-coded components</em>
</p>

| Pin | Component | Direction |
|-----|-----------|-----------|
| D2 | Pushbutton | Digital input (INPUT, active LOW) |
| D3 | Green LED (220 Ω) | Digital output |
| D4 | Yellow LED (220 Ω) | Digital output |
| D5 | Red LED (220 Ω) | Digital output |

## Logic

Two operating modes controlled by the pushbutton on D2:

| Mode | Trigger | Behavior |
|------|---------|----------|
| Normal | Button not pressed (HIGH) | Green LED **blinks** — 500 ms on, 500 ms off |
| Pedestrian | Button pressed (LOW) | Full sequence: **Green → Yellow → Red**, 500 ms each |

The pedestrian sequence runs once per button press. After the red phase completes, the system returns to normal blink mode.

## How it works

1. `pinMode()` configures D3–D5 as outputs and D2 as input.
2. `digitalRead(stopPin)` checks the pushbutton state each loop iteration.
3. If `LOW` (pressed), `digitalWrite()` cycles through green → yellow → red with `delay(500)` between each.
4. If `HIGH` (not pressed), only the green LED blinks with `delay(500)` intervals.

## Skills demonstrated

- Digital output (`digitalWrite`)
- Digital input (`digitalRead`)
- `if-else` conditional branching
- LED control with current-limiting resistors
- Pushbutton input handling (active-low configuration)
