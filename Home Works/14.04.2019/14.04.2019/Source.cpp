#include <iostream>
#include <string>

using namespace std;

struct pib {

	string name;
	string surname;

};

struct contact {

	pib pib;

	string address;
	int phone;

};

void menu() {

	cout << "0 - exit\n1 - add contact\n2 - view all" << endl;

}

void addContact(contact *Contacts, int &i) {

	string name;
	string surname;
	string address;
	int phone;

	cout << "Please enter name:" << endl;
	cin >> name;
	Contacts[i].pib.name = name;

	cout << "Please enter surname:" << endl;
	cin >> surname;
	Contacts[i].pib.surname = surname;

	cout << "Please enter address:" << endl;
	cin >> address;
	Contacts[i].address = address;

	cout << "Please enter phone:" << endl;
	cin >> phone;
	Contacts[i].phone = phone;

		
	cout << "Contact is added!" << endl;
	i++;
}

void viewAll(contact *Contacts, int a) {

	for (int i = 0; i < a; i++)
	{
		cout << i << " Name: " << Contacts[i].pib.name << endl;
		cout << i << " Surname: " << Contacts[i].pib.surname << endl;
		cout << i << " Address: " << Contacts[i].address << endl;
		cout << i << " Phone: " << Contacts[i].phone << endl;

	}

}


int main() {

	/*Написати програму, яка реалізує телефонну книгу 
	з вказаною користувачем кількістю абонентів і всіма необхідними функціями. 
	Використати вкладені структури (для адреси чи ПІБ). */

	bool start = true;
	int action;
	int i = 0;

	contact Contacts;

	while (start) {

		menu();

		cout << "Please enter action:" << endl;
		cin >> action;

		switch (action)
		{
		case 0:

			start = false;
			break;

		case 1:

			addContact(&Contacts, i);
			break;

		case 2:

			viewAll(&Contacts, i);
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}