# Blinking Light

A basic Arduino blink example that also supports a pedestrian traffic-light sequence when a pushbutton is pressed.

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

| Mode | Trigger | Behavior |
|------|---------|----------|
| Normal | Button not pressed (HIGH) | Green LED **blinks** — 500 ms on, 500 ms off |
| Pedestrian | Button pressed (LOW) | Full sequence: **Green → Yellow → Red**, 500 ms each |

## How it works

1. `pinMode()` sets D3–D5 as outputs and D2 as input.
2. `digitalRead(stopPin)` reads the pushbutton state each loop.
3. Pressed (LOW): cycles green → yellow → red with 500 ms delays.
4. Not pressed (HIGH): green LED blinks on/off at 500 ms intervals.

## Skills demonstrated

- Digital output (`digitalWrite`)
- Digital input (`digitalRead`)
- `if-else` conditional branching
- LED control with current-limiting resistors
- Pushbutton input (active-low)
