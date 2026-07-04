// 6. Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members:

// Accountno, balance;

// The withdrawal function should return remaining balance to the user and should deduct withdrawal amount from balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)

// The Deposit function should return updated balance to user.

#include <iostream>
using namespace std;

class ATM
{
private:
    int accountNo;
    float balance;

public:
    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Not enough balance" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    void deposit(float amount)
    {
        balance = balance + amount;

        cout << "Updated Balance: " << balance  << endl;
    }
};

int main()
{
    ATM a;

    float w, d;

    a.getData();

    cout << "Enter Withdrawal Amount: ";
    cin >> w;

    a.withdraw(w);

    cout << "Enter Deposit Amount: ";
    cin >> d;

    a.deposit(d);

    return 0;
}