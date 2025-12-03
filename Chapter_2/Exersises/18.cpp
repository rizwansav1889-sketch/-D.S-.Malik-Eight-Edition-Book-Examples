#include <iostream>
using namespace std;

int main() {
    double payRate, hoursWorked;


    cout << "Enter your hourly pay rate: ";
    cin >> payRate;
    cout << "Enter the number of hours you worked in a week: ";
    cin >> hoursWorked;


    double grossIncome = payRate * hoursWorked * 5; // for 5 weeks
 double tax = grossIncome * 0.14;
    double netIncome = grossIncome - tax;


    double clothes = netIncome * 0.10;
    double schoolSupplies = netIncome * 0.01;
    double savingsBonds = (netIncome - clothes - schoolSupplies) * 0.25;
    double parentsBonds = savingsBonds * 0.50;


    cout << "\nIncome before tax: $" << grossIncome << endl;
    cout << "Income after tax: $" << netIncome << endl;
    cout << "Money spent on clothes and accessories: $" << clothes << endl;
    cout << "Money spent on school supplies: $" << schoolSupplies << endl;
cout << "Money spent to buy savings bonds: $" << savingsBonds << endl;
    cout << "Money parents spend to buy additional bonds: $" << parentsBonds << endl;
}
