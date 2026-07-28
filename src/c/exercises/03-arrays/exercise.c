/*
    Chapter: Arrays
    ------------------------------------------------------
    PROBLEM:
    1. Create an int array of 6 numbers of your choice.
    2. Print every element on its own line using a loop.
    3. Compute and print the sum and the average of all elements.
    4. Find and print the largest value in the array.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void)
{
    int nums[6] = {1, 2, 3, 4, 5, 6};

    // TODO: print each element
    for (int i = 0; i < 6; i++)
    {
        printf("array number: %d \n", nums[i]);
    }

    // TODO: compute sum, average
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += nums[i];
    }
    printf("sum of array: %d \n", sum);

    
    // TODO: find and print the largest value
    int max = nums[0];
    for (int i = 0; i < 6; i++)
    {
        if(nums[i] > max){
            max = nums[i];
        }
    }
    printf("largest value: %d \n",max);




    return 0;
}
