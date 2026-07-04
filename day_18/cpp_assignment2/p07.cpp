// 7. Write a C++ program to create a class for student to get and print details of a student. Following are the detailsbof a student:

// Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark

// Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student

#include <iostream>
using namespace std;

class Student
{
    int id;
    string name, branch;
    int m1, m2, m3, m4, m5;
    float per;

public:
    void getData()
    {
        cout << "Enter Student ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter 5 Subject Marks: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void result()
    {
        per = (m1 + m2 + m3 + m4 + m5) / 5.0;

        cout << "Percentage: " << per << endl;

        if (per >= 75)
            cout << "Class: Distinction";
        else if (per >= 60)
            cout << "Class: First";
        else if (per >= 50)
            cout << "Class: Second";
        else
            cout << "Class: Pass";
    }
};

int main()
{
    Student s;

    s.getData();
    s.result();

    return 0;
}