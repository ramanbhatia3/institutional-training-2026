// 8. C++ program to create a class for Employee to get and display following Employee information using constructor:

// Empcode,Emp name, Basicsalary

#include <iostream>
using namespace std;

class Employee
{
    int empCode;
    string empName;
    float basicSalary;

public:
    Employee(int code, string name, float salary)
    {
        empCode = code;
        empName = name;
        basicSalary = salary;
    }

    void display()
    {
        cout << "Employee Code: " << empCode << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};

int main()
{
    int code;
    string name;
    float salary;

    cout << "Enter Employee Code: ";
    cin >> code;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> salary;

    Employee e(code, name, salary);

    e.display();

    return 0;
}