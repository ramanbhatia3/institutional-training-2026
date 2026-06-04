// Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.

#include <stdio.h>

int main() {
    int empId, hours;
    float hourPay, salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter working hours: ");
    scanf("%d", &hours);

    printf("Pay per hour: ");
    scanf("%f", &hourPay);

    salary = hours * hourPay;

    printf("Employee ID = %d\n", empId);
    printf("Salary = %.2f\n", salary);

    return 0;
}