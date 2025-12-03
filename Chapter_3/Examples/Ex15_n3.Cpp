// Movie Ticket Sales and Charity Donation Calculator.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
string movieName;
double adultTicket_p, childTicket_p, percDonation, grossAmount, amntDonated, netSaleAmount;
int AdultTicketsSold, ChildTicketsSold;
cout << fixed <<showpoint<<setprecision(2);
cout << "Enter the movie name: ";
getline(cin, movieName);
cout << "Enter the price of an adult ticket: ";
cin >> adultTicket_p;
cout << "Enter the price of a child ticket: ";
cin >> childTicket_p;
cout << "Enter the number of adult tickets sold: ";
cin >> AdultTicketsSold;
cout << "Enter the number of child tickets sold: ";
cin >> ChildTicketsSold;
cout << "Enter the percentage of donation: ";
cin >> percDonation;
grossAmount = adultTicket_p * AdultTicketsSold + childTicket_p * ChildTicketsSold;
amntDonated = grossAmount * percDonation / 100;
netSaleAmount = grossAmount - amntDonated;
cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
cout <<"Movie Name: " << right << " " << movieName << endl;
cout << setfill('.') << left << setw(35)<<"Number of Tickets Sold: " << right << setfill(' ') << setw(10) <<AdultTicketsSold+ ChildTicketsSold << endl;
cout << setfill('.')<< left << setw(35)<<"Gross Amount: " << right << " $" << setfill(' ') << setw(8) << grossAmount << endl;
cout << setfill('.')<< left << setw(35) <<"Percentage of Gross Amount Donated: "<<right<<setfill(' ')<<setw(9)<<percDonation<<"%"<<endl;
cout << setfill('.') << left << setw(35)<<"Amount Donated: "<< right<<" $"<<setfill(' ')<<setw(8)<<amntDonated<<endl;
cout << setfill('.') << left << setw(35) <<"Net Sale: "<<right<<" $"<<setfill(' ')<<setw(8)<<netSaleAmount;
return 0;
}