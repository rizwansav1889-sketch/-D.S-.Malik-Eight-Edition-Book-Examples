#include <iostream>
using namespace std;

int main() {
    int seconds, hours, minutes, remaining;

    cout << "Enter time in seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    remaining = seconds % 3600;
    minutes = remaining / 60;
    seconds = remaining % 60;

    cout << "Elapsed time: " << hours << ":" << minutes << ":" << seconds << endl;
}
