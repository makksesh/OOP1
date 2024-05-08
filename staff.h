#pragma once
#include <iostream>
#include <string>
using namespace std;


class staff
{
private:
	string name;
	int birthDate;
	int enterDate;
	int leaveDate;
public:
	staff();
	staff(string);
	staff(int);
	staff(int, int);
	staff(int, int, int);
	staff(string, int, int, int);
	~staff();
	void setName();
	void setBirthDate();
	void setEnterDate();
	void setLeaveDate();
	void printConsole();

	void createObj(string, int, int, int);



};
