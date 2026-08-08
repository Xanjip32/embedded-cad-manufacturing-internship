#!/usr/bin/env python3
"""
Automatic checker for the C practice exercises.

Usage:
    python3 check.py                # check every chapter
    python3 check.py 04             # check just chapter 04 (prefix match)
    python3 check.py 04-multidimensional-arrays

What it does per chapter:
    1. Compiles exercise.c with gcc -Wall -Wextra
    2. Runs the resulting binary (5 second timeout, in case of infinite loops)
    3. Runs a chapter-specific validator against stdout

Chapters whose problem statement pins down exact expected values (e.g.
"factorial of 6", grid filled 1..9) get a real correctness check via
regex/substring matching on the output. Chapters where YOU choose your
own values/labels (e.g. your own name, your own array numbers) only get
a "smoke test" -- did it compile and run without crashing/hanging. That's
noted in the result so you're never misled into thinking a smoke-tested
chapter was graded for correctness.
"""

import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.abspath(__file__))


def compile_and_run(chapter_dir):
    src = os.path.join(ROOT, chapter_dir, "exercise.c")
    if not os.path.isfile(src):
        return None, None, f"no exercise.c found in {chapter_dir}"

    binary = os.path.join(ROOT, chapter_dir, "exercise_bin")
    compile_proc = subprocess.run(
        ["gcc", "-Wall", "-Wextra", src, "-o", binary],
        capture_output=True, text=True
    )
    if compile_proc.returncode != 0:
        return None, compile_proc.stderr, "COMPILE ERROR"

    try:
        run_proc = subprocess.run(
            [binary], capture_output=True, text=True, timeout=5
        )
    except subprocess.TimeoutExpired:
        return None, None, "TIMED OUT (infinite loop?)"
    finally:
        if os.path.exists(binary):
            os.remove(binary)

    if run_proc.returncode != 0:
        return run_proc.stdout, run_proc.stderr, f"CRASHED (exit code {run_proc.returncode})"

    return run_proc.stdout, run_proc.stderr, None


def contains_all(output, patterns):
    missing = [p for p in patterns if not re.search(p, output)]
    return missing


# chapter_dir -> (mode, checks)
#   mode "exact"  -> list of regex patterns that must ALL appear in stdout
#   mode "smoke"  -> just needs to compile + run + produce non-empty output
VALIDATORS = {
    "01-hello-world": ("exact", [r"Hello, World!", r"I am learning C\."]),
    "02-variables-and-types": ("smoke", []),
    "03-arrays": ("smoke", []),
    "04-multidimensional-arrays": ("exact", [r"\b45\b", r"\b15\b"]),
    "05-conditions": ("smoke", []),
    "06-strings": ("smoke", []),
    "07-for-loops": ("exact", [r"7.{0,3}x.{0,3}3.{0,3}=.{0,3}21", r"\*{5}"]),
    "08-while-loops": ("exact", [r"\b720\b", r"Liftoff!"]),
    "09-functions": ("smoke", []),
    "10-static": ("exact", [r"\b1\b.*\b2\b.*\b3\b.*\b4\b.*\b5\b"]),
    "11-pointers": ("smoke", []),
    "12-structures": ("smoke", []),
    "13-function-arguments-by-reference": ("exact", [r"\b10\b"]),
    "14-dynamic-allocation": ("exact", [r"\b0\b", r"\b1\b", r"\b4\b", r"\b9\b", r"\b16\b"]),
    "15-arrays-and-pointers": ("exact", [r"\b150\b"]),
    "16-recursion": ("exact", [r"\b720\b", r"\b55\b", r"\b10\b"]),
    "17-linked-lists": ("exact", [r"->", r"NULL"]),
    "18-binary-trees": ("exact", [r"20.*30.*40.*50.*60.*70.*80"]),
    "19-unions": ("exact", [r"\b65\b"]),
    "20-pointer-arithmetics": ("exact", [r"\b4\b"]),
    "21-function-pointers": ("exact", [r"\b11\b", r"\b5\b", r"\b24\b"]),
    "22-bitmasks": ("smoke", []),
}


def check_one(chapter_dir):
    print(f"\n=== {chapter_dir} ===")
    stdout, stderr, err = compile_and_run(chapter_dir)

    if err in ("COMPILE ERROR", "TIMED OUT (infinite loop?)") or (err and err.startswith("CRASHED")):
        print(f"  FAIL - {err}")
        if stderr:
            print("  " + stderr.strip().replace("\n", "\n  "))
        return False

    if err:  # missing exercise.c etc
        print(f"  SKIP - {err}")
        return None

    mode, patterns = VALIDATORS.get(chapter_dir, ("smoke", []))

    if mode == "smoke":
        if stdout.strip():
            print("  OK (smoke test: compiled & ran, produced output)")
            print("  NOTE: this chapter's values are your own choice, so output")
            print("        isn't auto-graded for correctness -- check it by eye.")
            return True
        else:
            print("  FAIL - compiled and ran but produced no output at all")
            return False

    missing = contains_all(stdout, patterns)
    if not missing:
        print("  PASS")
        return True
    else:
        print("  FAIL - expected output not found")
        print(f"  Looked for patterns: {patterns}")
        print("  --- your program's output was: ---")
        print("  " + (stdout.strip().replace("\n", "\n  ") if stdout.strip() else "(empty)"))
        return False


def main():
    arg = sys.argv[1] if len(sys.argv) > 1 else None
    all_chapters = sorted(
        d for d in os.listdir(ROOT)
        if os.path.isdir(os.path.join(ROOT, d)) and d[:2].isdigit()
    )

    if arg:
        targets = [d for d in all_chapters if d.startswith(arg)]
        if not targets:
            print(f"No chapter matches '{arg}'")
            sys.exit(1)
    else:
        targets = all_chapters

    results = {}
    for chapter in targets:
        results[chapter] = check_one(chapter)

    print("\n=== Summary ===")
    for chapter, result in results.items():
        status = "PASS" if result is True else ("FAIL" if result is False else "SKIP")
        print(f"  {status:5} {chapter}")

    if any(r is False for r in results.values()):
        sys.exit(1)


if __name__ == "__main__":
    main()
