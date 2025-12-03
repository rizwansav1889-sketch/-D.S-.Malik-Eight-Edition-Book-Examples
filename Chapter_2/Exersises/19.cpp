#include <iostream>
using namespace std;

int main() {
    int quarters, dimes, nickels;

    cout << "Enter number of quarters: ";
    cin >> quarters;
    cout << "Enter number of dimes: ";
    cin >> dimes;
    cout << "Enter number of nickels: ";
    cin >> nickels;

    int totalPennies = (quarters * 25) + (dimes * 10) + (nickels * 5);

    cout << "Total value in pennies: " << totalPennies << " cents" << endl;
}
