#include <iostream>
using namespace std;

int main() {
    float gallons, mpg, miles;

    cout << "Enter capacity in gallons: ";
    cin >> gallons;

    cout << "Enter miles per gallon: ";
    cin >> mpg;

    miles = gallons * mpg;

    cout << "Miles without refueling: " << miles << endl;
}
