/*
    Chapter: Strings
    ------------------------------------------------------
    PROBLEM:
    1. Declare a char array and store your first name in it.
    2. Print its length using strlen().
    3. Concatenate " says hi!" to it using strcat() and print the result.
    4. Write a loop that prints the string character by character,
       one per line (walk the array until you hit '\0').
    5. Compare two hardcoded strings with strcmp() and print whether
       they are equal.

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

#include <string.h>

int main(void)
{
    char name[40] = "Alice"; // TODO: use your own name

    // TODO: print length with strlen()
    int length_ = strlen(name);
    printf("length of string:%d \n", length_);

    // TODO: strcat " says hi!" and print
    char new_str[50] = "Hi ";
    strcat(new_str, name);
    printf("new concat word is:%s \n", new_str);

    // TODO: print char by char until '\0'
    for (int i = 0; name[i] != '\0'; i++){
        printf("%c\n", name[i]);
    }

    // TODO: strcmp two strings and print result
    if (strcmp(name,new_str) == length_){
        printf("both name%c and new_str%c are equal in length%d",name,new_str,length_);
    }
    else{
        printf("both name %s and new_str %s are NOT equal in length which is:%d",name,new_str,length_);
    }

    return 0;
}
