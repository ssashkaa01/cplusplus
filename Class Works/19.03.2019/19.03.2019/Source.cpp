#include <iostream>
#include <string>

using namespace std;

//int strl( char *str) {
//
//	int counter = 0;
//
//	while (str[counter] != '\0') {
//		counter++;
//	}
//	return counter;
//}


int main() {

	/*Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?  */
	//char str[255];
	//cout << "1. Please enter chars: " << endl;

	//cin >> str;

	//int a = 0;
	//int o = 0;
	//int c = 0;

	//while (str[c] != '\0') {
	//	
	//	if (str[c] == 'a') {
	//		a++;
	//	}else if(str[c] == 'o') {
	//		o++;
	//	}
	//	c++;
	//}

	//cout << "a = " << a << endl;
	//cout << "o = " << o << endl;
	//cout << endl;

	//cout << "2. Please enter string: " << endl;
	//string str2;
	//cin >> str2;

	//cout << "Length - " << str2.size() << endl;

	cout << "3. edit string " << endl;
	/*Дано рядок. Замінити у рядку всі великі букви на малі і навпаки. */

	char str3[255];
	cout << "Please enter str:" << endl;
	cin >> str3;
	int cc = 0;

	while (str3[cc] != '\0') {
		
		if(str3[cc] > 65)
		
		cc++;
	}






	system("pause");
	return 0;
}