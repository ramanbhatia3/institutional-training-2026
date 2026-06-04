// Write a C program to find the third angle of a triangle if two angles are given.

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Input two angles: ");
    scanf("%d %d", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("Third angle of triangle = %d\n", angle3);

    return 0;
}