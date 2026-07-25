# Embedded Systems, CAD & Digital Manufacturing — Internship Prep

Hands-on preparation for a South Korea-based internship spanning embedded firmware, embedded hardware, CAD/3D design, digital manufacturing, and AI-assisted technical documentation. This repo tracks the full build-as-you-learn process: every project is written, wired, modeled, or printed by me — not copied from a tutorial and left untouched.

## Why this repo exists

My internship's official course-matching table lists five required competency areas. Rather than complete generic coursework, I built one focused project per area, wrote the code/design myself, and documented the process the way I'd want to hand it to a teammate. This repo is both my proof of work and a self-contained learning path — if you're prepping for a similar internship or just getting into embedded/CAD/3D printing, you can follow the same order.

## What's covered

| Internship requirement | Folder | Core skill demonstrated |
|---|---|---|
| Embedded control (firmware) | [`embedded-firmware/`](./embedded-firmware) | C fundamentals → structs, pointers, dynamic memory, file I/O |
| Embedded control (hardware) | [`embedded-hw/`](./embedded-hw) | Arduino — digital/analog I/O, sensors, actuators |
| 3D design (CAD) | [`cad-design/`](./cad-design) | Fusion 360 — parametric modeling, assemblies, STL export |
| Digital manufacturing | [`digital-manufacturing/`](./digital-manufacturing) | Slicing, print settings, FDM workflow |
| AI utilization | woven into every folder's README | Used as a documentation/report-writing aid, not a code generator — see note below |
| Capstone | [`final-project/`](./final-project) | Smart Study Station — combines all four areas in one working build |

## Repo structure

```
embedded-mechatronics-internship/
├── embedded-firmware/     C programming — grade tracker CLI (structs, pointers, file I/O)
├── embedded-hw/           Arduino — LED circuits, sensors, servo control
├── cad-design/            Fusion 360 — phone stand + Arduino enclosure, STL files
├── digital-manufacturing/ Slicer settings, print comparisons, troubleshooting notes
├── final-project/         Smart Study Station — dock + timer + LED + buzzer
└── README.md
```

Each folder has its own README with build steps, wiring diagrams or screenshots, and lessons learned — so a reviewer can go straight to the piece they care about without reading this whole file.

## Tools & stack

| Category | Tools |
|---|---|
| Languages | C, Arduino C/C++ |
| Hardware | Arduino UNO, breadboard, LEDs, LDR, servo, pushbuttons |
| CAD / CAM | Autodesk Fusion 360 |
| Manufacturing | FDM 3D printing, Cura slicer |
| Version control | Git / GitHub |
| Documentation | Markdown, AI-assisted drafting (Claude) — I write the content, AI helps structure and polish it |

## Progress

| Week | Focus | Status |
|---|---|---|
| 1 | C fundamentals | ⬜ In progress |
| 2 | Arduino | ⬜ Not started |
| 3 | Fusion 360 | ⬜ Not started |
| 4 | 3D printing | ⬜ Not started |
| 5 | Capstone build | ⬜ Not started |

*(Updated as each week wraps — check individual folder READMEs for build logs and dated commits.)*

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