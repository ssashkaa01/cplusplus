# include <iostream>
# include <stdlib.h>
#include <ctime>

using namespace std;

void fill(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
	}

}

void print(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

}

void addtoindex(int *&arr, int &size, int const value, int const index) {

	int *atmp = (int*)malloc((size + 1) * sizeof(int));

	//Заповнення до
	for (int i = 0; i < index; i++) {
		atmp[i] = arr[i];
	}

	//Заповнення після
	for (int i = size; i > index; i--) {
		atmp[i] = arr[i - 1];
	}

	atmp[index] = value;

	free(arr);

	arr = atmp;
	size++;
}

void delindex(int *&arr, int &size, int const index) {

	int *atmp = (int*)malloc((size - 1) * sizeof(int));

	//Заповнення до
	for (int i = 0; i < index; i++) {
		atmp[i] = arr[i];
	}

	//Заповнення після
	for (int i = index; i < (size - 1); i++) {
		atmp[i] = arr[i + 1];
	}

	free(arr);

	arr = atmp;
	size--;
}

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
	int *arr = (int*)malloc(size * sizeof(int));

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
			arr = (int*)malloc(size * sizeof(int));

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
			if (index <= size && index >= 0) {
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



	/*int *ptr = (int*)malloc(sizeof(int));
	*ptr = 10;
	cout << ptr << endl;
	cout << *ptr << endl;*/

	//int *ptr = (int*)malloc(2*sizeof(int));
	//ptr[0] = 10;
	//ptr[1] = 20;
	//cout << ptr << endl;
	//cout << ptr[0] << endl;
	//cout << ptr[1] << endl;
	////cout << ptr[2] << endl;
	/*int *ptr = (int*)calloc(2,sizeof(int));
	ptr[0] = 10;
	ptr[1] = 20;
	cout << ptr << endl;
	cout << ptr[0] << endl;
	cout << ptr[1] << endl;

	ptr = (int*)realloc(ptr,3*sizeof(int));
	ptr[2] =30;
	cout << ptr[2] << endl;
	free(ptr);*/

	system("pause");
	return 0;
}