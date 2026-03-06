#include <iostream>
using namespace std;

bool flag = true;

class BankAccount
{
private:
    string accountHolderName;
    string accountNumber;
    double balance = 0;

public:
    void inputDetails();
    void displayDetails();
    void deposit(double amount);
    void withdraw(double amount);
};

void BankAccount::inputDetails()
{
    while (true)
    {
        cout << "===== BANK ACCOUNT OPENING =====\n";

        cout << "Enter Name : ";
        getline(cin >> ws, accountHolderName);

        cout << "Enter Account Number : ";
        getline(cin >> ws, accountNumber);
        if (accountNumber.length() != 12)
        {
            cout << "INVALID ACCOUNT NUMBER!\nIT MUST BE OF 12 NUMBERS.\n";
            flag = false;
            break;
        }

        cout << "Opening Account with how much money? : ";
        cin >> balance;
        if (balance < 0)
        {
            cout << "MONEY DEPOSITED CAN NOT BE IN NEGATIVE!\nTRY AGAIN!";
            flag = false;
            break;
        }
        else
        {
            break;
        }
    }
}

void BankAccount::displayDetails()
{
    cout << "===== BANK ACCOUNT SUMMARY =====\n";
    cout << "NAME: " << accountHolderName << '\n';
    cout << "ACCOUNT NUMBER: " << accountNumber << '\n';
    cout << "BALANCE: " << balance << '\n';
    cout << "================================\n";
}

void BankAccount::deposit(double amount)
{
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if (amount < 0)
    {
        cout << "MONEY DEPOSITED CAN NOT BE IN NEGATIVE!\nTRY AGAIN!";
    }
    else
    {
        balance += amount;
    }
}

void BankAccount::withdraw(double amount)
{
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (amount > balance)
    {
        cout << "NOT ENOUGH BALANCE!";
    }
    if (amount < 0)
    {
        cout << "MONEY WITHDRAWL CAN NOT BE IN NEGATIVE!\nTRY AGAIN!";
    }
    else
    {
        balance -= amount;
    }
}

int main()
{
    BankAccount b1;
    b1.inputDetails();
    cout << '\n';
    if (flag == true)
    {
        b1.displayDetails();
    }
    return 0;
}
