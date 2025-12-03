#include <iostream>
using namespace std;

int main() {
    double totalMilk, costPerLiter, profitPerCarton;
    const double CARTON_CAPACITY = 3.78;

    cout << "Enter total amount of milk produced in liters: ";
    cin >> totalMilk;
    cout << "Enter cost of producing one liter of milk: ";
    cin >> costPerLiter;
    cout << "Enter profit on each carton: ";
    cin >> profitPerCarton;
    int cartons = totalMilk / CARTON_CAPACITY + 0.5;
    double productionCost = totalMilk * costPerLiter;
    double totalProfit = cartons * profitPerCarton;

    cout << "\nMilk cartons needed: " << cartons << endl;
    cout << "Total production cost: $" << productionCost << endl;
    cout << "Total profit: $" << totalProfit << endl;
}
