// 4. C++ Program To calculate area of Box using parameterized Constructor.

#include <iostream>
using namespace std;

class Box
{
    int length, breadth, height;

public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    void area()
    {
        int surfaceArea = 2 * (length * breadth + breadth * height + height * length);

        cout << "Surface Area: " << surfaceArea;
    }
};

int main()
{
    int l, b, h;

    cout << "Enter Length, Breadth and Height: ";
    cin >> l >> b >> h;

    Box box(l, b, h);

    box.area();

    return 0;
}