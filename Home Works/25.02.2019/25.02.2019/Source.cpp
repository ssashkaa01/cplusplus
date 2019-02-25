#include <iostream>
#include <ctime>

using namespace std;

int const ROW = 5; //Кількість чисел в масиві

//Заповнення масиву
void fill(int *arr) {

	for (int i = 0; i < ROW; i++) {
		arr[i] = rand() % 20 + 1;
	}
}

//Вивід масиву 1
void print1(int *arr) {

	for (int i = 0; i < ROW; i++) {
		if (arr[i] != 0) {
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
}

//Вивід масиву 2
void print2(int *arr) {

	for (int i = 0; i < ROW*2; i++) {
		if (arr[i] != 0) {
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
}

//Елементи обох масивів
void unite(int *arr1, int *arr2, int *arr3) {
	
	int a = 0;

	for (int i = 0; i < ROW; i++) {
		arr3[a++] = arr1[i];
		arr3[a++] = arr2[i];
	}
}
//Спільне
void common(int *arr1, int *arr2, int *arr3) {

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < ROW; j++) {

			if (arr1[i] == arr2[j]) {
				arr3[i] = arr1[i];
			}
		}

	}
}

//Елементи масиву, які не зустрічаються 
void notelement(int *common, int *arr, int *newarr) {

	for (int i = 0; i < ROW; i++) {

		for (int j = 0; j < ROW; j++) {

			if (arr[i] != common[j]) {
				newarr[i] = arr[i];
			}
			else {
				newarr[i] = 0;
				j = ROW;
			}
		}
	}
}

int main() {

	/*
Дано два масива: А[n] и B[m]. Утворити третій масив мінімального можливого розміру, у якому зібрати:
Елементи обох масивів;
Спільні элементи обох массивов;
Елементи масиву A, які не зустрічаються у B;
Елементи масиву В, які не зустрічаються у А;
Елементи масивів A і B, які не є спільними для них (тобто об’єднання результатів двох попереднії результатів).
	*/

	srand(time(NULL));

	int arr1[ROW] = {};
	int arr2[ROW] = {};
	int arr3[5][10] = {};

	int* parr1 = arr1;
	int* parr2 = arr2;
	int* unitearr = arr3[0];
	int* commonarr = arr3[1];
	int* pnot1 = arr3[2];
	int* pnot2 = arr3[3];
	int* pnotunite = arr3[4];

	fill(parr1);
	fill(parr2);

	cout << "ARRAYS:" << endl;
	print1(parr1);
	cout << endl;
	print1(parr2);
	cout << endl;

	unite(parr1, parr2, unitearr);
	cout << "UNITE ARRAY:" << endl;
	print2(unitearr);
	cout << endl;

	common(parr1, parr2, commonarr);
	cout << "COMMON ARRAY:" << endl;
	print1(commonarr);
	cout << endl;

	notelement(commonarr, parr1, pnot1);
	cout << "NOT ELEMENT ARRAY 1:" << endl;
	print2(pnot1);
	cout << endl;

	notelement(commonarr, parr2, pnot2);
	cout << "NOT ELEMENT ARRAY 2:" << endl;
	print2(pnot2);
	cout << endl;

	unite(pnot1, pnot2, pnotunite);
	cout << "UNITE ELEMENT ARRAY:" << endl;
	print2(pnotunite);
	cout << endl;



	system("pause");
	return 0;
}