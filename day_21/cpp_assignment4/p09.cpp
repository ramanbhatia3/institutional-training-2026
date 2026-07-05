// 9. All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it.

// Write a program to implement bank functionality in the above scenario. Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). Assume and implement required member variables and functions in each class.

#include <iostream>
using namespace std;

class Customer
{
protected:
    string name;

public:
    void setCustomer()
    {
        cout << "Enter Customer Name: ";
        cin >> name;
    }
};

class Account : public Customer
{
protected:
    int accountNo;
    float balance;

public:
    void setAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Balance: ";
        cin >> balance;
    }
};

class RBI : public Account
{
protected:
    float interestRate;
    float minimumBalance;
    float maximumWithdrawal;

public:
    RBI()
    {
        interestRate = 4.0;
        minimumBalance = 1000;
        maximumWithdrawal = 50000;
    }
};

class SBI : public RBI
{
public:
    SBI()
    {
        interestRate = 5.5;
    }

    void display()
    {
        cout << "\n----- SBI -----\n";
        cout << "Customer Name : " << name << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Balance : " << balance << endl;
        cout << "Interest Rate : " << interestRate << "%" << endl;
        cout << "Minimum Balance : " << minimumBalance << endl;
        cout << "Maximum Withdrawal : " << maximumWithdrawal << endl;
    }
};

class ICICI : public RBI
{
public:
    ICICI()
    {
        interestRate = 6.0;
    }

    void display()
    {
        cout << "\n----- ICICI -----\n";
        cout << "Customer Name : " << name << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Balance : " << balance << endl;
        cout << "Interest Rate : " << interestRate << "%" << endl;
        cout << "Minimum Balance : " << minimumBalance << endl;
        cout << "Maximum Withdrawal : " << maximumWithdrawal << endl;
    }
};

class PNB : public RBI
{
public:
    PNB()
    {
        interestRate = 4.5;
    }

    void display()
    {
        cout << "\n----- PNB -----\n";
        cout << "Customer Name : " << name << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Balance : " << balance << endl;
        cout << "Interest Rate : " << interestRate << "%" << endl;
        cout << "Minimum Balance : " << minimumBalance << endl;
        cout << "Maximum Withdrawal : " << maximumWithdrawal << endl;
    }
};

int main()
{
    SBI s;

    cout << "Enter SBI Customer Details\n";

    s.setCustomer();
    s.setAccount();

    s.display();

    return 0;
}