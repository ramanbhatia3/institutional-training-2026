// 1. Write a program to print the area of a rectangle by creating a class named 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using Parameterized constructor.

#include <iostream>
using namespace std;

class Area
{
    int length, breadth;

public:
    Area(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void getArea()
    {
        cout << "Area: " << length * breadth;
    }
};

int main()
{
    int l, b;

    cout << "Enter Length: ";
    cin >> l;

    cout << "Enter Breadth: ";
    cin >> b;

    Area a(l, b);

    a.getArea();

    return 0;
}