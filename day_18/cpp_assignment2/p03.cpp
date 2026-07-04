// 3. WAP to display addition, subtraction, multiplication and division of two integers on screen.

// Declare Class Calculation
// Declare data member num1 and num2 in Private section
// Write member function for initialize num1 and num2
// Write member function for each operation.

#include <iostream>
using namespace std;

class Calculation
{
private:
    int num1, num2;

public:
    void initialize(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void addition()
    {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtraction()
    {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiplication()
    {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void division()
    {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division not possible";
    }
};

int main()
{
    Calculation c;

    int a, b;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    c.initialize(a, b);

    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    return 0;
}