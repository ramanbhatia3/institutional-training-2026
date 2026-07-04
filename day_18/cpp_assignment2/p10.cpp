// 10. Write a program to read time in hh:mm:ss and display answer I n only seconds. For Example if user enters 2:15:30 then it should display 8130 seconds.

// Input:
// Enter Hours: 2
// Enter minutes: 15
// Seconds: 30

// Output: 8130 seconds

#include <iostream>
using namespace std;

class Time
{
    int hh, mm, ss;

public:
    void getTime()
    {
        cout << "Enter Hours: ";
        cin >> hh;

        cout << "Enter Minutes: ";
        cin >> mm;

        cout << "Enter Seconds: ";
        cin >> ss;
    }

    void convert()
    {
        int total = (hh * 3600) + (mm * 60) + ss;

        cout << "Total Seconds: " << total;
    }
};

int main()
{
    Time t;

    t.getTime();
    t.convert();

    return 0;
}