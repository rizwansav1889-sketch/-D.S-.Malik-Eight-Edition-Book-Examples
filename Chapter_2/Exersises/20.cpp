#include <iostream>
using namespace std;

int main() {
    double commissionRate, carCost, minAdd, maxAdd;

    cout << "Enter commission rate (e.g., 0.05 for 5%): ";
    cin >> commissionRate;
    cout << "Enter cost of the car: $";
    cin >> carCost;
    cout << "Enter minimum amount to be added: $";
    cin >> minAdd;
    cout << "Enter maximum amount to be added: $";
    cin >> maxAdd;

    double minSellingPrice = carCost + minAdd;
    double maxSellingPrice = carCost + maxAdd;
double minCommission = commissionRate * (minSellingPrice - carCost);
    double maxCommission = commissionRate * (maxSellingPrice - carCost);

    cout << "\nMinimum selling price: $" << minSellingPrice << endl;
    cout << "Maximum selling price: $" << maxSellingPrice << endl;
    cout << "Commission on min price: $" << minCommission << endl;
    cout << "Commission on max price: $" << maxCommission << endl;
}
