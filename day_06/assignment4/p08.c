// Write a C program to check whether triangle is equilateral, scalene or isosceles. (Input all sides of the triangle)

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
        printf("Equilateral Triangle");

    else if(a == b || b == c || a == c)
        printf("Isosceles Triangle");

    else
        printf("Scalene Triangle");

    return 0;
}