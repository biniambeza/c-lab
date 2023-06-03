#include<iostream>
#include<string>
using namespace std;
int main()
{
	string full_name;
	int dep;
	int dis;
	cout<<"      ============================================================"<<endl;
	cout<<"            WELL COME TO OUR BUS TICKET RESERVATION SOFTWARE       "<<endl;
	cout<<"      ============================================================"<<endl;
	cout<<endl;
	cout<<"\n Dear customer Please fill all asked informations below CORRECTLY"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Enter Your full Neme: ";
	cin>>full_name;
new1:	cout<<"Please select your departure"<<endl;
		cout<<"  1. Addis Abeba"<<endl;
		cout<<"  2. Bahir Dar"<<endl;
		cout<<"  3. Hawasa"<<endl;
		cout<<"  4. Gonder"<<endl;
		cout<<"  5. Desie"<<endl;
		cout<<"  6. Semera"<<endl;
		cout<<"  7. Dire Dawa"<<endl;
		cout<<"  8. Jimma"<<endl;
		cout<<"Enter the number that hold your Departure: "; 
		cin>>dep;	
		if( dep>7 || dep<1 )
		{
			cout<<"Unkown Departure!!!"<<"\n ********************************************************************************"<<"\n Please enter Your CORRECT Departure again"<<endl;
			goto new1;
		}
	if(dep==1)
	{
		cout<<"Please select your Distiniction"<<endl;
		cout<<"  1. Bahir Dar"<<endl;
		cout<<"  2. Hawasa"<<endl;
		cout<<"  3. Gonder"<<endl;
		cout<<"  4. Desie"<<endl;
		cout<<"  5. Semera"<<endl;
		cout<<"  6. Dire Dawa"<<endl;
		cout<<"  7. Jimma"<<endl;
		cout<<"Enter the number that hold your Distinction"<<endl;
		cin>>dis;
	}
	else if(dep != 1)
	{
		cout<<"your Distinction is Addis Abeba";
	}
	switch(dep,dis){
		case 1&&1:
			cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To BAHIR DAR"<<endl
			cout<<"It is 496.5KM it takes 9:45 hrs ";
			cout<<"It costs 1300 ETB";
		case 1&&2:
			cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To HAWASA"<<endl
			cout<<"It is 496.5KM it takes 9:45 hrs ";
			cout<<"It costs 1300 ETB";
		case 1&&3:
			cout<<"your Travel is"<<endl;
			cout<<"From ADISS ABEBA"<<endl;
			cout<<"To GONDER"<<endl
			cout<<"It is 496.5KM it takes 9:45 hrs ";
			cout<<"It costs 1300 ETB";
		case 1&&4:
			cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To DESIE"<<endl
			cout<<"It is 496.5KM it takes 9:45 hrs ";
			cout<<"It costs 1300 ETB";
		case 1&&5:
			cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To SEMERA"<<endl
			cout<<"It is 496.5KM it takes 9:45 hrs ";
			cout<<"It costs 1300 ETB";
		case 1&&6:
				cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To DIRE DAWA"<<endl
			cout<<"It is 496.5KM it takes 9:45 hrs ";
			cout<<"It costs 1300 ETB";
		case 1&&2:
		case 1&&2:
		case 1&&2:
		case 1&&2:
	}
	
	
	
}
