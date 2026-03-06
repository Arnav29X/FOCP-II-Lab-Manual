#include <iostream>
using namespace std;

class student {
    private:
        int rn;
        string name;
        int m1;
        int m2;
        int m3;

    public:
        void inputDetails();
        int calculateTotal();
        void displayDetails();
};

void student::inputDetails(){
    cout << "Enter rno, name, m1, m2, m3: ";
    cin>>rn>>name>>m1>>m2>>m3;
}

int student::calculateTotal() {
    return (m1+m2+m3);
}


void student::displayDetails() {
    cout << "Name: " << name << "\nRno: " << rn << "\nM1: " << m1 << "\nM2: " << m2 << "\nM3: " << m3 << "\nTotal: " << calculateTotal();
}

int main(){
    student s1, s2;

    cout << "For student1:\n";
    s1.inputDetails();
    cout << endl;
    s1.displayDetails();

    cout << "\n\nFor student2:\n";
    s2.inputDetails();
    cout << endl;
    s2.displayDetails();

    return 0;
}
