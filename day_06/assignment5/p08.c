// Write a C program to create Simple Calculator using switch case.

#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression (of the form (10 + 5)): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("Result: %.2f", a + b);
            break;

        case '-':
            printf("Result: %.2f", a - b);
            break;

        case '*':
            printf("Result: %.2f", a * b);
            break;

        case '/':
            printf("Result: %.2f", a / b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}