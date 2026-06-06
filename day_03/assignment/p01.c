// C program to calculate Compound Interest

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, ci;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

    ci = p * pow((1 + r / 100), t);

    printf("Compound Interest = %.4f", ci);

    return 0;
}