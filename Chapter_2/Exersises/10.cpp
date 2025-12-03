#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n1, n2, n3, n4, n5;
    float sum;

    cout << "Enter 5 decimal numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    sum = round(n1 + n2 + n3 + n4 + n5);

    cout << "Rounded sum = " << sum << endl;
}   
