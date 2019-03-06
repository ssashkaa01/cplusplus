# include <iostream>
# include <ctime>

using namespace std;

//����������
void fill(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}

}

//����
void print(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;// << "\t" << &arr[i] << endl;
	}

}

//������ �� �����
void addlast(int *&arr, int &size, int const value) {

	int *atmp = new int[size + 1];

	for (int i = 0; i < size; i++) {
		atmp[i] = arr[i];
	}

	atmp[size] = value;

	delete[] arr;

	arr = atmp;
	size++;
}

//������ �� �������
void addfirst(int *&arr, int &size, int const value) {

	int *atmp = new int[size + 1];

	for (int i = size; i > 0; i--) {
		atmp[i] = arr[i-1];
	}

	atmp[0] = value;

	delete[] arr;

	arr = atmp;
	size++;
}

//void copy(int *const arr1, int *const arr2, int size) {
//
//	for (int i = 0; i < size; i++) {
//
//		arr2[i] = arr1[i];
//
//	}
//	delete[] arr1;
//}

int main() {

	srand(time(NULL));

	/*
	1. �������� ������� ��� ������ � ��������� ����������� �������: 
	������� ��������� ���������� ������ ��������� ������ � ���� ���������� ����������� �������.
	������ ������ 
	���������� ������ ����� ��������� � ����� ������. 
	���������� ������ ����� ��������� � �������������.    
	���� 
	*/

	int size = 1;
	int value = 0;
	bool active = true;
	int action = 0;
	int *arr = new int[size];

	while (active) {

		cout << "0 - exit" << endl;
		cout << "1 - create array" << endl;
		cout << "2 - fill array" << endl;
		cout << "3 - print array" << endl;
		cout << "4 - add element to start" << endl;
		cout << "5 - add element to end" << endl;
		cout << "6 - delete array" << endl;
		cout << "Please enter action:" << endl;

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
			cout << "Please enter first element" << endl;
			cin >> value;
			addfirst(arr, size, value);
			cout << "[ OK ] add first element" << endl;
			break;
		
		case 5:
			cout << "Please enter last element" << endl;
			cin >> value;
			addlast(arr, size, value);
			cout << "[ OK ] add last element" << endl;
			break;
		case 6:
			delete[] arr;
			cout << "[ OK ] array delete" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}