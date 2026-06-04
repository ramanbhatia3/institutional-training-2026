// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("H:M:S - %d:%d:%d\n", hours, minutes, remainingSeconds);

    return 0;
}