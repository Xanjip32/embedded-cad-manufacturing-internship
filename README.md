# Embedded Systems, CAD & Digital Manufacturing — Internship Prep

![Repo banner](./assets/bg.png)

Hands-on preparation for a South Korea-based internship spanning embedded firmware, embedded hardware, CAD/3D design, digital manufacturing, and AI-assisted technical documentation. This repo tracks the full build-as-you-learn process: every project is written, wired, modeled, or printed by me — not copied from a tutorial and left untouched.

## Why this repo exists

My internship's official course-matching table lists five required competency areas. Rather than complete generic coursework, I built one focused project per area, wrote the code/design myself, and documented the process the way I'd want to hand it to a teammate. This repo is both my proof of work and a self-contained learning path — if you're prepping for a similar internship or just getting into embedded/CAD/3D printing, you can follow the same order.

## Repo structure

```
embedded-cad-manufacturing-internship/
├── src/                          # Actual projects & code
│   ├── arduino/                  # Arduino projects
│   │   ├── blinking-light/       # LED blink with serial read
│   │   ├── traffic-light-pedestrian/  # Pedestrian crossing signal
│   │   └── dimmer-switch/        # Analog dimmer control
│   ├── c/                        # C programming
│   │   ├── exercises/            # 17 progressive exercises (hello-world → bitmasks)
│   │   └── calculator/           # Calculator project (Makefile, src/)
│   └── cad/                      # CAD designs (Fusion 360)
├── prep/                         # Internship prep curriculum
│   ├── arduino-internship/       # 5-session Arduino prep (GPIO, ADC, PWM, interrupts, serial)
│   ├── cad-design/               # 5-session CAD prep (sketches, 3D modeling, assemblies)
│   ├── 3d-printing/              # 5-session 3D printing prep (slicer, settings, supports)
│   └── ai-prompt-engineering/    # 5-session AI/prompt engineering prep
├── docs/
│   └── MASTER-PLAN.pdf           # Full internship plan
├── assets/
│   └── bg.png                    # Repo banner
└── .gitignore
```

## What's covered

| Internship requirement | Path | Core skill demonstrated |
|---|---|---|
| Embedded control (firmware) | `src/c/` | C fundamentals → structs, pointers, dynamic memory, Makefile builds |
| Embedded control (hardware) | `src/arduino/` | Digital/analog I/O, sensors, PWM, interrupts, serial communication |
| 3D design (CAD) | `src/cad/` | Fusion 360 — parametric modeling, assemblies, STL export |
| Digital manufacturing | `prep/3d-printing/` | Slicing, print settings, FDM workflow, post-processing |
| AI utilization | `prep/ai-prompt-engineering/` | Prompt engineering, document/code workflows, iterative refinement |

## Tools & stack

| Category | Tools |
|---|---|
| Languages | C, Arduino C/C++ |
| Hardware | Arduino UNO, breadboard, LEDs, LDR, servo, pushbuttons |
| CAD / CAM | Autodesk Fusion 360 |
| Manufacturing | FDM 3D printing, Cura slicer |
| Version control | Git / GitHub |
| Documentation | Markdown, AI-assisted drafting (Claude) — I write the content, AI helps structure and polish it |

## A note on AI use

Every design decision, every line of C and Arduino code, and every CAD model in this repo is mine. I used AI tools to help structure documentation, tighten explanations, and catch gaps in my READMEs — the same way I'd use a writing tool, not a way to skip the engineering. I can walk through and explain every part of every project here.

## For fellow learners

If you're working through something similar, a rough order that worked well for me:

1. Get comfortable with C — arrays, pointers, structs, basic file I/O — before touching Arduino. Arduino sketches are C, and most of the friction disappears once the language itself isn't new.
2. Start Arduino with the free [freeCodeCamp Arduino course](https://www.freecodecamp.org) or Paul McWhorter's YouTube series — both work even without hardware via the Tinkercad simulator.
3. Learn Fusion 360 through Autodesk's own free "Learn Fusion 360 in 90 Minutes" course before jumping into your own designs — it teaches the exact sketch → extrude → export-to-STL pipeline you'll reuse constantly.
4. Print small, cheap test pieces before your final part — infill and support settings are much easier to learn from a 20-minute print than a 4-hour one.

## Contact

Feel free to open an issue or reach out if you're working through the same internship track or want to compare notes.
