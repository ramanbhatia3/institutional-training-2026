// Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest.

#include <stdio.h>

int main() {
    float p, r, t, si;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f", si);

    return 0;
}