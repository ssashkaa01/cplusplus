# include <iostream>
# include <ctime>

using namespace std;

void fill(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 66 - 10;
	}

}

void print(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

}

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

int main() {

	srand(time(NULL));


	int size = 1;
	int value = 0;
	int count = 0;
	int index = 0;
	bool active = true;
	int action = 0;
	int *arr = new int[size];

	while (active) {

		cout << endl;
		cout << "0 - exit" << endl;
		cout << "1 - create array" << endl;
		cout << "2 - fill array" << endl;
		cout << "3 - print array" << endl;
		cout << "4 - add element to end" << endl;
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
			cout << "Please enter first element" << endl;
			cin >> value;
			addlast(arr, size, value);
			cout << "[ OK ] add first element" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}