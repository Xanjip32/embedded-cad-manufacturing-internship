/*
    Chapter: Variables and Types
    ------------------------------------------------------
    PROBLEM:
    1. Declare an int, a float, and a char variable and give them values
       (e.g. your age, your height in meters, first letter of your name).
    2. Print each value with the correct format specifier, labeled, e.g.
           Age: 20
           Height: 1.75
           Initial: A
    3. Print the size in bytes of int, float, double and char using sizeof().

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void) {
    // TODO: declare variables
    int Age = 25;
    float Height = 1.75;
    char Initial = 'A';


    // TODO: print them with labels
    printf("Age: %d \n",Age);
    printf("Height: %.2f \n",Height);
    printf("Initial: %c \n",Initial);

    // TODO: print sizeof() for int, float, double, char
    printf("size for int:%zu bytes \n", sizeof(Age));
    printf("size for float:%zu bytes \n", sizeof(Height));
    printf("size for char:%zu bytes \n", sizeof(Initial));

    return 0;
}
