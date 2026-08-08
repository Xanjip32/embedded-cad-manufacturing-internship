# GitHub Update & CAD README — Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Create a professional README for the CAD/3D modeling folder, update the root README to reflect the new folder structure, and push all pending changes to GitHub.

**Architecture:** Three tasks — (1) write the CAD README, (2) update root README, (3) stage/commit/push.

**Tech Stack:** Markdown, Git, GitHub

---

## Context

The repo was recently restructured: the old `src/` directory was moved to `All projects/`. The working tree has many unstaged changes (deleted old files, new `All projects/` folder, new images in `public/assets/`). The `3d_modeling_porjects/` folder has 3 Fusion 360 files + 1 PNG but no README — only a PDF. The root README still references the old `src/` structure and needs updating.

---

### Task 1: Create README for 3D Modeling Projects

**Files:**
- Create: `All projects/3d_modeling_porjects/README.md`

**Interfaces:**
- Consumes: existing files in folder (`cabel organizer.f3d`, `assambly of differrent parts.f3z`, `psu housing of anycibic kossel lienar plus_.f3z`, `cake_deisgn.png`)
- Produces: `All projects/3d_modeling_porjects/README.md` — standalone portfolio README for CAD designs

- [ ] **Step 1: Create the CAD README**

Write a professional README.md for the 3D modeling folder with:
- Title and overview (Fusion 360 parametric design portfolio)
- Table of each design with name, description, file format, and what it demonstrates
- Skills demonstrated section (parametric modeling, assemblies, real-world part design)
- Tools used (Fusion 360, STL/F3Z export)
- File format explanation (.f3d = native Fusion, .f3z = Fusion archive with external references)

```markdown
# 3D Modeling Projects — Fusion 360 Portfolio

A collection of parametric 3D designs created in Autodesk Fusion 360, covering functional part design, assemblies, and real-world hardware projects.

## Designs

| # | Design | File | Description |
|---|--------|------|-------------|
| 1 | Cable Organizer | `cabel organizer.f3d` | Custom cable management solution for desk/workspace organization |
| 2 | Assembly of Different Parts | `assambly of differrent parts.f3z` | Multi-component assembly demonstrating constraint-based modeling |
| 3 | PSU Housing — Anycubic Kossel Linear Plus | `psu housing of anycibic kossel lienar plus_.f3z` | Replacement power supply housing for a 3D printer |

> **Note:** `.f3d` files are native Fusion 360 designs. `.f3z` files are Fusion 360 archives that preserve assembly relationships and external references.

## Skills Demonstrated

- **Parametric Modeling** — sketch-driven features with editable dimensions
- **Assembly Design** — multi-part assemblies with mates and constraints
- **Functional Part Design** — real-world hardware components (3D printer parts, organizers)
- **File Export** — STL/OBJ export for 3D printing

## Tools

- Autodesk Fusion 360 (Personal Use license)
- FDM 3D Printer (for physical validation)

## Author

**Aarya** — [GitHub Profile](https://github.com/<your-username>)
```

- [ ] **Step 2: Verify file created**

Run: `ls "All projects/3d_modeling_porjects/README.md"`

---

### Task 2: Update Root README

**Files:**
- Modify: `README.md` (root)

**Interfaces:**
- Consumes: current repo structure
- Produces: updated root README reflecting `All projects/` layout

- [ ] **Step 1: Update the repo structure section**

Replace the old `src/` structure in root README with the current `All projects/` structure. Update the competency table paths.

- [ ] **Step 2: Update paths in competency table**

Change `src/arduino/` → `All projects/arduino-projects/`, `src/c/` → `All projects/C_prog practise and project/`, `src/cad/` → `All projects/3d_modeling_porjects/`.

- [ ] **Step 3: Verify changes look correct**

Read the updated README and check paths match actual folder names.

---

### Task 3: Stage, Commit, and Push

**Files:**
- Stage all changes in working tree
- Commit with descriptive message
- Push to `origin/main`

- [ ] **Step 1: Check git status**

Run: `git status`

- [ ] **Step 2: Stage all changes**

Run: `git add -A`

- [ ] **Step 3: Commit**

Run: `git commit -m "docs: add CAD README, update root README, restructure project folder layout"`

- [ ] **Step 4: Push to GitHub**

Run: `git push origin main`

- [ ] **Step 5: Verify push succeeded**

Run: `git log --oneline -3`
