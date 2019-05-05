#include<iostream>
#include<string>
#include<fstream>

#include"Customer.h"
#include"Room.h"


Customer::Customer():name(""),address(""),phone(""),passportNo(""),nationality(""),room(0)
{}
Customer::Customer(string uname,string uaddress,string uphone,string passport,string national ):name(uname),address(uaddress),phone(uphone),passportNo(passport),nationality(national),room(0)
{}

string Customer::getName()
{return name;}
string Customer::getAddress()
{return address;}
string Customer::getPhone()
{return phone;}
string Customer::getPassportNo()
{return passportNo;}
string Customer::getNationality()
{return nationality;}
void Customer::setName(string n)
{name=n;}
void Customer::setAddress(string dress)
{address=dress;}
void Customer::setPhone(string fon)
{phone=fon;}
void Customer::setPassportNo(string pass)
{passportNo=pass;}
void Customer::setNationality(string nat)
{nationality= nat;}
void Customer::setRoom(Room* r)
{ room = r;}

void Customer::fileCust()
{
	ofstream infile("Customer.txt",ios::out);

	infile<<passportNo<<"\t";
	infile<<name<<"\t";
	infile<<address<<"\t";
	infile<<phone<<"\t";
	infile<<nationality<<"\t";
	infile<<endl;
	infile.close();

}


