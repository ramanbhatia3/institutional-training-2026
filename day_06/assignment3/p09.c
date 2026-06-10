// Write a C program to find the absolute value of a number using conditional operator.

#include <stdio.h>

int main() {
    int num, abs;

    printf("Enter a number: ");
    scanf("%d", &num);

    abs = (num < 0) ? -num : num;

    printf("Absolute Value: %d", abs);

    return 0;
}