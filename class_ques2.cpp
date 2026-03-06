#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float width;
        float calculateArea();
        float calculatePerimeter();
    
    public:
        void inputDimensions();
        void displayResult();
        Rectangle();
        Rectangle(float);
        Rectangle(float, float);
};

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(float x) {
    length = x;
    width = x;
}

Rectangle::Rectangle(float l, float w){
    length = l;
    width = w;
}

void Rectangle::inputDimensions() {
    cout << "Enter Length & Width: ";
    cin >> length >> width; 
}

float Rectangle::calculateArea() {
    return (length*width);
}

float Rectangle::calculatePerimeter() {
    return (2*(length+width));
}

void Rectangle::displayResult() {
    cout << "\nAREA: " << calculateArea();
    cout << "\nPERIMETER: " << calculatePerimeter();
}

int main(){
    Rectangle r1, r2(5.5), r3(7.7, 6.6);
    r1.displayResult();
    cout << '\n';
    r2.displayResult();
    cout << '\n';
    r3.displayResult();
    cout << '\n';
    return 0;
}
