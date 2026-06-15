// Write a C program to check whether a number is palindrome or not.

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

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}