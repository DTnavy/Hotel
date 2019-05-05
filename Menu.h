#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>

using namespace std;

#ifndef Menu_h
#define Menu_h

class Menu
{
	
public:
	void displayMain();
	void displayBooking();
	void displayChoose();
	void displayroomAvailable();
	void displayCustomerDetail();
	void endOfApps();
};

#endif