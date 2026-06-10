// Write a C program to find all roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;

    printf("Input a: ");
    scanf("%f", &a);

    printf("Input b: ");
    scanf("%f", &b);

    printf("Input c: ");
    scanf("%f", &c);

    d = b*b - 4*a*c;

    if(d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);

        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if(d == 0) {
        root1 = -b / (2*a);
        printf("Equal Roots = %.2f", root1);
    }
    else {
        printf("Imaginary Roots");
    }

    return 0;
}