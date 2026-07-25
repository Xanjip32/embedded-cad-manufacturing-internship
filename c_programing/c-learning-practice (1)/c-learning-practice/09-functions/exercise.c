/*
    Chapter: Functions
    ------------------------------------------------------
    PROBLEM:
    Write these functions and call them all from main() with sample values:
    1. `int square(int x)` — returns x*x.
    2. `int is_even(int x)` — returns 1 if even, 0 if odd.
    3. `int sum_array(int arr[], int size)` — returns the sum of the array.
    4. `void print_stars(int n)` — prints n stars on one line, no return value.
    Print the results of each call with a label.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

// TODO: function prototypes
//  1. `int square(int x)` — returns x*x.
int square(int x){
    return x * x;
}

//     2. `int is_even(int x)` — returns 1 if even, 0 if odd.
        int is_even(int x){
            if (x/2==0){
                return 1;
            }
            else{
                return 0;
            }
        }
//     3. `int sum_array(int arr[], int size)` — returns the sum of the array.
        int sum_array(int arr[],int size){
            int sum = 0;
            for (int i = 0; i < size ;i++){
                sum += arr[i];
                
            }
            return sum;
        }
//     4. `void print_stars(int n)` — prints n stars on one line, no return value.
        void print_star(int n){
            for (int i = 0; i < n;i++){
                printf("*");
            }
        }
//     Print the results of each call with a label.

int main(void) {
    // TODO: call each function with sample values and print results
  // 1. square
int result1 = square(5);
printf("square(5) = %d\n", result1);

// 2. is_even
int result2 = is_even(7);
printf("is_even(7) = %d\n", result2);

// 3. sum_array
int nums[] = {1, 2, 3, 4, 5};
int result3 = sum_array(nums, 5);
printf("sum_array = %d\n", result3);

// 4. print_stars
print_star(5);


    return 0;
}

// TODO: function definitions below main (or move above main)
