// Write a C program to enter a four digit number and print all digit.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a four digit number: ");
    scanf("%d", &num);

    printf("Digit 1: %d\n", num / 1000);
    printf("Digit 2: %d\n", (num / 100) % 10);
    printf("Digit 3: %d\n", (num / 10) % 10);
    printf("Digit 4: %d\n", num % 10);

    return 0;
}