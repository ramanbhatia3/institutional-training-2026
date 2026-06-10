// Write a C program to check whether a number is even or odd using conditional operator.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even") : printf("Odd");

    return 0;
}