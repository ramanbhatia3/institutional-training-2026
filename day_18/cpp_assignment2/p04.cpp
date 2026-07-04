// 4. WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14 (Using Class and Object)

#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void getRadius()
    {
        cout << "Enter Radius: ";
        cin >> radius;
    }

    void area()
    {
        cout << "Area: " << 3.14 * radius * radius;
    }
};

int main()
{
    Circle c;

    c.getRadius();
    c.area();

    return 0;
}