// 1. WAP to print your name, age and city and pin code on screen (Using Class).

#include <iostream>
using namespace std;

class Student
{
public:
    void display()
    {
        cout << "Name : Ramandeep Bhatia" << endl;
        cout << "Age : 21" << endl;
        cout << "City : Hoshiarpur" << endl;
        cout << "Pin Code : XXXXXX" << endl;
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}