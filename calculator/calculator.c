#include <stdio.h>

// Calculator program that can add, subtract, multiply, and divide two numbers.
int main() {
    // Declare variables
    int num1, num2;
    char operator;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &operator);
    printf("Enter another number: ");
    scanf("%d", &num2);

    // Perform calculation
    if (operator == '+') {
        printf("%d + %d = %d", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%d - %d = %d", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%d * %d = %d", num1, num2, num1 * num2);
    } else if (operator == '/') {
        printf("%d / %d = %d", num1, num2, num1 / num2);
    } else {
        printf("Invalid operator");
    }

    return 0;
}
