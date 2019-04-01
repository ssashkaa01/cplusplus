#include <iostream>
#include <string>

using namespace std;

int count = 0;

void Menu() {

	cout << "0 - exit" << endl;
	cout << "1 - add person" << endl;
	cout << "2 - view all people"<< endl;
	cout << "3 - search persons" << endl;
	cout << "4 - edit person" << endl;
	cout << "5 - search persons birthday" << endl;

}

struct Person
{
private:
	string name;
	string surname;
	int day;
	int month;
	int year;
public:

	void search(string sname) {

		if (name == sname || surname == sname) {
			ShowPersonInfo();
		}
	}

	void searchBirthday(int smonth) {

		if (month == smonth) {
			ShowPersonInfo();
		}
	}

	void setName(string names) {
		name = names;
	}

	void setSurname(string surnames) {
		surname = surnames;
	}

	void setDay(int days) {
		day = days;
	}

	void setMonth(int months) {
		month = months;
	}

	void setYear(int years) {
		year = years;
	}

	void ShowPersonInfo() {

		if (name.length() > 0) {
			cout << "Name: " << name << "\nSurname: " << surname << "\nBirhday: " << day << "." << month << "." << year << endl;
			cout << endl;
		}
	}
};


void FillPerson(Person *person, int i) {

	string data;
	int date;
	
	cout << "Enter person name: " << endl;
	cin >> data;
	person[i].setName(data);

	cout << "Enter person surname: " << endl;
	cin >> data;
	person[i].setSurname(data);

	cout << "Please enter birhday:\nday:" << endl;
	cin >> date;
	person[i].setDay(date);

	cout << "Month:" << endl;
	cin >> date;
	person[i].setMonth(date);

	cout << "Year:" << endl;
	cin >> date;
	person[i].setYear(date);
			
	
}

int main() {

	bool start = true;
	int action = 0;

	/*
	Описати структуру «Людина». Передбачити: 

Заповнення масиву людей 
Вивід інформації з сортуванням по прізвищу та імені 
Вивід списку іменників місяця з вказанням дати народження 
Зміна розміру масиву при додаванні та видаленнні записів 
Пошук по прізвищу та імені 
Редагування запису 
Роботу організувати через меню. Пункти меню обовязково є типами перелічуваної константи. 
*/

	int personCount = 0;
	int count = 0;
	string name;
	cout << "Enter person count " << endl;
	cin >> personCount;

	Person *person = new Person[personCount];

	while (start)
	{
		
		Menu();
		cout << "Please enter action:" << endl;
		cin >> action;

		switch (action)
		{
		case 0:
			start = false;
			break;
		case 1:
			if (count < personCount) {
				FillPerson(person, count);
				count++;
			}
			else {
				cout << "No memory in database!";
			}
			
			break;
		case 2:

			for (int i = 0; i < personCount; i++)
			{
				cout << "USER INFO [" << i << "]" << endl;
				person[i].ShowPersonInfo();
			}
			break;
		case 3:

			cout << "Please enter name or surname:" << endl;
			cin >> name;

			for (int i = 0; i < count; i++) {
				person[i].search(name);
			}

			break;
		case 4:
			cout << "Please enter ID user:" << endl;
			cin >> action;
			if (action > 0 && action < count) {
				cout << "USER INFO [" << action << "]" << endl;
				person[action].ShowPersonInfo();
				cout << "Edit this user:" << endl;
				FillPerson(person, action);
			}
			else {
				cout << "Not found user..." << endl;
			}

			break;
		case 5:

			cout << "Please enter month:" << endl;
			cin >> action;

			for (int i = 0; i < count; i++) {
				person[i].searchBirthday(action);
			}

			break;
		default:
			break;
		}


	}


	system("pause");
	return 0;
}