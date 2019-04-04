#include<iostream>
#include<string>

#include"Menu.h"

void Menu::displayMain()
{
	int v;
	Menu hotel;

    cout<<"            *                                      *    "<<endl;   
    cout<<"          **                                        **   "<<endl;
    cout<<"      *** Welcome to the Hotel Reservation Application ***"<<endl;
    cout<<"          **                                        **  "<<endl;
    cout<<"            *                                      *   "<<endl;
    cout<<endl;                                                   

	cout<<"Press to a designated number to in front of yor screen"<<endl;
	cout<<"1.Display Booking"<<endl;
	cout<<"2.Display room Available"<<endl;
	cout<<"3.Checkout"<<endl;
	cout<<"4. Customer Detail"<<endl;
	cout<<"5. Exit the application"<<endl<<endl;

	cout<<"Enter your number : ";
	cin>>v;

	while(v!='A')
	{
		switch(v)
		{
		case 1:hotel.displayBooking();
			break;
		case 2:hotel.displayroomAvailable();
			break;
		case 3:hotel.diplayCheckout();
			break;
		case 4: hotel.displayCustomerDetail();
			break;
		case 5: cout<<"Thank You this apps"<<endl;
			exit (1);
			
		default: cout<<"Please type number that has designated"<<endl;
		}
		cout<<"Enter your number";
		cin>>v;
	}
}

void Menu::displayBooking()
{
	system("cls");
	cout<<"Please enter you IC/Passport:"<<endl;
}

void Menu::displayroomAvailable()
{
	system("cls");
	cout<<"ROOM AVAILABLE"<<endl;
	cout<<"Executice Suite"<<endl;
	cout<<"Double Room"<<endl;
	//("pause");
}

void Menu::diplayCheckout()
{
	system("cls");
	cout<<"checkout"<<endl;
	//system("pause"):
}

void Menu::displayCustomerDetail()
{
	system("cls");
	cout<<"Name:"<<endl;
}

