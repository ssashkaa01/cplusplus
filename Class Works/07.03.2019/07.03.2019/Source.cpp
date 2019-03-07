# include <iostream>
# include <ctime>

using namespace std;

//Çàïîâíåííÿ
void fill(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}

}

//Âèâ³ä
void print(int *const arr, int const size) {

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;// << "\t" << &arr[i] << endl;
	}

}

//Äîäàòè íà ê³íåöü
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

//Äîäàòè íà ïî÷àòîê
void addfirst(int *&arr, int &size, int const value) {

	int *atmp = new int[size + 1];

	for (int i = size; i > 0; i--) {
		atmp[i] = arr[i - 1];
	}

	atmp[0] = value;

	delete[] arr;

	arr = atmp;
	size++;
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


void delfirst(int *&arr, int &size) {

	int *atmp = new int[size - 1];

	for (int i = 0; i < (size - 1); i++) {
		atmp[i] = arr[i + 1];
	}

	delete[] arr;

	arr = atmp;
	size--;
}

void delend(int *&arr, int &size) {

	int *atmp = new int[size - 1];

	for (int i = 0; i < (size - 1); i++) {
		atmp[i] = arr[i];
	}

	delete[] arr;

	arr = atmp;
	size--;
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
		cout << "4 - add element to start" << endl;
		cout << "5 - add element to end" << endl;
		cout << "6 - add element to index" << endl;
		cout << "7 - delete array" << endl;
		cout << "8 - delete first element array" << endl;
		cout << "9 - delete end element array" << endl;
		cout << "10 - delete element to index" << endl;
		cout << "11 - add many element to index" << endl;
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
			cout << "Please enter element" << endl;
			cin >> value;
			cout << "Please enter index" << endl;
			cin >> index;
			if (index < size && index >= 0) {
				addtoindex(arr, size, value, index);
				cout << "[ OK ] add element to index" << endl;
			}
			else {
				cout << "[ ERROR ] index bad" << endl;
			}

			break;
		case 7:
			delete[] arr;
			cout << "[ OK ] array delete" << endl;
			break;

		case 8:
			
			delfirst(arr, size);
			cout << "[ OK ] deleted fisrt element array" << endl;
			break;

		case 9:
			
			delend(arr, size);
			cout << "[ OK ] deleted end element array" << endl;
			break;

		case 10:

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
		case 11:

			cout << "Please enter count elements" << endl;
			cin >> count;

			cout << endl;
			cout << "0 - add elements to start" << endl;
			cout << "1 - add elements to end" << endl;
			cout << "2 - add elements to index" << endl;
			cout << "Please enter action:" << endl;
			cout << endl;

			cin >> action;

			switch (action) {

			case 0:
				index = 0;

				break;
			case 1:

				index = size;
				break;
			
			case 2:

				cout << "Please enter index" << endl;
				cin >> index;
				
				break;
			}
			
			if (index <= size && index >= 0) {

				for (int i = 0; i < count; i++) {

					cout << "Please value element:" << endl;
					cin >> value;

					addtoindex(arr, size, value, index);
					cout << "[ OK ] add element to index" << index << endl;
					index++;
				}

			}
			else {
				cout << "[ ERROR ] index bad" << endl;
			}

			break;
		}
	}

	system("pause");
	return 0;
}