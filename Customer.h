#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include"Room.h"

using namespace std;

#ifndef Customer_h
#define Customer_h

class Customer
{
	Room* room;
	string name;
	string address ;
	string phone;
	string passportNo;
	string nationality;
public:
	Customer();
	Customer(string uname,string uaddress,string uphone,string passport,string national );
	string getName();
	string getAddress();
	string getPhone();
	string getPassportNo();
	string getNationality();
	void setName(string n);
	void setAddress(string dress);
	void setPhone(string fon);
	void setPassportNo(string pass);
	void setNationality(string nat);
	void setRoom(Room* r);
	void inforoom();
	void fileCust();
	friend ostream& operator<<(ostream& out,Customer& cust)
	{
		cout<<"Name       :"<<cust.getName()<<endl;
		cout<<"Address    :"<<cust.getAddress()<<endl;
		cout<<"Phone      :"<<cust.getPhone()<<endl;
		cout<<"Passport   :"<<cust.getPassportNo()<<endl;
		cout<<"Nationality:"<<cust.getNationality()<<endl;
		return out;
	}

};

#endif
