#include <iostream>
using namespace std;

int main() {
    float hardDriveSize, actualSize;

    cout << "Enter the size of hard drive (GB): ";
    cin >> hardDriveSize;

    actualSize = hardDriveSize * 1000000000 / 1073741824.0;

    cout << "Actual storage capacity: " << actualSize << " GB" << endl;
}
