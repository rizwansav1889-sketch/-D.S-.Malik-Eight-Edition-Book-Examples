// Given length (inch),program outputs the equivalent length in feet and remaining inch(es).
 #include <iostream>
 using namespace std;
int main()
 {
    int inches;
    inches = 100;
    cout <<inches <<" inch(es) = ";
    cout <<inches / 12<<" feet (foot) and ";
    cout <<inches % 12<<" inch(es)"<<endl;
    return 0;
 }
