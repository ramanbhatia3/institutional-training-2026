// Write a program in C that takes minutes as input, and display the total number of hours and minutes.

#include <stdio.h>

int main() {
    int minutes, hours, time;

    printf("Input minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    time = minutes % 60;

    printf("%d Hours, %d Minutes\n", hours, time);

    return 0;
}