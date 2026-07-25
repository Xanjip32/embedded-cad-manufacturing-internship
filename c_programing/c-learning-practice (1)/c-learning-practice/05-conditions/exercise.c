/*
    Chapter: Conditions
    ------------------------------------------------------
    PROBLEM:
    Write a program that reads an integer test score (0-100) that you
    hardcode into a variable, then prints a letter grade:
        90-100 -> A
        80-89  -> B
        70-79  -> C
        60-69  -> D
        below 60 -> F
    Also print "Pass" if grade is D or better, otherwise "Fail".
    Try it with at least 3 different hardcoded scores (change and re-run,
    or use a small array of test scores and loop over it).

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void)
{
    int score = 82; // TODO: try different values

    // if/else if/else chain to print letter grade
    if (score >= 90 && score <= 100)
    {
        printf("grade A, You pass! \n");
    }
    else if (score >= 80 && score <= 89)
    {
        printf("grade B, You pass! \n");
    }
    else if (score >= 70 && score <= 79)
    {
        printf("grade C, You pass! \n");
    }
    else if (score >= 60 && score <= 69)
    {
        printf("grade D, You pass! \n");
    }
    else {
            printf("grade F, You FAIL! \n");
        }

    return 0;
}
