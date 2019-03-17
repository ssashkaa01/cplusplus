# include <iostream>
# include <ctime>

using namespace std;

void fill(int **const arr, int const size, int const cols) {

	for (int i = 0; i < size; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void print(int **const arr, int const size, int const cols) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void addlast(int **&arr, int &size, int const cols) {

	int **atmp = new int*[size + 1];

	for (int i = 0; i < size + 1; i++) {
		atmp[i] = new int[cols];
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i][j];
		}
	}

	for (int j = 0; j < cols; j++) {
		atmp[size][j] = rand() % 10;
	}

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}

	delete[] arr;

	arr = atmp;
	size++;
}

void addfirst(int **&arr, int &size, int const cols) {

	int **atmp = new int*[size + 1];

	for (int i = 0; i < size + 1; i++) {
		atmp[i] = new int[cols];
	}

	for (int i = size; i > 0; i--) {
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i-1][j];
		}
	}

	for (int j = 0; j < cols; j++) {
		atmp[0][j] = rand() % 10;
	}

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}

	delete[] arr;

	arr = atmp;
	size++;
}

void addtoindex(int **&arr, int &size, int const cols, int const index) {

	int **atmp = new int*[size + 1];

	for (int i = 0; i < size + 1; i++) {
		atmp[i] = new int[cols];
	}

	//Заповнення до
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i][j];
		}
	}

	//Заповнення після
	for (int i = size; i > index; i--) {
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i-1][j];
		}
	}

	for (int j = 0; j < cols; j++) {
		atmp[index][j] = rand() % 10;
	}

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}

	delete[] arr;

	arr = atmp;
	size++;
}

void addtoindexcol(int **&arr, int &size, int &cols, int const index) {

	int **atmp = new int*[size];

	for (int i = 0; i < size + 1; i++) {
		atmp[i] = new int[cols + 1];
	}

	
	for (int i = 0; i < size; i++) {
		
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i][j];
			atmp[i][j] = rand() % 10;

		}
		for (int j = cols; j > index; j--) {
			atmp[i][j] = arr[i][j - 1];
			atmp[i][j-1] = rand() % 10;
		}
	}

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}

	delete[] arr;

	arr = atmp;
	cols++;
}

void delindex(int **&arr, int &size, int const index, int const cols) {

	int **atmp = new int*[size - 1];

	for (int i = 0; i < size - 1; i++) {
		atmp[i] = new int[cols];
	}

	//Заповнення до
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i][j];
		}
	}

	//Заповнення після
	for (int i = index; i < (size - 1); i++) {
		for (int j = 0; j < cols; j++) {
			atmp[i][j] = arr[i + 1][j];
		}
	}

	for (int j = 0; j < cols; j++) {
		atmp[index][j] = rand() % 10;
	}

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}

	delete[] arr;

	arr = atmp;
	size--;
}

void delindexcol(int **&arr, int &size, int const index, int &cols) {

	int **atmp = new int*[size];

	for (int i = 0; i < size; i++) {
		atmp[i] = new int[cols - 1];
	}

	for (int i = 0; i < size; i++) {
		
		for (int j = 0; j < index; j++) {
			atmp[i][j] = arr[i][j];
		}
		for (int j = index; j < cols; j++) {
			atmp[i][j] = arr[i][j+1];
		}
	}

	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}

	delete[] arr;

	arr = atmp;
	cols--;
}

int main() {

	srand(unsigned(time(NULL)));

	int cols = 0;
	int size = 1;
	int value = 0;
	int count = 0;
	int index = 0;
	bool active = true;
	int action = 0;
	int **arr = new int*[size];

	while (active) {

		cout << endl;
		cout << "0 - exit" << endl;
		cout << "1 - create array" << endl;
		cout << "2 - fill array" << endl;
		cout << "3 - print array" << endl;
		cout << "4 - add row to start" << endl;
		cout << "5 - add row to end" << endl;
		cout << "6 - add row to index" << endl;
		cout << "7 - delete this" << endl;
		cout << "8 - add col" << endl;
		cout << "9 - add col to index" << endl;
		cout << "10 - delete col to index" << endl;
		cout << "11 - delete row to index" << endl;
		cout << "Please enter action:" << endl;
		cout << endl;

		cin >> action;

		switch (action) {

		case 0:
			active = false;
			break;
		case 1:

			cout << "Enter Rows: " << endl;
			cin >> size;
			cout << "Enter Cols: " << endl;
			cin >> cols;
			arr = new int*[size];

			cout << "[ OK ] array create" << endl;
			break;
		case 2:

			fill(arr, size, cols);
			cout << "[ OK ] array filled" << endl;
			break;
		case 3:

			print(arr, size, cols);

			break;
		case 4:
			cout << "Please enter first element" << endl;
			cin >> value;
			addfirst(arr, size, cols);
			cout << "[ OK ] add first element" << endl;
			break;

		case 5:

			addlast(arr, size, cols);
			cout << "[ OK ] add last element" << endl;
			break;
		case 6:
			
			cout << "Please enter index" << endl;
			cin >> index;
			if (index < size && index >= 0) {
				addtoindex(arr, size, cols, index);
				cout << "[ OK ] add element to index" << endl;
			}
			else {
				cout << "[ ERROR ] index bad" << endl;
			}

			break;
		case 7:
			for (int i = 0; i < size; i++) {
				delete[]arr[i];
			}

			delete[] arr;
			cout << "[ OK ] array delete" << endl;
			break;

		case 8:

			addtoindexcol(arr, size, cols, 0);
			cout << "[ OK ] add cols" << endl;
			break;

		case 9:

			cout << "Please enter index" << endl;
			cin >> index;
			
			addtoindexcol(arr, size, cols, index);
			cout << "[ OK ] add col to index" << endl;
		
			break;

		case 10:


			cout << "Please enter index" << endl;
			cin >> index;

			if (index < cols && cols >= 0) {
				delindexcol(arr, size, index, cols);
				cout << "[ OK ] del col to index" << endl;
			}
			else {
				cout << "[ ERROR ] index bad" << endl;
			}

			break;

		case 11:

			cout << "Please enter index" << endl;
			cin >> index;

			if (index < size && index >= 0) {
				delindex(arr, size, index,cols);
				cout << "[ OK ] del element to index" << endl;
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