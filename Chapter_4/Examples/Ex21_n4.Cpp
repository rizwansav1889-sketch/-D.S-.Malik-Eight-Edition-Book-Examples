#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter any two integers: ";
    cin >> n1 >> n2;
    cout << "The two integers entered are " << n1<< " and "<<n2 << endl;
    if (n1>n2)
        cout << "The larger number is "<< n1<< endl;
    else if (n2>n1)
        cout << "The larger number is "<<n2 <<endl;
    else
        cout << "Both numbers are equal."<< endl;
    return 0;
}
