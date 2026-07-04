// 5. Write a C++ program to demonstrate ATM money withdrawal and deposit process by taking following private data members:

// Accountno, balance;

// Account no and balance data member initialize using parameterized constructor

// Write three function 1. Deposit 2. Withdraw 3. Balance

// Write menu driven choice
// 1. Deposit
// 2. Withdraw
// 3. Balance
// 4. Exit
// Program stop execution when user enter choice

#include <iostream>
using namespace std;

class ATM
{
private:
    int accountNo;
    float balance;

public:
    ATM(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Updated Balance: " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
            cout << "Not Enough Balance" << endl;
        else
        {
            balance = balance - amount;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    void showBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    int acc, choice;
    float bal, amount;

    cout << "Enter Account Number: ";
    cin >> acc;

    cout << "Enter Initial Balance: ";
    cin >> bal;

    ATM a(acc, bal);

    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Balance";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            a.deposit(amount);
            break;

        case 2:
            cout << "Enter Withdraw Amount: ";
            cin >> amount;
            a.withdraw(amount);
            break;

        case 3:
            a.showBalance();
            break;

        case 4:
            cout << "Thank You";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}