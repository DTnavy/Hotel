#include<iostream>
#include<string>
#include<fstream>

#include"Room.h"



void Room::roomInfo()
{
	cout<<"1.Single (RM60)"<<endl;
	cout<<numSingle<<" left."<<endl;
	cout<<"2.Double (RM90)"<<endl;
	cout<<numDouble<<" left."<<endl;
	cout<<"3.Executive (RM150)"<<endl;
	cout<<numExecutive<<" left."<<endl;
}

void Room::chooseRoom()
{
    int choice,days,total1;
    char AC,again;
    int c=50;
    int single= 60;
    int doubl=90;
    int suit=150;
    int time=24;
    int service=50;
    do
    {
   
    cout<<"Enter Your CHoice Here_: ";
    cin>>choice;
    cout<<"__________________________________"<<endl;
    switch(choice)
    {
    case 1:
         cout<<"You have Selected single room. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
         
              cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl; 
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+single+time+service)*days;
          cout<<"Your Total Total bill + service tax = (RM"<<total1<<" .)"<<endl;
          cout<<endl; 
          cout<<"______________________________"<<endl;
}       
         else if (AC == 'N' || AC == 'n')
 {        
         total1=(single+time+service) * days;
         cout<<"Your Total Total bill + service tax = (RM"<<total1<<" )"<<endl;
      cout<<endl; 
       cout<<"_______________________________"<<endl;
		}      numSingle--;
         break;
         case 2:
         cout<<"You Have Selected Double room."<<endl;
          cout<<endl; 
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;
        cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl; 
         
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+doubl+time+service)*days;
          cout<<"Your Total Total bill + service tax = (RM"<<total1<<" )"<<endl;
cout<<endl; 
 cout<<"__________________________________"<<endl;
}       
         else if (AC == 'N' || AC == 'n')
 {        
         total1=(doubl+time+service) * days;
         cout<<"Your Total Total bill + service tax = (RM"<<total1<<" )"<<endl;
        cout<<endl; 
         cout<<"_______________________________________"<<endl;
		}      numDouble--;
         break;
         case 3:
         cout<<"You Have Selected Suit. "<<endl;
         cout<<endl;
         cout<<" For How many days did the guest stayed: ";
         cin>>days;
         cout<<endl;      
         cout<<" Press Y for A/c and N for without A/c: ";
         cin>>AC;
         cout<<endl; 
        if (AC == 'Y' || AC == 'y')
{
         total1 =(c+suit+time+service)*days;
          cout<<"Your Total Total bill + service tax = (RM"<<total1<<" )"<<endl;
          cout<<endl;
           cout<<"_______________________________________"<<endl; 
}       
         else if (AC == 'N' || AC == 'n')
 {        
         total1=(suit+time+service) * days;
          cout<<"Your Total Total bill + service tax = (RM"<<total1<<")"<<endl;
          
        cout<<endl; 
       cout<<"__________________________________________"<<endl;
 }      numExecutive--;
                  break;
                 default:
                 cout<<"you have enter an invalid Choice "<<endl;
                 cout<<endl; 
                 }
                 cout<<"Do you want to checkout for another room? (Y/N): ";
                 cin>>again;
                  cout<<"___________________________________"<<endl;
                 cout<<endl; 
    }
       while(again == 'y' || again == 'Y'); 


}
void Room::writeRoom()
{
	fstream infile("ROOM.txt",ios::out);
		infile<<numSingle;
		infile<<numDouble;
		infile<<numExecutive;
		infile.close();
}

