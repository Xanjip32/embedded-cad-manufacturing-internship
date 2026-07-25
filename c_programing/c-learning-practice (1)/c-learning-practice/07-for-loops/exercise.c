/*
    Chapter: For loops
    ------------------------------------------------------
    PROBLEM:
    1. Print numbers 1 to 20 using a for loop, 5 numbers per line.
    2. Print the multiplication table (1 to 10) for the number 7,
       formatted like "7 x 3 = 21".
    3. Using a nested for loop, print a right triangle of stars:
        *
        **
        ***
        ****
        *****

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void)
{
    // TODO: print 1..20, 5 per line
    for (int i = 1; i <= 20; i++)
    {
        printf("%d", i);
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }

    // TODO: multiplication table for 7 (1..10)
    // a b c
    for (int i = 1; i <= 10;i++){
         printf("%d * %d = %d \n", i, 7, i * 7);
    }
           
        // TODO: right triangle of stars, 5 rows
   for (int i = 0; i <5;i++){
       for (int j = 0; j <= i;j++){
           printf("*");
       }
       printf("\n");
   }
}
