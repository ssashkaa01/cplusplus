#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
	int sum;
	string currency;

public:
	void showInfo() {
		cout << "Sum:" << sum << " " << currency << endl;
	}
	void create() {
		cout << "Please enter sum:" << endl;
		cin >> sum;
		cout << "Please enter currency:" << endl;
		cin >> currency;
		cout << "Account created" << endl;
		showInfo();
	}
	void refill() {
		int addsum = 0;
		cout << "Please enter add sum:" << endl;
		cin >> addsum;
		sum += addsum;
		cout << "Account refill" << endl;
	}
	void withdraw() {
		
		int delsum = 0;
		cout << "Please enter withdraw sum:" << endl;
		cin >> delsum;

		if (sum >= delsum) {
			sum -= delsum;
			cout << "Money was withdraw" << endl;
		}
		else {
			cout << "Not money" << endl;
		}
		

	}
};

void menu() {

	cout << "0 - exit" << endl;
	cout << "1 - create account" << endl;
	cout << "2 - refill money" << endl;
	cout << "3 - withdraw money" << endl;
	cout << "4 - show info" << endl;
}

int main() {

	/*
	ООП 
Завдання 2. Домашнє завдання
Написати клас "Банківський рахунок" (Account), який містить: 
Номер рахунку 
Розмір коштів на рахунку 
Назва валюти рахунку (рублі, гривні, евро тощо), 
для позначення якої можна скористатись одним символом: R, G, E, $ тощо 
Забезпечити можливість: 
Відкривати рахунок та первинно вносити гроші на рахунок 
Знімати гроші з рахунку 
Докладати гроші на рахунок 

	*/

	bool bank = true;
	int action;
	int i = 0;
	Account person;

	while (bank) {

		menu();
		cin >> action;

		switch (action)
		{
		case 0:
			bank = false;
			break;
		case 1:
			person.create();
			break;
		case 2:
			person.refill();
			break;
		case 3:
			person.withdraw();
			break;
		case 4:
			person.showInfo();
			break;
		default:
			break;
		}



	}

	system("pause");
	return 0;
}