/*
    Chapter: Multidimensional Arrays
    ------------------------------------------------------
    PROBLEM:
    1. Declare a 2D int array representing a 3x3 tic-tac-toe-like grid,
       filled with values 1..9 in row-major order (1,2,3 / 4,5,6 / 7,8,9).
    2. Print it nicely as a 3x3 grid (rows on separate lines, values
       separated by spaces).
    3. Compute and print the sum of all elements.
    4. Compute and print the sum of the main diagonal
       (grid[0][0] + grid[1][1] + grid[2][2]).

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void)
{
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // TODO: print grid as 3x3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
    // TODO: sum of all elements
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += grid[i][j];
        }
    }
    printf("sum:%d \n", sum);

    // TODO: sum of main diagonal
    int diagonal_sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                diagonal_sum += grid[i][j];
            }
        }
    }

    printf("diagonal_sum:%d", diagonal_sum);

    return 0;
}
