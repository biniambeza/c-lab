#include<iostream>
#include<string>
using namespace std;
int passenger()
{
    string fname,lname,phone,departure,destination,date;
    int cost;

    cout<<"Enter first name:";
    cin>>fname;
    cout<<"\nEnter last name:";
    cin>>lname;
    cout<<"\nEnter phone No:";
    cin>>phone;
   dep:
    cout<<"\nSelect your departure A: for Addis Abeba B: for Bahir Dar";
    cin>>departure;
    if(departure!=A||B)
     {
        cout<<"\nincorrect choice";
        goto dep;
     }
   des:
   cout<<"\nSelect your destination A: for Addis Abeba B: for Bahir Dar";
    cin>>destination;
       if(departure!=A||B)
     {
        cout<<"\nincorrect choice";
        goto des;
     }
    cout<<"\nEnter travel date:";
    cin<<date;
    cout<<endl;
    cout<<"--------------- your Ticket-----------------";
    cout<<fname+" "+lname<<endl;
    cout<<"From"<<departure<<"\nTo"<<destination;
    cout<<"departure date"<<date;
}
int main()
{
    passenger();
    return 0;
}