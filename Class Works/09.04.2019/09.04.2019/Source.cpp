#include <iostream>
#include "array.h"

using namespace std;

void Menu() {

	cout << "0 - exit" << endl;
	cout << "1 - create array" << endl;
	cout << "2 - fill array" << endl;
	cout << "3 - print array" << endl;
	cout << "4 - add element in array with index" << endl;
	cout << "5 - delete element in array with index" << endl;

}

int main() {

	int size = 1;
	int value = 0;
	int count = 0;
	int index = 0;
	bool active = true;
	int action = 0;
	int *arr = new int[size];

		while (active) {

			cout << endl;

			Menu();

			cout << "Please enter action:" << endl;
			cout << endl;

			cin >> action;

			switch (action) {

			case 0:
				active = false;
				break;
			case 1:

				cout << "Please enter size array: " << endl;
				cin >> size;
				arr = new int[size];

				cout << "[ OK ] array create" << endl;
				break;
			case 2:

				fill(arr, size);
				cout << "[ OK ] array filled" << endl;
				break;
			case 3:

				print(arr, size);

				break;
			case 4:
				cout << "Please enter element" << endl;
				cin >> value;
				cout << "Please enter index" << endl;
				cin >> index;
				if (index < size && index >= 0) {
					addtoindex(arr, size, value, index);
					cout << "[ OK ] add element to index" << endl;
				}
				else {
					cout << "[ ERROR ] index bad" << endl;
				}

				break;


			case 5:

				cout << "Please enter index" << endl;
				cin >> index;

				if (index < size && index >= 0) {
					delindex(arr, size, index);
					cout << "[ OK ] element element to index" << endl;
				}
				else {
					cout << "[ ERROR ] index bad" << endl;
				}

				break;
			}
	
		}

	

	/*Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. 
Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. 
Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню 
 (розбити проект на файл основної програми (.cpp), файл реалізації функцій (.cpp) та заголовочний файл (.h)).   */

	system("pause");
	return 0;
}