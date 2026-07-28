/*
    Chapter: Pointers
    ------------------------------------------------------
    PROBLEM:
    1. Declare an int variable and a pointer to it. Print the variable's
       value, its address, and the value obtained by dereferencing the
       pointer (all three should show the value is the same / address matches).
    2. Change the variable's value THROUGH the pointer (e.g. *p = 99;)
       and print the variable again to prove it changed.
    3. Write a small demo showing that an array name decays to a pointer
       to its first element (print arr and &arr[0] — they should match).

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x; 
    // TODO: point p at x

    // TODO: print x, &x, *p
    printf("value at variable x:%u \n", x);
    printf("value at variable x:%u\n", *(&x));
    printf("value at variable x:%u\n", *p);

    // TODO: change x through the pointer, print x again
    int y = *p;
    printf("value at variable y:%u\n", y);

    int arr[3] = {1, 2, 3};
    // TODO: print arr vs &arr[0]
    printf("value at variable arr:%d\n",arr);
    printf("value at variable arr[0]:%d\n",&arr[0]);

    return 0;
}
