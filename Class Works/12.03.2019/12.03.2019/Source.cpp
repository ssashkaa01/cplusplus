# include <iostream>
# include <ctime>

using namespace std;

//

int main() {
	srand(unsigned(time(NULL)));

	/*
	
	C++ 
	Написати функції для роботи з динамічною матрицею: 
	Функція створення динамічної матриці розміром row x col 
	Функція заповнення матриці 
	Функція виводу матриці 
	Функція доповнення матриці новим рядком 
	Функція видалення з матриці рядка за вказаним номером 
	Функція вставки нового рядка за вказаним номером 
	Функція доповнення матриці новим стовпчиком 
	Функція видалення з матриці стовпця за вказаним номером 
	Функція вставки нового стовпця за вказаним номером 

	*/

	int cols = 0;
	int rows = 0;
	bool play = true;

	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;


	int **arr = new int *[rows];

	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 2;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}



	delete[]arr;

	system("pause");
	return 0;
}