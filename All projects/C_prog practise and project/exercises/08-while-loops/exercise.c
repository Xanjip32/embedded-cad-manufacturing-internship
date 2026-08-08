/*
    Chapter: While loops
    ------------------------------------------------------
    PROBLEM:
    1. Using a while loop, compute the factorial of 6 (6! = 720).
    2. Using a while loop, find how many times you can divide 1000 by 2
       before it becomes less than 1 (count the divisions), printing
       each intermediate value.
    3. Using a do-while loop, simulate a countdown from 5 to 1 then
       print "Liftoff!".

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

int main(void)
{
    // TODO: factorial of 6 with while loop
    int n = 6;
    int res = 1;
    while (n > 1)
    {
        res *= n;
        n--;
    }
    printf("%d! = %d\n", 6, res);

    // TODO: repeated division of 1000 by 2, counting steps
    int number = 1000;
    int count = 0;
    int min_num = 1;
    while (number > min_num)
    {
        /* code */
        number /= 2;
        count++;
        printf("intermediate value:%d \n", number);
    }
    printf("1000 is divided by 2 [%d times]\n", count);

    // TODO: do-while countdown 5..1 then "Liftoff!"
    int i = 5;
    do
    {
        /* code */
        printf("countdown:%d \n", i);
        i--;
    } while (i >= 1);

    // practise

    //     int res = 1;
    //     for (int j = 1; j <= 6; j++)
    //     {
    //         res *= j;
    //     }
    //     printf("%d! is %d", 6, res);

    //     return 0;
}
