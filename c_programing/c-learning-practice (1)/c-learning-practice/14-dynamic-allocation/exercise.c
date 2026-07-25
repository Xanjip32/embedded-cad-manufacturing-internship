/*
    Chapter: Dynamic allocation
    ------------------------------------------------------
    PROBLEM:
    1. Ask the user (via scanf) how many integers they want to store
       (or hardcode a number like 5 to start).
    2. Dynamically allocate an int array of that size with malloc.
    3. Fill it with values (e.g. i*i for each index i) and print them.
    4. Free the memory and set the pointer to NULL after freeing.
    5. In a comment, explain what a "memory leak" is and how free()
       prevents one.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

#include <stdlib.h>

int main(void)
{
    // int n = 5; // TODO: try scanf("%d", &n) if you like

    // int *arr = NULL;
    // TODO: malloc n ints, check for NULL

    // TODO: fill with i*i, print

    // TODO: free(arr), set arr = NULL

    // TODO: comment explaining memory leaks

    // basic practise
    // int num;
    // printf("how many integer you want to store? \n");
    // scanf("%d", &num);

    // int *p = malloc(num * sizeof(int));

    // for (int i = 0; i < num;i++){
    //     printf("enter the value for %d:  ", i);
    //     scanf("%d", &p[i]);
    // }

    // //print it in reverse order
    // printf("printing in reverse order!\n");
    // for (int i = num - 1; i >= 0;i--){
    //     printf("%d", p[i]);
    // }
    // printf("\n");

    // free(p);
    // p = NULL;

    // int *p = calloc(5, sizeof(int));
    // p[0] = 1;
    // p[2] = 2;
    // p[3] = 3;
    // p[4] = 4;
    // p[5] = 5;

    //   for (int i = 0; i <5;i++){
    //     // printf("printig value:p[%d] = %d" i,p[i]);
    //      printf("p[%d] = %d\n", i, p[i]);

    // }

    int num;
    printf("how many integer you want to store? \n");
    scanf("%d", &num);

    int *p = malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("enter the value for %d:  ", i);
        scanf("%d", &p[i]);
    }
    int extra;
    printf("do you want to add more ? \n");
    scanf("%d", &extra);

    int *tmp = realloc(p, (num +extra) * sizeof(int));
    if (tmp == NULL)
    {
        printf("realloc failed\n");
        free(p);
        return 1;
    }
    p = tmp;

    for (int i = 0; i < (num + extra); i++)
    {
        printf("enter the value for %d:  ", i);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < (num + extra); i++)
    {
        // printf("printig value:p[%d] = %d" i,p[i]);
        printf("p[%d] = %d\n", i, p[i]);
    }

    return 0;
}
