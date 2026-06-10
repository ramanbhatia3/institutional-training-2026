// Write a C program to swap two numbers using bitwise operator.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After Swapping:\n");
    printf("a: %d\nb: %d", a, b);

    return 0;
}