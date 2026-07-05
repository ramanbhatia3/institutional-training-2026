// 8. We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses

// *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).

// *Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)

// Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.

// Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.

#include <iostream>
using namespace std;

class Vehicle
{
protected:
    int mileage;
    int price;

public:
    void setVehicle()
    {
        cout << "Enter Mileage: ";
        cin >> mileage;

        cout << "Enter Price: ";
        cin >> price;
    }
};

class Car : public Vehicle
{
protected:
    int ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;

public:
    void setCar()
    {
        cout << "Enter Ownership Cost: ";
        cin >> ownershipCost;

        cout << "Enter Warranty (Years): ";
        cin >> warranty;

        cout << "Enter Seating Capacity: ";
        cin >> seatingCapacity;

        cout << "Enter Fuel Type: ";
        cin >> fuelType;
    }
};

class Audi : public Car
{
    string modelType;

public:
    void getAudi()
    {
        cout << "\nEnter Audi Details\n";

        setVehicle();
        setCar();

        cout << "Enter Model Type: ";
        cin >> modelType;
    }

    void display()
    {
        cout << "\n----- Audi -----\n";
        cout << "Model Type : " << modelType << endl;
        cout << "Ownership Cost : " << ownershipCost << endl;
        cout << "Warranty : " << warranty << endl;
        cout << "Seating Capacity : " << seatingCapacity << endl;
        cout << "Fuel Type : " << fuelType << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Price : " << price << endl;
    }
};

class Ford : public Car
{
    string modelType;

public:
    void getFord()
    {
        cout << "\nEnter Ford Details\n";

        setVehicle();
        setCar();

        cout << "Enter Model Type: ";
        cin >> modelType;
    }

    void display()
    {
        cout << "\n----- Ford -----\n";
        cout << "Model Type : " << modelType << endl;
        cout << "Ownership Cost : " << ownershipCost << endl;
        cout << "Warranty : " << warranty << endl;
        cout << "Seating Capacity : " << seatingCapacity << endl;
        cout << "Fuel Type : " << fuelType << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Price : " << price << endl;
    }
};

class Bike : public Vehicle
{
protected:
    int cylinders;
    int gears;
    string coolingType;
    string wheelType;
    int tankSize;

public:
    void setBike()
    {
        cout << "Enter Number of Cylinders: ";
        cin >> cylinders;

        cout << "Enter Number of Gears: ";
        cin >> gears;

        cout << "Enter Cooling Type: ";
        cin >> coolingType;

        cout << "Enter Wheel Type: ";
        cin >> wheelType;

        cout << "Enter Fuel Tank Size: ";
        cin >> tankSize;
    }
};

class Bajaj : public Bike
{
    string makeType;

public:
    void getBajaj()
    {
        cout << "\nEnter Bajaj Details\n";

        setVehicle();
        setBike();

        cout << "Enter Make Type: ";
        cin >> makeType;
    }

    void display()
    {
        cout << "\n----- Bajaj -----\n";
        cout << "Make Type : " << makeType << endl;
        cout << "Cylinders : " << cylinders << endl;
        cout << "Gears : " << gears << endl;
        cout << "Cooling Type : " << coolingType << endl;
        cout << "Wheel Type : " << wheelType << endl;
        cout << "Fuel Tank Size : " << tankSize << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Price : " << price << endl;
    }
};

class TVS : public Bike
{
    string makeType;

public:
    void getTVS()
    {
        cout << "\nEnter TVS Details\n";

        setVehicle();
        setBike();

        cout << "Enter Make Type: ";
        cin >> makeType;
    }

    void display()
    {
        cout << "\n----- TVS -----\n";
        cout << "Make Type : " << makeType << endl;
        cout << "Cylinders : " << cylinders << endl;
        cout << "Gears : " << gears << endl;
        cout << "Cooling Type : " << coolingType << endl;
        cout << "Wheel Type : " << wheelType << endl;
        cout << "Fuel Tank Size : " << tankSize << endl;
        cout << "Mileage : " << mileage << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    Audi a;
    Ford f;
    Bajaj b;
    TVS t;

    a.getAudi();
    f.getFord();
    b.getBajaj();
    t.getTVS();

    a.display();
    f.display();
    b.display();
    t.display();

    return 0;
}