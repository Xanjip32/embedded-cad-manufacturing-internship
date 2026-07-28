#include <stdio.h>

int main(void) {
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (op == '+') {
        printf("Result: %.2f\n", a + b);
    } else if (op == '-') {
        printf("Result: %.2f\n", a - b);
    } else if (op == '*') {
        printf("Result: %.2f\n", a * b);
    } else if (op == '/') {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("I don't understand that operator.\n");
    }

    return 0;
}
