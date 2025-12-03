// Basic skeleton for C++ file I/O.
#include <fstream>
using namespace std;
int main()
{
    ifstream inData;
    ofstream outData;
    inData.open("prog.dat");
    outData.open("prog.out");
    // Code for data manipulation would go here
    inData.close();
    outData.close();
    return 0;
}