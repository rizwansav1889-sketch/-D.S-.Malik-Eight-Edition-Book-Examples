#include <iostream>
using namespace std;

int main() {
    float originalPrice, markupPercent, taxRate;
    float markupAmount, sellingPrice, taxAmount, finalPrice;

    cout << "Enter original price: $";
    cin >> originalPrice;

    cout << "Enter markup percentage: ";
    cin >> markupPercent;

    cout << "Enter sales tax rate: ";
    cin >> taxRate;
    markupAmount = originalPrice * (markupPercent / 100);
    sellingPrice = originalPrice + markupAmount;
    taxAmount = sellingPrice * (taxRate / 100);
    finalPrice = sellingPrice + taxAmount;

    cout << "Original Price: $" << originalPrice << endl;
    cout << "Markup: $" << markupAmount << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax: $" << taxAmount << endl;
    cout << "Final Price: $" << finalPrice << endl;
}
