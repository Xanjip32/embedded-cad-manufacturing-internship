/*
    Chapter: Structures
    ------------------------------------------------------
    PROBLEM:
    1. Define a `struct Book` with fields: char title[50], char author[30],
       int year, float price.
    2. Create two Book variables and fill them with sample data.
    3. Write a function `void print_book(struct Book b)` that prints all
       fields nicely, and call it for both books.
    4. Create an array of 3 Books, fill it in a loop, and print all of
       them using print_book().

    Compile & run (from inside this folder):
        gcc exercise.c -o exercise
        ./exercise        (Linux/Mac)
        exercise.exe      (Windows)

    Write your solution below where it says TODO.
*/

#include <stdio.h>

#include <string.h>

struct Book {
    char title[50];
    char author[30];
    int year;
    float price;
};

void print_book(struct Book b) {
    // TODO: print all fields
    printf("tittle:%s\n", b.title);
    printf("author:%s\n", b.author);
    printf("year:%d\n", b.year);
    printf("price:%.2f\n", b.price);
}

int main(void) {
    // TODO: create 2 Book variables, fill fields, print them
    struct Book harry_potter;
    strcpy(harry_potter.title, "Harry Potter");
    strcpy(harry_potter.author, "john doe");
    harry_potter.year = 2001;
    harry_potter.price = 999;


    struct Book Kr_law;
    strcpy(Kr_law.title, "korean law");
    strcpy(Kr_law.author, "kim woo");
    Kr_law.year = 1919;
    Kr_law.price = 1000;

    struct Book english;
    strcpy(english.title, "Speak English");
    strcpy(english.author, "david johnson");
    english.year = 2005;
    english.price = 100;

    // print_book(harry_potter);
    // print_book(Kr_law);

    struct Book books[3] =
        {
            harry_potter,
            Kr_law,
            english,
        };

    // TODO: array of 3 Books, fill in a loop, print all

    for (int i = 0; i < 3;i++){
        print_book(books[i]);
    }

        return 0;
}
