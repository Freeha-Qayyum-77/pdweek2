#include<iostream>
using namespace std;
main()
{
cout<<"Enter the movie name: ";
string name;
cin>>name;
cout<<"Enter the adult ticket price: $";
int adult;
cin>>adult;
cout<<"Enter the child ticket price: $";
int child;
cin>>child;
cout<<"Enter the number of adult tickets sold: ";
int adultTicketSold;
cin>>adultTicketSold;
cout<<"Enter the number of child tickets sold: ";
int childTicketSold;
cin>>childTicketSold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
int charity;
cin>>charity;
cout<<endl;
cout<<"Movie: "<<name<<endl;
int total;
total=(adult*adultTicketSold)+(child*childTicketSold);
cout<<"Total amount generated from ticket sales: $"<<total<<endl; 
int donation;
donation=(total*charity/100);
cout<<"Donation to charity (" <<charity << "%): $" <<donation<<endl;
int remaining;
remaining=total-donation;
cout<<"Remaining amount after donation: $"<<remaining;


}