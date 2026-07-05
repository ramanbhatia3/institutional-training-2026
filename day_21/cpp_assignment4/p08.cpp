// 8. Create a class named Shape with a function that prints "This is a shape". Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape". Create two other classes named Rectangle and Triangle having the same function which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class named Square having the same function which prints "Square is a rectangle".

// Now, try calling the function by the object of each of these classes.

#include <iostream>
using namespace std;

class Shape
{
public:
    void print()
    {
        cout << "This is a shape." << endl;
    }
};

class Polygon : public Shape
{
public:
    void printPolygon()
    {
        cout << "Polygon is a shape." << endl;
    }
};

class Rectangle : public Polygon
{
public:
    void printRectangle()
    {
        cout << "Rectangle is a polygon." << endl;
    }
};

class Triangle : public Polygon
{
public:
    void printTriangle()
    {
        cout << "Triangle is a polygon." << endl;
    }
};

class Square : public Rectangle
{
public:
    void printSquare()
    {
        cout << "Square is a rectangle." << endl;
    }
};

int main()
{
    Shape s;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square sq;

    s.print();

    p.print();
    p.printPolygon();

    r.print();
    r.printPolygon();
    r.printRectangle();

    t.print();
    t.printPolygon();
    t.printTriangle();

    sq.print();
    sq.printPolygon();
    sq.printRectangle();
    sq.printSquare();

    return 0;
}