// 1. Write a program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and rectangle, that calculate the area of the shape. In the main, define two objects a triangle and a rectangle and then call the area () function.

#include<iostream>
using namespace std;

class Shape
{
protected:
    int width, height;

public:
    Shape(int w, int h)
    {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h) : Shape(w, h)
    {
    }

    void area()
    {
        cout << "Area of Rectangle: " << width * height << endl;
    }
};

class Triangle : public Shape
{
public:
    Triangle(int w, int h) : Shape(w, h)
    {
    }

    void area()
    {
        cout << "Area of Triangle: " << (width * height) / 2 << endl;
    }
};

int main()
{
    int w, h;

    cout << "Enter Width and Height: ";
    cin >> w >> h;

    Rectangle r(w, h);
    Triangle t(w, h);

    r.area();
    t.area();

    return 0;
}