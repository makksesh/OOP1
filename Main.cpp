#include "staff.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	//использование конструкторов класса
	cout << "Пустой конструктор: " << endl;
	staff noname;
	noname.printConsole();

	cout << "\nКонструктор с переменной string: " << endl;
	staff onename("Ksenia");
	onename.printConsole();

	cout << "\nКонструктор с 1 переменной int: " << endl;
	staff oneint(2001);
	oneint.printConsole();

	cout << "\nКонструктор с 2 переменными int: " << endl;
	staff twoint(1995, 2015);
	twoint.printConsole();

	cout << "\nКонструктор с 3 переменными int: " << endl;
	staff threeint(1990, 2018, 2020);


	cout << "\nПолностью заполненый класс: " << endl;
	staff Chief("Nikita", 1989, 1999, 2023);
	Chief.printConsole();
	Chief.setEnterDate();
	Chief.printConsole();

	// динамический массив object
	cout << "\nВведите количество сотрудников: ";
	int countStaff;
	cin >> countStaff;

	staff* group = new staff[countStaff];
	for (int i = 0; i < countStaff; i++)
	{
		(*(group + i)).setName();
		(*(group + i)).setBirthDate();
		(*(group + i)).setEnterDate();
		(*(group + i)).setLeaveDate();

	}
	for (int i = 0; i < countStaff; i++)
	{
		group[i].printConsole();
	}
	delete[] group; /*очищаем память от указателей obj*/


	// исопльзование методов с переменными
	staff company[2];
	for (int i = 0; i < 2; i++)
	{
		cout << "Введите фамилию сотрудника: ";
		string surnameTemp;
		cin >> surnameTemp;

		cout << "Введите дату рождения сотрудника: ";
		int birthTemp;
		cin >> birthTemp;

		cout << "Введите дату трудоустройства сотрудника: ";
		int enterTemp;
		cin >> enterTemp;

		cout << "Введите увольнения сотрудника (если нет, то поставить 0): ";
		int leaveTemp;
		cin >> leaveTemp;

		company[i].createObj(surnameTemp, birthTemp, enterTemp, leaveTemp);

	}

	for (int i = 0; i < 2; i++)
	{
		company[i].printConsole();
	}


	return 0;
}

