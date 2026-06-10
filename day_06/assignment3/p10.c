// Write a C program to demonstrate the use of logical operators by checking whether a given number lies within a specified range (e.g., between 10 and 20).

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num >= 10 && num <= 20) ? printf("Number lies between 10 and 20") : printf("Number does not lie between 10 and 20");

    return 0;
}