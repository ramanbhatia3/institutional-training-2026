// Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

#include <stdio.h>

int main() {
    int amount;

    printf("Input amount: ");
    scanf("%d", &amount);

    printf("100: %d\n", amount / 100);
    amount %= 100;

    printf("50: %d\n", amount / 50);
    amount %= 50;

    printf("20: %d\n", amount / 20);
    amount %= 20;

    printf("10: %d\n", amount / 10);
    amount %= 10;

    printf("5: %d\n", amount / 5);
    amount %= 5;

    printf("2: %d\n", amount / 2);
    amount %= 2;

    printf("1: %d\n", amount);

    return 0;
}