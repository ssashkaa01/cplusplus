#include <iostream>
#include "array.h"

using namespace std;

void addNumber(int const number, int *&arr, int &size) {

	int *newArr = new int[size + 1];

	for (int i = 0; i < size; i++) {

		newArr[i] = arr[i];
	}

	newArr[size] = number;

	delete[]arr;

	arr = newArr;

	size++;

	cout << "Number added" << endl;
}

void printArr(int *arr, int const size) {

	for (int i = 0; i < size; i++) {

		cout << "arr[" << i << "] = " << arr[i] << endl;

	}
}

void fillArray(int *arr, int const size) {

	for (int i = 0; i < size; i++) {

		arr[i] = rand() % 100 + 0;

	}
}

void coutPairedNumb(int *arr, int const size) {

	for (int i = 0; i < size; i++) {

		if (arr[i] % 2 != 0) {

			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
}