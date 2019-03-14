#include <iostream>

using namespace std;

int main() {

	/*int numb = 0;
	int i = 0;
	int arr[3] = {};

	while (i < 3) {

		cout << "Please enter code number:" << endl;
		cin >> numb;

		if (numb >= 65 && numb <= 90 || numb >= 97 && numb <= 122) {
			arr[i] = numb;
			i++;
		}
		else {
			cout << "Diapazon 65-90 and 97-122" << endl;
		}
	}

	for (i = 0; i < 3; i++) {
		cout << (char)arr[i];
	}*/

	char str[255];

	cin >> str;

	for (int i = 0; i < strlen(str); i++) {
		cout << (int)str[i];
	}

	cout << endl;

	/*
	C++ 
Написати програму, яка отримує від користувача довільний набір цифр (кодів) 
та виводить на екран новоутворений рядок символів. 
Наприклад, при введенні цифр 65 66 65 на екрані буде ABA  
	*/
	
	system("pause");
	return 0;
}