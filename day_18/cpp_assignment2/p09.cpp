// 9. Do program 8 for 5 number of Employees.( Using Array of Object )

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

    void display()
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

        cout << "\nEmployee Code: " << empcode;
        cout << "\nNet Salary: " << net << endl;
    }
};

int main()
{
    Employee e[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].getData();
    }

    cout << "\nEmployee Details\n";

    for (int i = 0; i < 5; i++)
    {
        e[i].display();
    }

    return 0;
}