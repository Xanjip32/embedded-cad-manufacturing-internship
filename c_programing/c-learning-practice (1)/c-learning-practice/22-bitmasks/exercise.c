/*
    Chapter: Bitmasks
    ------------------------------------------------------
    PROBLEM:
    Model 4 permissions with bitmask flags: READ (bit 0), WRITE (bit 1),
    EXECUTE (bit 2), DELETE (bit 3).
    1. #define the four flags using left shifts.
    2. Start with permissions = 0. Set READ and WRITE using |=.
    3. Check and print whether EXECUTE is set (it shouldn't be yet).
    4. Add EXECUTE, then remove WRITE using &= ~.
    5. Print the final permissions value in binary (write a small loop
       that prints each of the lowest 4 bits, or use a helper function).

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

#include <stdio.h>

#define READ    (1 << 0)
#define WRITE   (1 << 1)
#define EXECUTE (1 << 2)
#define DELETE  (1 << 3)

int main(void) {
    unsigned int permissions = 0;

    // TODO: set READ and WRITE

    // TODO: check/print whether EXECUTE is set

    // TODO: add EXECUTE, then remove WRITE

    // TODO: print the final permissions in binary (4 bits)

    return 0;
}
