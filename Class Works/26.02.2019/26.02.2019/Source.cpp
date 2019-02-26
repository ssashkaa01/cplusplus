#include <iostream>

using namespace std;

/*
void dobutok(int &a, int &b, int &c) {

	cout << "Dobutok = " << a * b * c << endl;

}

void medium(int &a, int &b, int &c) {

	cout << "Medium = " << (a + b + c)/3 << endl;

}

void min(int &a, int &b, int &c) {

	if (a > b && b < c) {
		cout << "Min = " << b << endl;
	}
	else if (b > a && a < c) {
		cout << "Min = " << a << endl;
	}
	else if (b > c && c < a) {
		cout << "Min = " << c << endl;
	}
}
*/

void minimal(int *arr) {

	int min = 100;
	for (int i = 0; i < 5; i++) {

		if (arr[i] < min) {
			min = arr[i];
		}

		if (arr[i] < 0) {
			cout << "0 > " << arr[i] << endl;
			cout << "Adress = " << &arr[i] << endl;
			arr[i] = 0;
		}

	}

	min *= 2;
	cout << "Min = " << min << endl;
	cout << "Adress = " << &min << endl;
}

int main() {
	
	/*C++ 
Дано три числа. 
Оголосити посилання на ці числа. 
Отримати добуток трьох заданих чисел, 
середє арифметичне, 
найменше з них, 
користуючись непрямим доступом до чисел (через посилання). */

	/*
	int a = 10, b = 20, c = 30;
	int &ra = a, &rb = b, &rc = c;

	dobutok(ra, rb, rc);
	medium(ra, rb, rc);
	min(ra, rb, rc);
	*/

	/*
	C++ 
Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву. 
За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву. 
	*/

	int arr[5] = {4, -5, 9, -18, 30};

	minimal(arr);

	system("pause");
	return 0;
}