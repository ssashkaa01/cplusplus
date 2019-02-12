#include <iostream>
#include <ctime>

using namespace std;

int const ARR = 5;
int i = 0, j = 0;

template <class T>
void print(T arr[]) {

	for (i = 0; i < ARR; i++) {
		cout << arr[i] << endl;
	}
}

template <class T>
void fill(T arr[]) {

	for (i = 0; i < ARR; i++) {
		arr[i] = rand() % 100 + 0;
	}
}

//true - зростання
//false - спадання
template <class T>
void sort(T arr[], bool sort) {

	T tmp = 0;

	if (sort) {
		
		for (i = 0; i < ARR; i++) {

			for (j = 0; j < ARR; j++) {

				if (arr[i] < arr[j + 1]) {
					tmp = arr[j + 1];
					arr[j + 1] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
	else {

		for (i = 0; i < ARR; i++) {
			
			for (j = -1; j < ARR -1 ; j++) {
				
				if (arr[i] > arr[j + 1]) {
					tmp = arr[j + 1];
					arr[j + 1] = arr[i];
					arr[i] = tmp;
				}
			}
		}
	}
}


int main() {

	srand(time(NULL));

	int arr[ARR] = {};

	fill(arr);

	cout << "OLD ARRAY" << endl << endl;
	print(arr);

	cout << endl << "NEW ARRAY" << endl;
	sort(arr, true);
	print(arr);


	


	
	system("pause");
	return 0;
}