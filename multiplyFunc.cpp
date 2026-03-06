#include <iostream>
using namespace std;

int multiply(int, int);
int multiply(int, int, int);
double multiply(double, double);

int main(){
    int a,b,c,d,e;
    double f,g;

    cout << "Enter integer (a, b): ";
    cin >> a >> b;
    cout << "Result: " << multiply(a,b);
    cout << endl;

    cout << "Enter integer (a, b, c): ";
    cin >> c >> d >> e;
    cout << "Result: " << multiply(c,d,e);
    cout << endl;

    cout << "Enter double (a, b): ";
    cin >> f >> g;
    cout << "Result: " << multiply(f,g);
    cout << endl;

    return 0;
}

int multiply(int a, int b){
    return a*b;
}

int multiply(int a, int b, int c){
    return a*b*c;
}

double multiply(double a, double b){
    return a*b;
}
