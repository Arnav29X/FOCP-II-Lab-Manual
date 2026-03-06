#include <iostream>
using namespace std;

class ElectricityBill {
    private:
        string consumerName;
        int units;
        float billAmount;

    public:
        // # CONSTRUCTORS:
        ElectricityBill(){
            consumerName = "Not Assigned";
            units = 0;
            billAmount = 0;
        }

        ElectricityBill(string a, int b, float c){
            consumerName = a;
            units = b;
            billAmount = c;
        }

        // # MEMBER FUNCTIONS:
        void calculateBill() {
            cout << "Enter units: ";
            cin >> units;
            if (units > 0 && units <= 100) {
                billAmount = 5 * units;
            }
            else if (units > 100 && units <= 200) {
                billAmount = (100 * 5) + ((units - 100) * 7);
            }
            else if (units > 200) {
                billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
            }
        }

        void displayBill() {
            cout << "CONSUMER NAME: " << consumerName << endl; 
            cout << "UNITS CONSUMED: " << units << endl;
            cout << "TOTAL BILL: " << billAmount << endl;
        }
};

int main() {
    ElectricityBill b1, b2("Glenn Phillips", 95, 475);

    cout << "---- BILL 1 ----\n";
    b1.calculateBill();
    b1.displayBill();

    cout << "\n\n---- BILL 2 ----\n";
    b2.displayBill();

    return 0;
}
