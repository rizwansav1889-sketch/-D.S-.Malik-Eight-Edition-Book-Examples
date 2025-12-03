#include <iostream>
using namespace std;

int main() {
    const double METRIC_TON = 2205;
    double bagCapacity;

    cout << "Enter amount of rice a bag can hold (in pounds): ";
    cin >> bagCapacity;

    int bagsNeeded = METRIC_TON / bagCapacity + 0.5;

    cout << "Bags needed to store one metric ton of rice: " << bagsNeeded << endl;
}
