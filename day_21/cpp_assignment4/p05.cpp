// 5. Write a program as per following details

// Create one base class HOTEL with following data members
// Hotel_name,
// Hotel_type i.e(Three star,five star)
// City
// Hotel_rate i.e(2000,3000,5000)

// Create one base class FLIGHT with following data members
// Flight_no
// Source city
// Destination city
// Seat no

// Create one sub class PASSENGER derived from HOTEL and FLIGHT with following
// data members Name, Age, city

// Write appropriate member functions in each class and display all information in main

#include <iostream>
using namespace std;

class HOTEL
{
protected:
    string hotelName;
    string hotelType;
    string city;
    int hotelRate;

public:
    void setHotel()
    {
        cout << "Enter Hotel Name: ";
        cin >> hotelName;

        cout << "Enter Hotel Type: ";
        cin >> hotelType;

        cout << "Enter Hotel City: ";
        cin >> city;

        cout << "Enter Hotel Rate: ";
        cin >> hotelRate;
    }
};

class FLIGHT
{
protected:
    int flightNo;
    string source;
    string destination;
    int seatNo;

public:
    void setFlight()
    {
        cout << "Enter Flight Number: ";
        cin >> flightNo;

        cout << "Enter Source City: ";
        cin >> source;

        cout << "Enter Destination City: ";
        cin >> destination;

        cout << "Enter Seat Number: ";
        cin >> seatNo;
    }
};

class PASSENGER : public HOTEL, public FLIGHT
{
    string name;
    int age;
    string passengerCity;

public:
    void setPassenger()
    {
        cout << "Enter Passenger Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter City: ";
        cin >> passengerCity;
    }

    void display()
    {
        cout << "\n----- Passenger Details -----\n";

        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "City : " << passengerCity << endl;

        cout << "\nHotel Name : " << hotelName << endl;
        cout << "Hotel Type : " << hotelType << endl;
        cout << "Hotel City : " << city << endl;
        cout << "Hotel Rate : " << hotelRate << endl;

        cout << "\nFlight Number : " << flightNo << endl;
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
        cout << "Seat Number : " << seatNo << endl;
    }
};

int main()
{
    PASSENGER p;

    p.setHotel();
    p.setFlight();
    p.setPassenger();

    p.display();

    return 0;
}