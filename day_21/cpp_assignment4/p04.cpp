// 4. Write a program as per following details

// Create one base class MEDICINE with following data members

// Category- (i.e. stimulants, inhalants, cannabinoids)
// Date_of_manufacture, Company name

// Create one sub class TABLET derived from MEDICINE with following data members
// Tablet name, Price

// Create one sub class PainReliever derived from TABLET with data member
// Dosage_units: i.e( 1 or 2 or 3)
// Side_effects : i.e (Nausea, Drowsiness, Dizziness.) Use_within_days: i.e(10 or
// 20 or 30).

// Use appropriate member function for setting and Getting above details and display details in main function.

#include <iostream>
using namespace std;

class Medicine
{
protected:
    string category;
    string manufactureDate;
    string company;

public:
    void setMedicine()
    {
        cout << "Enter Category: ";
        cin >> category;

        cout << "Enter Manufacture Date: ";
        cin >> manufactureDate;

        cout << "Enter Company Name: ";
        cin >> company;
    }
};

class Tablet : public Medicine
{
protected:
    string tabletName;
    float price;

public:
    void setTablet()
    {
        cout << "Enter Tablet Name: ";
        cin >> tabletName;

        cout << "Enter Price: ";
        cin >> price;
    }
};

class PainReliever : public Tablet
{
    int dosageUnits;
    string sideEffects;
    int useWithinDays;

public:
    void setPainReliever()
    {
        cout << "Enter Dosage Units: ";
        cin >> dosageUnits;

        cout << "Enter Side Effects: ";
        cin >> sideEffects;

        cout << "Enter Use Within Days: ";
        cin >> useWithinDays;
    }

    void display()
    {
        cout << "\n----- Medicine Details -----\n";
        cout << "Category : " << category << endl;
        cout << "Manufacture Date : " << manufactureDate << endl;
        cout << "Company : " << company << endl;
        cout << "Tablet Name : " << tabletName << endl;
        cout << "Price : " << price << endl;
        cout << "Dosage Units : " << dosageUnits << endl;
        cout << "Side Effects : " << sideEffects << endl;
        cout << "Use Within Days : " << useWithinDays << endl;
    }
};

int main()
{
    PainReliever p;

    p.setMedicine();
    p.setTablet();
    p.setPainReliever();

    p.display();

    return 0;
}