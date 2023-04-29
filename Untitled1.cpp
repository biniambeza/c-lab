#include<iostream>
#include<string>
using namespace std;
int passenger()
{
    string fname,lname,phone,departure,destination,date;
    string A,B;
    int cost;

    cout<<"Enter first name:";
    cin>>fname;
    cout<<"\nEnter last name:";
    cin>>lname;
    cout<<"\nEnter phone No:";
    cin>>phone;
 
    cout<<"\nSelect your departure Addis Abeba Or Bahir Dar";
    cin>>departure;
    if(departure==AA)
    cout<<"your destination is Bahir Dar";
    cout<<"\nSelect your destination Addis Abeba or Bahir Dar";
    cin>>destination;
       
    cout<<"\nEnter travel date:";
    cin>>date;
    cout<<endl;
     cout<<endl;
	cout<<"--------------- your Ticket-----------------"<<endl;
    cout<<fname+" "+lname<<endl;
    cout<<"From:"<<departure<<"\nTo:"<<destination;
    cout<<"\ndeparture date:"<<date;
}
int main()
{
    passenger();
    return 0;
}


