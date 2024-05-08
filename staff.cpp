#include "staff.h"

staff::staff()
{
	name = "unknown";
	birthDate = 0;
	enterDate = 0;
	leaveDate = 0;

}

staff::staff(string surname)
{
	(size(surname) > 0 && size(surname) < 20) ? name = surname : name = "unknown";
	birthDate = 0;
	enterDate = 0;
	leaveDate = 0;

}

staff::staff(int birth)
{
	name = "unknown";
	(birth > 1900 && birth < 2010) ? birthDate = birth : birthDate = 0;
	enterDate = 0;
	leaveDate = 0;
}

staff::staff(int birth, int enter)
{
	name = "unknown";
	(birth > 1900 && birth < 2010) ? birthDate = birth : birthDate = 0;
	(enter > 2000 && enter < 2025) ? enterDate = enter : enterDate = 0;
	leaveDate = 0;
}

staff::staff(int birth, int enter, int leave)
{
	name = "unknown";
	(birth > 1900 && birth < 2010) ? birthDate = birth : birthDate = 0;
	(enter > 2000 && enter < 2025) ? enterDate = enter : enterDate = 0;
	(leave > 2001 && leave < 2025) ? leaveDate = leave : leaveDate = 0;
}

staff::staff(string surname, int birth, int enter, int leave)
{
	(size(surname) > 0 && size(surname) < 20) ? name = surname : name = "unknown";
	(birth > 1900 && birth < 2010) ? birthDate = birth : birthDate = 0;
	(enter > 2000 && enter < 2025) ? enterDate = enter : enterDate = 0;
	(leave > 2001 && leave < 2025) ? leaveDate = leave : leaveDate = 0;
}


void staff::setName()
{
	std::cout << "Enter name: ";
	string surname;
	std::cin >> surname;
	(size(surname) > 0 && size(surname) < 20) ? name = surname : name = "unknown";
}

void staff::setBirthDate()
{
std:cout << "Enter birth date: ";
	int birth;
	std::cin >> birth;
	(birth > 1900 && birth < 2010) ? birthDate = birth : birthDate = 0;
}

void staff::setEnterDate()
{
std:cout << "Enter enter date: ";
	int enter;
	std::cin >> enter;
	(enter > 2000 && enter < 2025) ? enterDate = enter : enterDate = 0;
}

void staff::setLeaveDate()
{
std:cout << "Enter leave date: ";
	int leave;
	std::cin >> leave;
	(leave > 2001 && leave < 2025) ? leaveDate = leave : leaveDate = 0;
}

void staff::printConsole()
{
	std::cout << "----------Employer---------" << std::endl;
	std::cout << "Surname: " << name << "\nBirth Date: " << birthDate << "\nEnter Date: " << enterDate << "\nLeave Date: " << leaveDate << std::endl;
}

void staff::createObj(string surname, int birth, int enter, int leave)
{
	(size(surname) > 0 && size(surname) < 20) ? name = surname : name = "unknown";
	(birth > 1900 && birth < 2010) ? birthDate = birth : birthDate = 0;
	(enter > 2000 && enter < 2025) ? enterDate = enter : enterDate = 0;
	(leave > 2001 && leave < 2025) ? leaveDate = leave : leaveDate = 0;
	cout << "Сотрудник " << surname << " был добавлен" << endl;
}



staff::~staff()
{
	cout << "Object\t" << name << "\tdeleted" << endl;
}
