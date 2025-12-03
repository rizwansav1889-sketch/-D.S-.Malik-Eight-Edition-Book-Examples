#include <iostream>
using namespace std;

int main() {
    double stockPrice, shares;

    cout << "Enter price of one share: $";
    cin >> stockPrice;
    cout << "Enter number of shares: ";
    cin >> shares;

    double total = stockPrice * shares;
    double serviceCharge = total * 0.015;
    double amountReceived = total - serviceCharge;

    cout << "Total value: $" << total << endl;
    cout << "Service charge (1.5%): $" << serviceCharge << endl;
    cout << "Amount received after selling: $" << amountReceived << endl;
}
