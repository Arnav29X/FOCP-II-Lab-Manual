#include <iostream>
using namespace std;

void swap(int &a, int &b);
void swap(float &c, float &d);

int main(){
    int x = 18, y = 45;
    swap(x, y);

    float p = 18.1, q = 45.4;
    swap(p, q);

    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << "\nb = " << b << endl;
}

void swap(float &c, float &d) {
    float temp = c;
    c = d;
    d = temp;
    cout << "c = " << c << "\nd = " << d << endl;
}
