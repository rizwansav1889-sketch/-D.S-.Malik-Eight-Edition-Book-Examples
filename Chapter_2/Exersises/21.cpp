#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double k = 6.67e-8;
    double m1, m2, d;

    cout << "Enter mass 1 (grams): ";
    cin >> m1;
    cout << "Enter mass 2 (grams): ";
    cin >> m2;
    cout << "Enter distance between masses (cm): ";
    cin >> d;

    double force = k * (m1 * m2) / (d * d);

    cout << "Gravitational force: " << force << " dynes" << endl;
}
