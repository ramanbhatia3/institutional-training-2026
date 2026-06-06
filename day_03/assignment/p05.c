// Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

#include <stdio.h>

int main() {
    float w1, w2;
    int n1, n2;

    printf("Weight of Item 1: ");
    scanf("%f", &w1);

    printf("Quantity of Item 1: ");
    scanf("%d", &n1);

    printf("Weight of Item 2: ");
    scanf("%f", &w2);

    printf("Quantity of Item2 : ");
    scanf("%d", &n2);

    float avg = ((w1 * n1) + (w2 * n2)) / (n1 + n2);

    printf("Average Value = %.4f", avg);

    return 0;
}