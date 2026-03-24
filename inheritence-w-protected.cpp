#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    float balance;

public:
    void setAccount(int accNo, float bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
    float IR;

    public:
        void setAcc(int accNo, float bal, float rate) {
            setAccount(accNo, bal);
            IR = rate;
        }

        void calculateInterest() {
            float interest = (balance * IR) / 100;
            cout << "Interest: " << interest << endl;
        }
};

int main() {
    SavingsAccount s;

    s.setAcc(11212, 10000, 7);

    s.displayAccount();
    s.calculateInterest();

    return 0;
}
