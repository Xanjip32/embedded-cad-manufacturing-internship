/*
    Chapter: Function arguments by reference
    ------------------------------------------------------
    PROBLEM:
    1. Write `void swap(int *a, int *b)` that swaps the values pointed
       to by a and b. Demonstrate it in main() on two ints, printing
       before and after.
    2. Write `void double_value(int *x)` that doubles the value it points to.
    3. Write a WRONG version `void double_value_broken(int x)` that takes
       an int by value instead, call it too, and in a comment explain
       why it does NOT change the caller's variable.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

// TODO: void swap(int *a, int *b)
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// TODO: void double_value(int *x)
void double_value(int *x){
    *x *= *x;
}

// TODO: void double_value_broken(int x)
void double_value_broken(int x){
    x *= x;
}


int main(void) {
    int a = 3, b = 7;
    // TODO: print a,b, call swap, print a,b again

    printf("Before swapped value of a:%d and b:%d \n", a, b);
    swap(&a, &b);

    printf("swapped value of a:%d and b:%d \n",a,b);

    int val = 5;
    // TODO: call double_value, print val
    double_value(&val);
    printf("double value: %d\n",val);

    
    // TODO: call double_value_broken, print val, explain in a comment why it didn't change
    int n = 5;
    double_value_broken(n);
    printf("After broken: %d\n", n );            
    return 0;
}
