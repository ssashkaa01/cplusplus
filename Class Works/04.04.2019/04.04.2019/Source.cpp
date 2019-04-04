#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string path = "db.txt";

void menu() {

	cout << "0 - exit\n1 - add contact\n2 - view all" << endl;

}

void addContact() {

	string name;
	string surname;
	string address;
	int phone;

	cout << "Please enter name:" << endl;
	cin >> name;

	cout << "Please enter surname:" << endl;
	cin >> surname;

	cout << "Please enter address:" << endl;
	cin >> address;

	cout << "Please enter phone:" << endl;
	cin >> phone;

	ofstream writeFile;
	writeFile.open(path, ofstream::app);
	if (!writeFile.is_open()) {
		cout << "DB not open!" << endl;
	}
	else {
		writeFile << name << " " << surname << " " << address << " " << phone << endl;
		cout << "Contact is added!" << endl;
	}

	writeFile.close();

}

void viewAll() {

	ifstream readFile;
	readFile.open(path);

	if (!readFile.is_open()) {

		cout << "File not open!" << endl;
	}
	else {

		string Data;
		cout << endl;
		while (!readFile.eof()) {

			getline(readFile, Data);
			cout << Data << endl;
		}

	}

}


int main() {

	bool start = true;
	int action;

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

			addContact();
			break;

		case 2:

			viewAll();
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}