// Write a C program to find maximum between two numbers using conditional operator.

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("Maximum: %d", max);

    return 0;
}