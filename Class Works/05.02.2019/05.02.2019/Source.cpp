#include <iostream>

using namespace std;

int multiplication(int a, int b, int c) {
	
	return a * b * c;
}

int multiplication(int a, int b) {

	return a * b;
}

double multiplication(double a, double b, double c) {

	return a * b * c;
}

double multiplication(double a, double b) {

	return a * b;
}

int devide(int a, int b, int c) {

	return a / b / c;
}

int devide(int a, int b) {

	return a / b;
}

double devide(double a, double b, double c) {

	return a / b / c;
}

double devide(double a, double b) {

	return a / b;
}

int sum(int a, int b, int c) {

	return a + b + c;
}

int sum(int a, int b) {

	return a + b;
}

double sum(double a, double b, double c) {

	return a + b + c;
}

double sum(double a, double b) {

	return a + b;
}

int subtraction(int a, int b, int c) {

	return a - b - c;
}

int subtraction(int a, int b) {

	return a - b;
}

double subtraction(double a, double b, double c) {

	return a - b - c;
}

double subtraction(double a, double b) {

	return a - b;
}

int main() {

	int action = 0;
	int numbers = 0;
	double a, b, c;

	while (true)
	{

		cout << "1 - multiplication" << endl;
		cout << "2 - devide" << endl;
		cout << "3 - sum" << endl;
		cout << "4 - subtraction" << endl;

		cin >> action;

		if (action < 1 || action > 4) {
			continue;
		}

		cout << "Please enter count number:\n2 - 2 numbers\n3 - 3 numbers" << endl;

		cin >> numbers;

		if (numbers != 2 && numbers != 3) {
			continue;
		}

		cout << "Please enter number 1 - ";
		cin >> a;
		
		cout << "Please enter number 2 - ";
		cin >> b;

		if (b == 0 && action == 2) {
			cout << "No devide by zero!" << endl;
			system("pause");
			continue;
		}

		if (numbers == 3) {
			cout << "Please enter number 3 - ";
			cin >> c;

			if (c == 0 && action == 2) {
				cout << "No devide by zero!" << endl;
				system("pause");
				continue;
			}
		}

		if (action == 1) {

			if (numbers == 3) {
				cout << a << " x " << b << " x " << c << " = " << multiplication(a, b, c) << endl;
			}
			else {
				cout << a << " x " << b << " = " << multiplication(a, b) << endl;
			}
		}
		else if (action == 2) {

			if (numbers == 3) {

				cout << a << " / " << b << " / " << c << " = " << devide(a, b, c) << endl;	
			}
			else {
				
				cout << a << " / " << b << " = " << devide(a, b) << endl;
			}
		}
		else if (action == 3) {
			
			if (numbers == 3) {
				cout << a << " + " << b << " + " << c << " = " << sum(a, b, c) << endl;
			}
			else {
				cout << a << " + " << b << " = " << sum(a, b) << endl;
			}
		}
		else if (action == 4) {
			
			if (numbers == 3) {
				cout << a << " - " << b << " - " << c << " = " << subtraction(a, b, c) << endl;
			}
			else {
				cout << a << " - " << b << " = " << subtraction(a, b) << endl;
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}