#include <iostream>
using namespace std;

class SmartLight {
    private:
    public:
        // # DATA MEMBERS:
        string brand = "N/A";
        int brightness = 0;
        bool isOn;

        // # METHODS:
        void turnOn() {isOn = true;}
        void turnOff() {isOn = false;}
        void increaseBrightness(int value) {brightness += value;}
        void decreaseBrightness(int value) {brightness -= value;}
        void displayStatus() {
            cout << "==== INFO ====\n";
            cout << "Brand: " << brand << "\nBrightness: " << brightness << "\nisOn: " << isOn << endl;
        }

        // # CONSTRUCTORS:
        SmartLight(int a, bool b){
            brightness = a;
            isOn = b;
        }

        SmartLight(string a, int b, bool c){
            brand = a;
            brightness = b;
            isOn = c;
        }

        // # DESTRUCTOR:
        ~SmartLight() {cout << "\nObject Destroyed" << endl;}
};

int main(){
    SmartLight s1(50, true), s2("Phillips", 75, false);
    cout << "==== SMARTLIGHT 1 ====\n";
    s1.displayStatus();
    cout << endl;
    s1.turnOff();
    s1.displayStatus();
    cout << endl;
    s1.turnOn();
    s1.displayStatus();
    cout << endl;
    s1.increaseBrightness(30);
    s1.displayStatus();
    cout << endl;
    cout << "==== SMARTLIGHT 2 ====\n";
    s2.displayStatus();
    return 0;
}
