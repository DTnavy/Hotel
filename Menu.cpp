#include<iostream>
#include<string>
#include<fstream>

#include"Menu.h"
#include"Customer.h"
#include"Room.h"

void Menu::displayMain()
{


    cout<<"            *                                      *    "<<endl;   
    cout<<"          **                                        **   "<<endl;
    cout<<"      *** Welcome to the Hotel Reservation Application ***"<<endl;
    cout<<"          **                                        **  "<<endl;
    cout<<"            *                                      *   "<<endl;
    cout<<endl;                                                   

	cout<<"Press to a designated number to in front of yor screen"<<endl;
	cout<<"1. Display Booking"<<endl;
	cout<<"2. Display room Available"<<endl;
	cout<<"3. Customer Detail"<<endl;
	cout<<"4. Exit the application"<<endl<<endl;

	
}

void Menu::displayBooking()
{
	
    cout<<"            *                                      *    "<<endl;   
    cout<<"          **                                        **   "<<endl;
    cout<<"      ***            Here to book your room           ***"<<endl;
    cout<<"          **                                        **  "<<endl;
    cout<<"            *                                      *   "<<endl;
    cout<<endl;

}

void Menu::displayroomAvailable()
{
	cout<<"            *                                      *    "<<endl;   
    cout<<"          **                                        **   "<<endl;
    cout<<"      ***               Room available               ***"<<endl;
    cout<<"          **                                        **  "<<endl;
    cout<<"            *                                      *   "<<endl;
    cout<<endl;
}


void Menu::displayCustomerDetail()
{
	
	system("cls");
	cout<<"            *                                      *    "<<endl;   
    cout<<"          **                                        **   "<<endl;
    cout<<"      ***             Customer detail                 ***"<<endl;
    cout<<"          **                                        **  "<<endl;
    cout<<"            *                                      *   "<<endl;
    cout<<endl;
	Customer cust;
	fstream infile("Customer.txt",ios::in);
	string uname;string uaddress;string uphone;string passport;string national;
	
	getline(infile,uname,'\t'); cust.setName(uname);
	getline(infile,uaddress,'\t'); cust.setAddress(uaddress);
	getline(infile,uphone,'\t'); cust.setPhone(uphone);
	getline(infile,passport,'\t'); cust.setPassportNo(passport);
	getline(infile,national,'\t'); cust.setNationality(national);
	cout<<cust; 
	system("pause");
}

void Menu::endOfApps()
{
	cout<<"            *                                      *    "<<endl;   
    cout<<"          **                                        **   "<<endl;
    cout<<"      ***                  Thank You                  ***"<<endl;
    cout<<"          **                                        **  "<<endl;
    cout<<"            *                                      *   "<<endl;
    cout<<endl;
}
void Menu::displayChoose()
{
	cout<<"Which kind of Room did the guest stayed in?  "<<endl;
    cout<<endl; 
               cout<<" 1.Single Rooms "<<endl;
               cout<<endl; 
               cout<<" 2.Double Rooms "<<endl;
               cout<<endl; 
               cout<<" 3.Executive "<<endl;
               cout<<endl; 
    
    cout<<"Select 1,2 or 3 . "<<endl;
    cout<<endl; 
}