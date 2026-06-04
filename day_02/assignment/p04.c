// Write a C program that calculates the volume of a sphere.

#include <stdio.h>

int main() {
    float radius, volume;
    const float PI = 3.14;

    printf("Input radius of sphere: ");
    scanf("%f", &radius);

    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("Volume of sphere = %.2f\n", volume);

    return 0;
}