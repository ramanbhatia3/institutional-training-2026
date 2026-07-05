// 10. We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.

#include <iostream>
using namespace std;

class Marks
{
protected:
    static int roll;
    int rollNo;
    string name;

public:
    Marks()
    {
        roll++;
        rollNo = roll;
    }

    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;
    }
};

int Marks::roll = 0;

class Physics : public Marks
{
protected:
    int phy;

public:
    void getPhysics()
    {
        cout << "Enter Physics Marks: ";
        cin >> phy;
    }
};

class Chemistry : public Physics
{
protected:
    int chem;

public:
    void getChemistry()
    {
        cout << "Enter Chemistry Marks: ";
        cin >> chem;
    }
};

class Mathematics : public Chemistry
{
    int math;

public:
    void getMath()
    {
        cout << "Enter Mathematics Marks: ";
        cin >> math;
    }

    int total()
    {
        return phy + chem + math;
    }

    float average()
    {
        return total() / 3.0;
    }

    void display()
    {
        cout << "\nRoll Number : " << rollNo << endl;
        cout << "Name : " << name << endl;
        cout << "Physics : " << phy << endl;
        cout << "Chemistry : " << chem << endl;
        cout << "Mathematics : " << math << endl;
        cout << "Total Marks : " << total() << endl;
        cout << "Average : " << average() << endl;
    }
};

int main()
{
    int n;
    float classAverage = 0;

    cout << "Enter Number of Students: ";
    cin >> n;

    Mathematics s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        s[i].getData();
        s[i].getPhysics();
        s[i].getChemistry();
        s[i].getMath();

        classAverage += s[i].average();
    }

    cout << "\n\n----- Student Details -----\n";

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    cout << "\nAverage Marks of Class = " << classAverage / n << endl;

    return 0;
}