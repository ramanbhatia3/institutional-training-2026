// Write a C program to count number of digits in a number.

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        num = num / 10;
        count++;
    }

    printf("Number of Digits: %d", count);

    return 0;
}