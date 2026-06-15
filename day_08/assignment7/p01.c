// Write a C program to enter a number and print its reverse.

#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    int original = num;

    while (num != 0) {
        reverse *= 10;
        reverse += num % 10; 
        num /= 10;
    }

    printf("Reverse of %d is %d", original, reverse);

    return 0;
}