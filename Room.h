#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>


using namespace std;

#ifndef Room_h
#define Room_h



class Single
{
protected:
	int numSingle;

	
};
class Double
{
protected:
	int numDouble;

	
};
class Executive
{
protected:
	int numExecutive;
public:
	
	void addRoom();
	void removeRoom();
	
	
	
};
class Room:public Single,public Double,public Executive
{
protected:
	int total;
public:
	Room()
	{
		fstream infile("ROOM.txt",ios::in);
		infile>>numSingle;
		infile>>numDouble;
		infile>>numExecutive;
		infile.close();
	}
	void roomInfo();
	int totalRM();
	void chooseRoom();
	void writeRoom();
	
	

};




#endif