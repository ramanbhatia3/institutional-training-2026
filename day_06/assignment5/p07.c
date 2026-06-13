// Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    switch(d > 0 ? 1 : d == 0 ? 0 : -1) {

        case 1:
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are %.2f and %.2f", root1, root2);
            break;

        case 0:
            root1 = -b / (2 * a);
            printf("Both roots are %.2f", root1);
            break;

        case -1:
            printf("Roots are imaginary");
            break;
    }

    return 0;
}