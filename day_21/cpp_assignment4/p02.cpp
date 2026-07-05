// 2. Write a program with a mother class animal. Inside it define a name and an age variables, and set_value () function. Then create two sub class Zebra and Dolphin which write a message telling the age and name of animal, also giving some extra information for both sub class (e.g. place of origin).place of origin of zebra is Earth and place of origin of dolphin is water.

#include<iostream>
using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    void setValue(string n, int a)
    {
        name = n;
        age = a;
    }
};

class Zebra : public Animal
{
public:
    void display()
    {
        cout << "Zebra Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Place of Origin: Earth" << endl;
        cout << endl;
    }
};

class Dolphin : public Animal
{
public:
    void display()
    {
        cout << "Dolphin Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Place of Origin: Water" << endl;
    }
};

int main()
{
    Zebra z;
    Dolphin d;

    z.setValue("Zebra", 8);
    d.setValue("Dolphin", 12);

    z.display();
    d.display();

    return 0;
}