# include <iostream>
# include <ctime>

using namespace std;

const int SIZE = 10;
const int SIZE2 = 4;

//���������� ������
void fill(int arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
	
		arr[i] = rand() % 100 + 50;

	}
}

//��������� ������
void print(int arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

//���������� ������
//0 - �� ��������
//1 - �� ���������
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

//���� ������
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

//������� ������
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

	/*1. ����� ����� �����. �������� �������, ��� ����� ����� �� ��������� ��� �� ��������, 
	� ��������� �� �������� ��������� �������.
 ���� �� ����� 0, ���������� ��� �� ��������, ���� 1, ��� �� ���������. */

	int arr[SIZE] = {};

	fill(arr);
	cout << "OLD ARRAY:" << endl << endl;
	print(arr);

	cout << endl << "NEW ARRAY:" << endl << endl;

	sort(arr, 1);
	print(arr);

	cout << endl << endl;

 /*
2. ���� 2 ����������� ����������� ������ : ����� ���� ������(����� �����) �� ����� ��� ������. 
������������ ������ �� ���������� ���.
 ������� ����� �� ���� ������ �� ����������� �� ��������� ���. 
 ����������� �������� ������������� ������� ���������.*/

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