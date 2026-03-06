#include <iostream>
using namespace std;

class Candy {
    // VSRIABLES:
    string color;
    int points;

public:
    // METHODS:
    void setCandy(string, int);
    void loosepoint(int);
    void gainpoint(int);
    void displayCandy();

    // CONSTRUCTORS:
    Candy();                // Default constructor
    Candy(string c);        // 1-parameter constructor
    Candy(string c, int p); // 2-parameter constructor
};


// METHODS:
void Candy::setCandy(string c, int p) {
    color = c;
    points = p;
}

void Candy::displayCandy() {
    cout << "COLOR: " << color << "\n";
    cout << "POINTS: " << points;
}

void Candy::loosepoint(int x) {
    points -= x;
}

void Candy::gainpoint(int x) {
    points += x;
}

// CONSTRUCTORS:
Candy::Candy() {
    color = "";
    points = 0;
}

Candy::Candy(string c) {
    color = c;
    points = 0;
}

Candy::Candy(string c, int p) {
    color = c;
    points = p;
}


// MAIN FUNCTION:
int main() {
    Candy c1, c2("RED"), c3("BLUE", 77);

    cout << "==== CANDY 1 ====\n";
    c1.displayCandy();
    cout << "\n\n";

    cout << "==== CANDY 2 ====\n";
    c2.displayCandy();
    cout << "\n\n";

    cout << "==== CANDY 3 ====\n";
    c3.displayCandy();

    c3.gainpoint(50);
    cout << "\n\n";

    c3.displayCandy();
    cout << "\n\n";

    c3.loosepoint(34);

    c3.displayCandy();

    return 0;
}
