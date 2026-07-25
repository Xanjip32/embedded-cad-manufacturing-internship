/*
    Chapter: Pointer Arithmetics
    ------------------------------------------------------
    PROBLEM:
    1. Declare an int array of 6 values and a pointer to its start./done
    2. Using only `p++` in a loop (no [] indexing), print every element.
    3. Print `p2 - p1` where p1 points at index 0 and p2 points at
       index 4, confirming it prints 4 (not the byte difference).
    4. Print the raw byte addresses (cast to (void*) is fine) of
       consecutive elements to show they differ by sizeof(int).

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

  int diff(unsigned int a, unsigned int b)
    {
        return a ^ b;
    }

void to_binary(unsigned int num, int bits) {
    for (int i = bits - 1; i >= 0; i--)
        printf("%d", (num >> i) & 1);
    printf("\n");
}

int main(void)
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int *p = arr;

    // TODO: walk the array with p++ only, print each value
    for (int i = 0; i < 6; i++)
    {
        printf("element of array:%d\n", *(arr + i));
        p++;
    }

    int *p1 = &arr[0];
    int *p2 = &arr[4];
    // TODO: print p2 - p1
    int res = p2 - p1;
    printf("result of p2-p1: %d \n", res);

    // TODO: print addresses of arr[0] and arr[1], show the byte difference
    printf("address of arr[0]: %d\n ", &arr[0]);
    printf("address of arr[1]: %d\n ", &arr[1]);

  

    int difference = diff(arr[0],arr[1]);
     printf("bitwise difference:%d\n", difference);
    //  printf("binrary difference:\n");
     to_binary(difference,8);
    //  printf("binary value of diffrerence:%d \n", difference);

     return 0;
}