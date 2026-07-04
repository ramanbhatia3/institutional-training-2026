// 7. Create a class “Mobile” with attributes: brand, price, color. Enter detail of five different mobile. (Using Array of object).

// Display total number of mobile having price greater than 5000.

// Display Brand, Price and color for all mobiles for price range 1000 to 10000

#include <iostream>
using namespace std;

class Mobile
{
public:
    string brand, color;
    int price;

    Mobile()
    {
        brand = "";
        color = "";
        price = 0;
    }

    void getData()
    {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Color: ";
        cin >> color;
    }

    void display()
    {
        cout << brand << " " << price << " " << color << endl;
    }
};

int main()
{
    Mobile m[5];

    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nMobile " << i + 1 << endl;
        m[i].getData();
    }

    for (int i = 0; i < 5; i++)
    {
        if (m[i].price > 5000)
            count++;
    }

    cout << "\nTotal Mobiles Price > 5000: " << count << endl;

    cout << "\nMobiles Between 1000 and 10000:" << endl;
    
    count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (m[i].price >= 1000 && m[i].price <= 10000){
            m[i].display();
            count++;
        }  
    }
    

    if (count == 0){
        cout << 0;
    }


    return 0;
}