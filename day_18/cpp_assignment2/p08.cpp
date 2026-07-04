// 8. C++ program to create a class for Employee to get and display following Employee information:

// Empcode, Basicsalary

// Write Member function to calculate Net salary
// DA=174% of Basic salary
// HRA=10% of Basic salary
// TA=500
// Income tax=5 % of basic salary , if baic salary > 50000
// Income tax=0 , if Basic salary <= 50000
// Netsalary=(basic salary + da + hra + ta) – income tax

#include <iostream>
using namespace std;

class Employee
{
    int empcode;
    float basicSalary;

public:
    void getData()
    {
        cout << "Enter Employee Code: ";
        cin >> empcode;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void netSalary()
    {
        float da = basicSalary * 1.74;
        float hra = basicSalary * 0.10;
        float ta = 500;

        float incomeTax;

        if (basicSalary > 50000)
            incomeTax = basicSalary * 0.05;
        else
            incomeTax = 0;

        float net = basicSalary + da + hra + ta - incomeTax;

        cout << "Net Salary: " << net;
    }
};

int main()
{
    Employee e;

    e.getData();
    e.netSalary();

    return 0;
}