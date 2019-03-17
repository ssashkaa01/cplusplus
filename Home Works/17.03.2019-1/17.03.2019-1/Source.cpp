#include <iostream>

using namespace std;

int main() {

	/*Написати програму, яка отримує від користувача довільний набір cимволів, шифрує його та виводить на екран новоутворений рядок. Для шифрування скористатись звичайними арифметичними операціями ++, --, 
	збільшення або зменшення на якесь число тощо. Наприклад, при введенні ABА на екрані буде ВСВ.*/


	char str[255];
	int action = 0;

	cout << "Please enter action:" << endl;
	cout << "1 - crypt\n2 - decrypt" << endl;
	cin >> action;


	if (action == 1) {
		
		cout << "Please enter string for crypt:" << endl;
		cin >> str;

		for (int i = 0; i < strlen(str); i++) {

			if (i % 2 == 0) {
				cout << (char)((int)str[i] + 2);
			}
			else {
				cout << (char)((int)str[i] - 1);

			}
		}

	}
	else if (action == 2) {

		cout << "Please enter string for deccrypt:" << endl;
		cin >> str;

		for (int i = 0; i < strlen(str); i++) {

			if (i % 2 == 0) {
				cout << (char)((int)str[i] - 2);
			}
			else {
				cout << (char)((int)str[i] + 1);

			}

		}
	}

	cout << endl;

	system("pause");
	return 0;
}