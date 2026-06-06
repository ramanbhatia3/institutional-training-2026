// C program to calculate total average and percentage of five subjects

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    int total = m1 + m2 + m3 + m4 + m5;
    float average = total / 5.0;
    float percentage = average;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}