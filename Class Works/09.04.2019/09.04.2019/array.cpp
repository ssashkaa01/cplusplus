#include "array.h"
#include <iostream>
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

	int *atmp = new int[size + 1];

	//Заповнення до
	for (int i = 0; i < index; i++) {
		atmp[i] = arr[i];
	}

	//Заповнення після
	for (int i = size; i > index; i--) {
		atmp[i] = arr[i - 1];
	}

	atmp[index] = value;

	delete[] arr;

	arr = atmp;
	size++;
}

void delindex(int *&arr, int &size, int const index) {

	int *atmp = new int[size - 1];

	//Заповнення до
	for (int i = 0; i < index; i++) {
		atmp[i] = arr[i];
	}

	//Заповнення після
	for (int i = index; i < (size - 1); i++) {
		atmp[i] = arr[i + 1];
	}

	delete[] arr;

	arr = atmp;
	size--;
}
