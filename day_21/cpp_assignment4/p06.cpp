// 6. Write a program as per following details

// Create one base class PERSON with following data members
// Name, College name

// Create one sub class STUDENT derived from PERSON with following data members
// Student_id , Marks of five subject, percentage Member function: showResult( )-
// Calculate total,percentage and finding class(Dist,First,second,pass)

// Create one sub class EMPLOYEE derived from PERSON with following data members
// Emp_id, qualification , basic salary
// Member function to calculate Net salary and print Net salary
// DA=189% of Basic salary
// HRA=10% of Basic salary
// TA=500
// Income tax=5 % of basic salary, if basic salary >50000
// Income tax=0, if Basic salary <=50000
// Netsalary=(basicsalary+da+hra+ta) - income tax

// Write appropriate setter function in each class and display detail of student and employee in main.

#include <iostream>
using namespace std;

class PERSON
{
protected:
    string name;
    string college;

public:
    void setPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter College Name: ";
        cin >> college;
    }
};

class STUDENT : public PERSON
{
    int id;
    int m1, m2, m3, m4, m5;

public:
    void setStudent()
    {
        cout << "Enter Student ID: ";
        cin >> id;

        cout << "Enter Marks of 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void showResult()
    {
        int total = m1 + m2 + m3 + m4 + m5;
        float per = total / 5.0;

        cout << "\n----- Student Details -----\n";
        cout << "Name : " << name << endl;
        cout << "College : " << college << endl;
        cout << "Student ID : " << id << endl;
        cout << "Total = " << total << endl;
        cout << "Percentage = " << per << endl;

        if (per >= 75)
            cout << "Class : Distinction";
        else if (per >= 60)
            cout << "Class : First";
        else if (per >= 50)
            cout << "Class : Second";
        else
            cout << "Class : Pass";

        cout << endl;
    }
};

class EMPLOYEE : public PERSON
{
    int empId;
    string qualification;
    float basicSalary;

public:
    void setEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Qualification: ";
        cin >> qualification;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void netSalary()
    {
        float da = basicSalary * 1.89;
        float hra = basicSalary * 0.10;
        float ta = 500;

        float tax;

        if (basicSalary > 50000)
            tax = basicSalary * 0.05;
        else
            tax = 0;

        float net = basicSalary + da + hra + ta - tax;

        cout << "\n----- Employee Details -----\n";
        cout << "Name : " << name << endl;
        cout << "College : " << college << endl;
        cout << "Employee ID : " << empId << endl;
        cout << "Qualification : " << qualification << endl;
        cout << "Net Salary = " << net << endl;
    }
};

int main()
{
    STUDENT s;

    cout << "\nEnter Student Details\n";

    s.setPerson();
    s.setStudent();

    s.showResult();

    EMPLOYEE e;

    cout << "\nEnter Employee Details\n";

    e.setPerson();
    e.setEmployee();

    e.netSalary();

    return 0;
}