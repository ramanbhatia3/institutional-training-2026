// 3. C++ Program to calculate Volume of Cube using parameterized constructor.

#include <iostream>
using namespace std;

class Cube
{
    int side;

public:
    Cube(int s)
    {
        side = s;
    }

    void volume()
    {
        cout << "Volume: " << side * side * side;
    }
};

int main()
{
    int s;

    cout << "Enter Side: ";
    cin >> s;

    Cube c(s);

    c.volume();

    return 0;
}