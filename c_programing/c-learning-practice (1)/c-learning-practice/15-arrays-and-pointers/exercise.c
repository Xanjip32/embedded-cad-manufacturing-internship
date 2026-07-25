/*
    Chapter: Arrays and Pointers
    ------------------------------------------------------
    PROBLEM:
    1. Declare an int array of 5 values. Using a POINTER (not [] syntax)
       and pointer arithmetic, print every element (i.e. use *(p+i)).
    2. Write `int sum_via_pointer(int *arr, int size)` that sums the
       array using pointer arithmetic only (no [] inside the function),
       and call it.
    3. Show that `arr[i]` and `*(arr+i)` print the same value for a
       couple of indices.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>


int sum_via_pointer(int *arr, int size) {
    // TODO: sum using pointer arithmetic, no [] operator
    int result = 0 ;
  // TODO: print elements using *(p+i)
    for (int i = 0; i <5;i++){
        result += *(arr+i);
    }
    return result;
}

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    // TODO: print elements using *(p+i)
    for (int i = 0; i <5;i++){
        printf("array element using pointer:%d \n",*(p+i));
    }

        // TODO: call sum_via_pointer, print result
     printf("sum via pointer: %d \n",sum_via_pointer(arr,5) );
   

    // TODO: show arr[2] == *(arr+2) for a couple indices
       for (int i = 0; i <5;i++){
        printf("show arr[%d] == *(arr+i)[%d] \n",arr[i] , *(arr+i));
    }

    return 0;
}
