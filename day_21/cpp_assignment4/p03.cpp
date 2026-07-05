// 3. Write a program as per following details:

// Create one base class Teacher

// Data members Name, Department, College name, Email id.

// Create sub classes for Math Teacher, English Teacher, and Science Teacher 
// Data member Qualification, Expertise and salary.

// Display following details for each teacher
// Name:
// Department:
// College name:
// Email id:
// Qualification:
// Expertise:
// Salary:

#include<iostream>
using namespace std;

class Teacher
{
protected:
    string name;
    string department;
    string college;
    string email;

public:
    void setTeacher(string n, string d, string c, string e)
    {
        name = n;
        department = d;
        college = c;
        email = e;
    }
};

class MathTeacher : public Teacher
{
    string qualification;
    string expertise;
    float salary;

public:
    void setData(string q, string ex, float s)
    {
        qualification = q;
        expertise = ex;
        salary = s;
    }

    void display()
    {
        cout << "------ Math Teacher ------" << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "College : " << college << endl;
        cout << "Email : " << email << endl;
        cout << "Qualification : " << qualification << endl;
        cout << "Expertise : " << expertise << endl;
        cout << "Salary : " << salary << endl;
    }
};

class EnglishTeacher : public Teacher
{
    string qualification;
    string expertise;
    float salary;

public:
    void setData(string q, string ex, float s)
    {
        qualification = q;
        expertise = ex;
        salary = s;
    }

    void display()
    {
        cout << "\n------ English Teacher ------" << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "College : " << college << endl;
        cout << "Email : " << email << endl;
        cout << "Qualification : " << qualification << endl;
        cout << "Expertise : " << expertise << endl;
        cout << "Salary : " << salary << endl;
    }
};

class ScienceTeacher : public Teacher
{
    string qualification;
    string expertise;
    float salary;

public:
    void setData(string q, string ex, float s)
    {
        qualification = q;
        expertise = ex;
        salary = s;
    }

    void display()
    {
        cout << "\n------ Science Teacher ------" << endl;
        cout << "Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "College : " << college << endl;
        cout << "Email : " << email << endl;
        cout << "Qualification : " << qualification << endl;
        cout << "Expertise : " << expertise << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    MathTeacher m;
    EnglishTeacher e;
    ScienceTeacher s;

    m.setTeacher("Aman", "Mathematics", "RBU", "aman@gmail.com");
    m.setData("M.Sc", "Algebra", 50000);

    e.setTeacher("Priya", "English", "RBU", "priya@gmail.com");
    e.setData("M.A", "Grammar", 45000);

    s.setTeacher("Rohit", "Science", "RBU", "rohit@gmail.com");
    s.setData("M.Sc", "Physics", 55000);

    m.display();
    e.display();
    s.display();

    return 0;
}