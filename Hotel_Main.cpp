#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include"Customer.h"
#include"Room.h"
#include"Menu.h"

#define MAX 100



using namespace std;

int main()
{
	Menu hotel;
	Room room;
	Customer cust;
	int v;
	string uname;string uaddress;string uphone;string passport;string national;

	hotel.displayMain();
	cout<<"Enter your number : ";
	cin>>v;

	while(v!='A')
	{
		switch(v)
		{
		case 1:system("cls");
			hotel.displayBooking();
			cin.ignore();
		cout<<"Please enter you Name"<<endl;
		getline(cin,uname); cust.setName(uname); 
		cout<<"Please enter you address"<<endl;
		getline(cin,uaddress); cust.setAddress(uaddress);
		cout<<"Please enter you phone:"<<endl;
		getline(cin,uphone); cust.setPhone(uphone);
		cout<<"Please enter you passport"<<endl;
		getline(cin,passport); cust.setPassportNo(passport);
		cout<<"Please enter you nationality"<<endl;
		getline(cin,national); cust.setNationality(national);
		
		cust.fileCust();

		hotel.displayroomAvailable();
		room.roomInfo();
		hotel.displayChoose();
		room.chooseRoom();
		room.writeRoom();
		
		system("pause");
			break;
		case 2:system("cls");
			hotel.displayroomAvailable();
			room.roomInfo();
			system("pause");;
			break;
		case 3: hotel.displayCustomerDetail();
			break;
		case 4:system("cls"); 
			cout<<"Thank You use this apps"<<endl;
			exit (1);
			
		default: cout<<"Please type number that has designated"<<endl;
		}
		system("cls");
		hotel.displayMain();
		cout<<"Enter your number : ";
		cin>>v;
	}

	return 0;
}