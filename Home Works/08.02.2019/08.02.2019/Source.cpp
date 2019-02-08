# include <iostream>
# include <ctime>

using namespace std;

const int SIZE = 7;

//Заповнення
void Fill(int arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 80 - 26;
	}
}

//Виведення
void Print(int arr[SIZE]) {

	int min = 54;
	int sum = 0;
	int elem = 0;

	cout << "Please enter last sum index element:" << endl;
	cin >> elem;

	for (int i = 0; i < SIZE; i++) {

		//Знаходимо мінімальне
		if (min > arr[i] && elem <= i) {
			min = arr[i];
		}
		//Знаходимо суму
		sum += arr[i];
	}

	cout << "MIN - " << min << endl;
	cout << "SUM - " << sum << endl;
}

int main() {

	srand(time(NULL));

	int arr[SIZE] = {};

	/*1. Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю. 
	Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-26..54] 
функцію Print(), яка виводить елементи масиву на екран 
перевантажені функції:
- для знаходження суми елементів масиву
- для знаходження мінімального елемента масиву до вказаної верхньої межі проміжку (від початку до вказаного індексу) 
*/

	Fill(arr);
	Print(arr);

	system("pause");
	return 0;
}