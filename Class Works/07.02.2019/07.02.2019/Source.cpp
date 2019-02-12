#include <iostream>
#include <ctime>

using namespace std;

const int A = 3, B = 4;

/*1 Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності. 
Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5. 
функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні [1..30] 
шаблонну функцію Print(), яка виводить елементи масиву на екран в вигляді матриці 
функцію, яка заміняє всі парні елементи нулями */

int Fill(int arr[A][B]) {

	for (int i = 0; i < A; i++) {

		for (int j = 0; j < B; j++) {
			arr[i][j] = rand() % 30 + 1;
		}
	}
	return 0;
}

void Print(int arr[A][B]) {

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 4; j++) {
			
			if (arr[i][j] % 2 == 0) {
				
				arr[i][j] = 0;
			}
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}
}

int main() {

	srand(time(NULL));
	int arr[A][B];

	Fill(arr);
	Print(arr);

	system("pause");
	return 0;
}