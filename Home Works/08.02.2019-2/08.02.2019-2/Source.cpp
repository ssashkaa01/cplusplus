# include <iostream>
# include <ctime>

using namespace std;

const int SIZE = 10;
const int SIZE2 = 4;

//Заповнення масиву
void fill(int arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
	
		arr[i] = rand() % 100 + 50;

	}
}

//Виведення масиву
void print(int arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

//Сортування масиву
//0 - по спаданню
//1 - по зростанню
void sort(int arr[SIZE], int sort = 0) {

	int tmp = 0;

	if (sort == 0) {

		for (int i = 0; i < SIZE + 1; i++) {

			for (int j = SIZE; j >= 0; j--) {

				if (arr[i] >= arr[j]) {

					tmp = arr[j];
					arr[j] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
	else if (sort == 1) {
		
		for (int i = 0; i < SIZE; i++) {

			for (int j = -1 ; j < SIZE - 1; j++) {
				
				if (arr[i] >= arr[j + 1]) {

					tmp = arr[j + 1];
					arr[j + 1] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
}

//Вивід товарів
void printGoods(int name[SIZE2], float price[SIZE2]) {
	
	for (int i = 0; i < SIZE2; i++) {
		
		switch (name[i])
		{
		case 0:
			cout << "Bread - " << price[i] << endl;
			break;
		case 1:
			cout << "Eggs - " << price[i] << endl;
			break;
		case 2:
			cout << "Water - " << price[i] << endl;
			break;
		case 3:
			cout << "Milk - " << price[i] << endl;
			break;
		}
	}
}

//Сортуємо товари
void sortGoods(int name[SIZE2], float price[SIZE2]) {

	float tmp = 0;
	int tmp2 = 0;

	for (int i = 0; i < SIZE2; i++) {

		for (int j = -1; j < SIZE2 - 1; j++) {

			if (price[i] >= price[j + 1]) {

				tmp = price[j + 1];
				tmp2 = name[j + 1];
				price[j + 1] = price[i];
				name[j + 1] = name[i];
				price[i] = tmp;
				name[i] = tmp2;
			}
		}
	}
}

int main() {

	srand(time(NULL));

	/*1. Даний масив чисел. Написати функцію, яка сортує масив по зростанню або по спаданню, 
	в залежності від третього параметра функції.
 Якщо він рівний 0, сортування йде по спаданню, якщо 1, тоді по зростанню. */

	int arr[SIZE] = {};

	fill(arr);
	cout << "OLD ARRAY:" << endl << endl;
	print(arr);

	cout << endl << "NEW ARRAY:" << endl << endl;

	sort(arr, 1);
	print(arr);

	cout << endl << endl;

 /*
2. Дано 2 паралельних одновимірних масиви : масив назв товарів(масив рядків) та масив цін товарів. 
Впорядкувати масиви за зростанням цін.
 Вивести назви та ціни товарів за заростанням та спаданням цін. 
 Використати алгоритм впорядкування методом бульбашки.*/

	int name[SIZE2] = {0,1,2,3};
	float price[SIZE] = {10.8,3.2,5.8,15.9};

	cout << "OLD GOODS:" << endl << endl;
	printGoods(name, price);

	sortGoods(name, price);

	cout << endl << "NEW GOODS:" << endl << endl;
	printGoods(name, price);

	system("pause");
	return 0;
}