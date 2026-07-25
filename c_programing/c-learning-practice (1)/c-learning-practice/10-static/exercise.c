/*
    Chapter: Static
    ------------------------------------------------------
    PROBLEM:
    1. Write a function `int next_id(void)` that returns 1 the first time
       it's called, 2 the second time, 3 the third time, etc., using a
       static local variable as a counter.
    2. Call it 5 times in main() and print each returned value.
    3. In a comment, explain in your own words why this would NOT work
       correctly if the counter variable were declared as a normal
       (non-static) local variable instead.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

// TODO: int next_id(void) using a static local counter
int next_id()
{
    int static num;
    num++;
    return num;
}

int main(void)
{
    // TODO: call next_id() 5 times, print each result
    printf("the number is:%d \n", next_id(1));
    printf("the number is:%d \n", next_id(1));
    printf("the number is:%d \n", next_id(1));

    // TODO: comment explaining static vs normal local variable here
    // TODO: comment explaining static vs normal local variable here

    return 0;
}
