#include <iostream>
#include <iomanip>
using namespace std;
const double ResBillProcFee = 4.50;
const double ResBasicServCost = 20.50;
const double ResCostPremChanel = 7.50;
const double BusBillProcFee = 15.00;
const double BusBasicServCost = 75.00;
const double BusBasicConnCost = 5.00;
const double BusCostPremChanel = 50.00;
int main()
{
    int accNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;
    cout <<fixed << showpoint<<setprecision(2);
    cout <<"This program computes a cable bill." << endl;
    cout <<"Enter account number (an integer): ";
    cin >>accNumber;
    cout <<endl;
    cout << "Enter customer type: R or r (Residential), B or b (Business): ";
    cin >> customerType;
    cout << endl;
    switch (customerType)
    {
    case 'r':case 'R':
        cout << "Enter the number of premium channels: ";
        cin >> numOfPremChannels;
        cout << endl;
        amountDue = ResBillProcFee + ResBasicServCost + numOfPremChannels * ResCostPremChanel;
        cout << "Account number: " << accNumber << endl;
        cout << "Amount due: $" << amountDue << endl;
        break;
    case 'b':case 'B':
        cout << "Enter the number of basic service connections: ";
        cin >> numOfBasicServConn;
        cout << endl;
        cout << "Enter the number of premium channels: ";
        cin >> numOfPremChannels;
        if (numOfBasicServConn <= 10)
            amountDue = BusBillProcFee+BusBasicServCost + numOfPremChannels*BusCostPremChanel;
        else
            amountDue = BusBillProcFee+BusBasicServCost+ (numOfBasicServConn - 10)*BusBasicConnCost + numOfPremChannels*BusCostPremChanel;
        cout << "Account number: " << accNumber<< endl;
        cout << "Amount due: $" << amountDue << endl;
        break;
    default:
        cout << "Invalid Customer Type.";
    }
    return 0;
}
