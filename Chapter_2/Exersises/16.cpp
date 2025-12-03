#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const float cartonCapacity = 3.78;
    const float costPerLiter = 0.38;
    const float profitPerCarton = 0.27;

    float totalLiters, cartons, cost, profit;

    cout << "Enter total liters of milk produced: ";
    cin >> totalLiters;
cartons = round(totalLiters / cartonCapacity);
    cost = totalLiters * costPerLiter;
    profit = cartons * profitPerCarton;

    cout << "Milk cartons needed: " << cartons << endl;
    cout << "Cost of producing milk: $" << cost << endl;
    cout << "Profit from milk: $" << profit << endl;
}
