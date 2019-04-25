#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getElement(string str, int endSpace) {

	string word;
	int startSpace = endSpace - 1;
	int countSpace = 0;

	for (int i = 0; i < str.length(); i++) {

		if (int(str[i]) != 32 &&  countSpace == endSpace) {

			word.push_back(str[i]);

		}
		else if(int(str[i]) == 32) {
			countSpace++;
		}
	}

	return word;
}


bool CheckAuth(string login, string pass) {

	ifstream usersFile;
	usersFile.open("users.txt");

	if (!usersFile.is_open()) {
		cout << "Database not found" << endl;
	}

	string s;

	while (!usersFile.eof()) {
		
		getline(usersFile, s);
		
		if (getElement(s, 0) == login) {

			if (getElement(s, 1) == pass) {

				cout << "Access - " << getElement(s, 2) << endl;
				return true;
			}
			else {
				return false;
			}

		}
	}

	return false;
}

void LoginForm() {

	char login[255];
	char pass[255];

	cout << "Please enter login:" << endl;
	cin >> login;

	cout << "Please enter password:" << endl;
	cin >> pass;

	if (CheckAuth(login, pass)) {
		cout << login << " is logged" << endl;
	}
	else {
		cout << "Login or password is bad" << endl;
	}
}

int main() {
	
	
	

	LoginForm();


	system("pause");
	return 0;
}