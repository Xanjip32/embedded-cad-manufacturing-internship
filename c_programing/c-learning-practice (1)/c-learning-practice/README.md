<div align="center">

# C Programming — From Basics to Bitmasks

**A hands-on journey through 22 chapters of C, built on [learn-c.org](https://www.learn-c.org/)**

![Language](https://img.shields.io/badge/Language-C-03599C?style=for-the-badge&logo=c&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Active-brightyellow?style=for-the-badge)
![Purpose](https://img.shields.io/badge/Purpose-Internship%20Prep-orange?style=for-the-badge)

<img src="https://www.learn-c.org/static/img/favicons/learn-c.org.ico" width="0" height="0" alt=""/>

<br>

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1200px-C_Programming_Language.svg.png" width="120" alt="C Language">

<br>

*22 chapters — from "Hello World" to bitwise operations — each with hands-on exercises to build real C intuition.*

</div>

---

## Why This Repo?

C is the foundation of operating systems, embedded systems, compilers, and performance-critical software. This repo is my structured practice through **every core topic on [learn-c.org](https://www.learn-c.org/)** — solved, compiled, and documented.

> Whether you're prepping for internships, brushing up for interviews, or learning C from scratch — each folder is a self-contained exercise you can fork, solve, and learn from.

---

## Chapters

### Basics

| # | Chapter | Key Concepts |
|---|---------|-------------|
| 01 | [Hello World](01-hello-world/) | `printf`, program structure |
| 02 | [Variables and Types](02-variables-and-types/) | `int`, `float`, `char`, `sizeof` |
| 03 | [Arrays](03-arrays/) | Declaration, indexing, iteration |
| 04 | [Multidimensional Arrays](04-multidimensional-arrays/) | 2D arrays, nested loops |
| 05 | [Conditions](05-conditions/) | `if/else`, `switch`, ternary |
| 06 | [Strings](06-strings/) | Character arrays, string functions |
| 07 | [For Loops](07-for-loops/) | Loop patterns, `break`/`continue` |
| 08 | [While Loops](08-while-loops/) | Sentinel values, loop design |
| 09 | [Functions](09-functions/) | Parameters, return values, scope |
| 10 | [Static](10-static/) | `static` variables, encapsulation |

### Intermediate

| # | Chapter | Key Concepts |
|---|---------|-------------|
| 11 | [Pointers](11-pointers/) | Address-of `&`, dereference `*` |
| 12 | [Structures](12-structures/) | `struct`, nested structs, typedef |
| 13 | [Function Arguments by Reference](13-function-arguments-by-reference/) | Pointer parameters, swap |
| 14 | [Dynamic Allocation](14-dynamic-allocation/) | `malloc`, `calloc`, `free` |
| 15 | [Arrays and Pointers](15-arrays-and-pointers/) | Pointer arithmetic, array decay |

### Advanced

| # | Chapter | Key Concepts |
|---|---------|-------------|
| 16 | Recursion | Call stack, base cases |
| 17 | Linked Lists | Nodes, traversal, insertion |
| 18 | Binary Trees | Traversal, recursive trees |
| 19 | Unions | Memory sharing, use cases |
| 20 | [Pointer Arithmetics](20-pointer-arithmetics/) | Offset, stride, pointer math |
| 21 | Function Pointers | Callbacks, function arrays |
| 22 | [Bitmasks](22-bitmasks/) | Bitwise ops, flags, permissions |

---

## Getting Started

### Prerequisites

- **GCC** compiler — verify with `gcc --version`
  - Windows: [MSYS2](https://www.msys2.org/) or WSL
  - Mac: `xcode-select --install`
  - Linux: `sudo apt install build-essential`
- **VS Code** with [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) (recommended)

### Running an Exercise

```bash
# Navigate to any chapter
cd 01-hello-world/

# Compile and run
gcc exercise.c -o exercise
./exercise        # Linux / Mac
exercise.exe      # Windows
```

### Auto-Check Your Solutions

```bash
python3 check.py 01          # Check chapter 01
python3 check.py             # Check all chapters
```

- Chapters with exact expected output → **PASS/FAIL** grading
- Chapters with open-ended output → **smoke test** (compiles, runs, no crash)
- Catches compile errors, crashes, and infinite loops (5s timeout)

---

## How Each Exercise Works

```
exercise.c
├── Problem statement (comments at top)
├── #include and #define
├── int main() {
│   ├── // TODO: your code here
│   └── return 0;
}
```

1. Read the problem in the comments
2. Fill in the `// TODO` sections
3. Compile, run, verify output
4. Move to the next chapter

---

## Repository Structure

```
.
├── 01-hello-world/
├── 02-variables-and-types/
├── 03-arrays/
├── ...
├── 22-bitmasks/
├── notes/
│   └── notes.md          # Chapter-by-chapter notes
├── check.py              # Auto-grading script
├── Makefile              # Build all at once
└── README.md
```

---

## What You'll Learn

By completing all 22 chapters, you'll have hands-on experience with:

- **Memory management** — pointers, dynamic allocation, pointer arithmetic
- **Data structures** — arrays, structs, linked lists, binary trees
- **Code organization** — functions, static variables, function pointers
- **Low-level operations** — bitmasks, unions, address manipulation
- **Problem solving** — recursion, algorithms, C-style thinking

These are exactly the topics that come up in **technical interviews** and **systems-level internship work**.

---

## Contributing

This is a personal learning repo, but if you find a bug in the exercises or want to add notes, feel free to open a PR.

---

## Acknowledgments

- [learn-c.org](https://www.learn-c.org/) — the interactive course this repo follows
- [gcc](https://gcc.gnu.org/) — the compiler that makes it all work

---

<div align="center">

**Built with ☕ and curiosity**

*If this helped you learn C, give it a ⭐*

</div>
