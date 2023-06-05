#include<iostream>
#include<string>
using namespace std;
int main()
{
	string f_name;
	string l_name;
	int dep;
	int dis;
start:	
	cout<<"      ============================================================"<<endl;
	cout<<"            WELL COME TO OUR BUS TICKET RESERVATION SOFTWARE       "<<endl;
	cout<<"      ============================================================"<<endl;
	cout<<endl;
	cout<<"\n Dear customer Please fill all asked informations below CORRECTLY"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Enter Your full Neme: ";
	cin>>f_name; cin>>l_name;
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
		if( dep>8||dep<1 )
		{
                    cout<<"Unkown Departure!!!"<<"\n ********************************************************************************"<<"\n Please enter Your CORRECT Departure again"<<endl;
                    goto new1;
		}
	if(dep==1)
	{
		cout<<"Please select your Distiniction"<<endl;
		cout<<"  10. Bahir Dar"<<endl;
		cout<<"  11. Hawasa"<<endl;
		cout<<"  12. Gonder"<<endl;
		cout<<"  13. Desie"<<endl;
		cout<<"  14. Semera"<<endl;
		cout<<"  15. Dire Dawa"<<endl;
		cout<<"  16. Jimma"<<endl;
		cout<<"Enter the number that hold your Distinction"<<endl;
		cin>>dis;
	}
	else if(dep != 1)
	{
			cout<<endl;
                dis=0;
	}
	if(dep==1 && dis==1)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To BAHIR DAR"<<endl;
			cout<<"It is 496.5KM it takes 9:45 hrs. "<<endl;
			cout<<"It costs 1300 ETB"<<endl;
                        }
            else if(dep==1 && dis==2)
			{
                        cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To HAWASA"<<endl;
			cout<<"It is 300KM it takes 5:30 hrs "<<endl;
			cout<<"It costs 700 ETB"<<endl;
                        }
            else if(dep==1 && dis==3)
			{
                        cout<<"your Travel is"<<endl;
			cout<<"From ADISS ABEBA"<<endl;
			cout<<"To GONDER"<<endl;
			cout<<"It is 590KM it takes 11:30 hrs "<<endl;
			cout<<"It costs 1500 ETB"<<endl;
                        }
            else if(dep==1 && dis==4)
                        {j
			cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To DESIE"<<endl;
			cout<<"It is 400KM it takes 6:50 hrs "<<endl;
			cout<<"It costs 900 ETB"<<endl;
                        }
            else if(dep==1 && dis==5)
                        {
			cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To SEMERA"<<endl;
			cout<<"It is 530KM it takes 10:50 hrs "<<endl;
			cout<<"It costs 1550 ETB"<<endl;
                        }
            else if(dep==1 && dis==6)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To DIRE DAWA"<<endl;
			cout<<"It is 453.5KM it takes 10:10 hrs "<<endl;
            cout<<"It costs 1450 ETB"<<endl;
                        }
            else if(dep==1 && dis==7)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From ADDIS ABEBA"<<endl;
			cout<<"To JIMMA"<<endl;
			cout<<"It is 500KM it takes 10:00 hrs "<<endl;
            cout<<"It costs 1550 ETB"<<endl;
                        }
            else if(dep==2 && dis==0)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From BAHIR DAR"<<endl;
			cout<<"To ADDIS ABEBA"<<endl;
			cout<<"It is 496.5KM it takes 9:45 hrs "<<endl;
			cout<<"It costs 1300 ETB"<<endl;
                        }
            else if(dep==3 && dis==0)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From HAWASA"<<endl;
			cout<<"To ADDIS ABEBA"<<endl;
			cout<<"It is 300KM it takes 5:30 hrs "<<endl;
			cout<<"It costs 700 ETB"<<endl;
            }
            else if(dep==4 && dis==0)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From GONDER"<<endl;
			cout<<"To ADISS ABEBA"<<endl;
			cout<<"It is 590KM it takes 11:30 hrs "<<endl;
			cout<<"It costs 1500 ETB"<<endl;
                        }
            else if(dep==5 && dis==0)
                        {
			cout<<"your Travel is"<<endl;
			cout<<"From DESIE"<<endl;
			cout<<"To ADDIS ABEBA"<<endl;
			cout<<"It is 400KM it takes 6:50 hrs "<<endl;
			cout<<"It costs 900 ETB"<<endl;
                        }
            else if(dep==6 && dis==0)
                        {
			cout<<"your Travel is"<<endl;
			cout<<"From SEMERA"<<endl;
			cout<<"To ADDIS ABEBA"<<endl;
			cout<<"It is 530KM it takes 10:50 hrs "<<endl;
			cout<<"It costs 1550 ETB"<<endl;
                        }
            else if(dep==7 && dis==0)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From DIRE DAWA"<<endl;
			cout<<"To ADDIS ABEBA"<<endl;
			cout<<"It is 453.5KM it takes 10:100 hrs "<<endl;
            cout<<"It costs 1450 ETB"<<endl;
                        }
            else if(dep==8 && dis==0)
			{
            cout<<"your Travel is"<<endl;
			cout<<"From JIMMA"<<endl;
			cout<<"To ADDIS ABEBA"<<endl;
			cout<<"It is 500KM it takes 10:00 hrs "<<endl;
            cout<<"It costs 1550 ETB"<<endl;
                        }
            else cout<<"error";              
	
int y;
cout<<"If You want to reserve anothetr ticket enter 1 0r 0 unless enter another number"<<endl;
cin>>y;
if(y==0 || y==1)
		goto start;
else 
return 0;
}
