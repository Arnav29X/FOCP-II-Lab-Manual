#include <iostream>
using namespace std;

void computePerformance(float x[]);

int main() {
    float marks[10];

    cout << "Enter marks for 10 Subjects:\n";
    for (int i = 0; i < 10; i++) {
        cin >> marks[i];
    }

    computePerformance(marks);
    return 0;
}

void computePerformance(float x[]) {
    float sum = 0;
    float max = x[0];
    float min = x[0];

    for (int i = 0; i < 10; i++) {
        sum += x[i];

        if (x[i] > max)
            max = x[i];

        if (x[i] < min)
            min = x[i];
    }

    float avg = sum / 10;

    cout << "==== PERFORMANCE ====\n";
    cout << "AVERAGE: " << avg << "\n";
    cout << "MAX MARKS: " << max << "\n";
    cout << "MIN MARKS: " << min << "\n";
    cout << "=====================\n";
}
