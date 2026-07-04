// 6. Create a class “Mobile” with attributes: brand, price, color, width, height. Use constructor to set default values of these attributes. Write function to display details of all attributes

#include <iostream>
using namespace std;

class Mobile
{
    string brand, color;
    int price, width, height;

public:
    Mobile()
    {
        brand = "Samsung";
        color = "Black";
        price = 25000;
        width = 75;
        height = 160;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

int main()
{
    Mobile m;

    m.display();

    return 0;
}