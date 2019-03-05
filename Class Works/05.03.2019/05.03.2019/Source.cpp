# include <iostream>
# include <ctime>

using namespace std;

void fill(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}

}

void print(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << "\t" << &arr[i] << endl;
	}

}

void addlast(int *&arr, int const size, int const value) {

	int *atmp = new int[size + 1];

	for (int i = 0; i < size; i++) {
		atmp[i] = arr[i];
	}

	atmp[size] = value;

	delete[] arr;

	arr = atmp;
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

	/*int size = 5;
	int *arr1 = new int[size];
	int *arr2 = new int[size];

	fill(arr1, size);
	fill(arr2, size);

	cout << endl << "ARR 1" << endl;
	print(arr1, size);
	cout << endl << "ARR 2" << endl;
	print(arr2, size);

	copy(arr1, arr2, size);

	cout << endl << "COPY" << endl;
	cout << endl << "ARR 1" << endl;
	print(arr1, size);
	cout << endl << "ARR 2" << endl;
	print(arr2, size);

	delete[] arr2;*/

	int size = 5;
	int value = 0;
	int *arr = new int[size];

	cout << "ARR" << endl;
	fill(arr, size);
	print(arr, size);

	cout << endl << "EDIT ARRAY" << endl;

	cout << "Please enter last element" << endl;
	cin >> value;

	addlast(arr, size, value);

	print(arr, size+1);


	system("pause");
	return 0;
}