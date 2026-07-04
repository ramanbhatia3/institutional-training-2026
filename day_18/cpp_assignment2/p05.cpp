// 5. Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:

// Studid, name ,sem, branch

#include <iostream>
using namespace std;

class Student
{
    int studid, sem;
    string name, branch;

public:
    void getData()
    {
        cout << "Enter Student ID: ";
        cin >> studid;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Semester: ";
        cin >> sem;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << endl;
        cout << "Student ID : " << studid << endl;
        cout << "Name : " << name << endl;
        cout << "Semester : " << sem << endl;
        cout << "Branch : " << branch << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.display();

    return 0;
}