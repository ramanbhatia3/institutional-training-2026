// 9. A class has an integer data member 'i' and a function named 'printNum' to print the value of 'i'. Its subclass also has an integer data member 'j' and a function named 'printNum' to print the value of 'j'. Make an object of the subclass and use it to assign a value to 'i' and to 'j'. Now call the function 'printNum' by this object.

#include <iostream>
using namespace std;

class Parent
{
public:
    int i;

    void printNum()
    {
        cout << "Value of i: " << i << endl;
    }
};

class Child : public Parent
{
public:
    int j;

    void printJ()
    {
        cout << "Value of j: " << j << endl;
    }
};

int main()
{
    Child c;

    c.i = 10;
    c.j = 20;

    c.printNum();
    c.printJ();

    return 0;
}