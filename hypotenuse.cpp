// TO CALCULATE HYPOTENUSE

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double hyp, base, perp;
    cout << "Enter Base & Perpendicular: ";
    cin >> base >> perp;

    hyp = sqrt((base*base) + (perp*perp));
    cout << "Hypotenuse: " << hyp;

    return 0;
}
