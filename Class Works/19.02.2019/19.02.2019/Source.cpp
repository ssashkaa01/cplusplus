#include <iostream>

using namespace std;

/*
template <class T>
void dobutok(T *pa, T *pb, T *pc, T *rdobutok) {

	*rdobutok = *pa * *pb * *pc;
	
}

template <class T>
void medium(T *pa, T *pb, T *pc, T *medium) {

	*medium = (*pa + *pb + *pc) / 3;
}

template <class T>
void min(T *pa, T *pb, T *pc, T *rmin) {

	if (*pa > *pb && *pb < *pc) {
		*rmin = *pb;
	}
	else if (*pb > *pa && *pa < *pc) {
		*rmin = *pa;
	}
	else if (*pb > *pc && *pc < *pa) {
		*rmin = *pc;
	}
}
*/

template <class T>
void sum(T *a, T *b, T *res) {
	*res = *a + *b;
}

template <class T>
void minus(T *a, T *b, T *res) {
	*res = *a - *b;
}

template <class T>
void dil(T *a, T *b, T *res) {
	
	if (*b != 0) {
		*res = *a / *b;
	}
	else {
		cout << "Dilnnya na zero!" << endl;
	}
}

template <class T>
void dobutok(T *a, T *b, T *res) {
	*res = *a * *b;
}

template <class T>
void cinab(T *a, T *b) {
	cout << "Please enter number 1: " << endl;
	cin >> *a;
	cout << "Please enter number 2: " << endl;
	cin >> *b;
}



int main() {

	/*
	C++ 
Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох заданих чисел, середє арифметичне, 
найменше з них, користуючись непрямим доступом до чисел (через вказівники).
	*/
	/*
	int a = 10; int b = 20; int c = 30;
	int rdobutok = 0;
	int rmedium = 0;
	int rmin = 0;

	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	int *prdobutok = &rdobutok;
	int *prmedium = &rmedium;
	int *prmin = &rmin;

	dobutok(pa, pb, pc, prdobutok);
	cout << "Dobutok: " << rdobutok << endl;

	medium(pa, pb, pc, prmedium);
	cout << "Medium: " << rmedium << endl;

	min(pa, pb, pc, prmin);
	cout << "Min: " << rmin << endl;

	*/

	int a = 0;
	int b = 0;
	int res = 0;
	int action = 0;
	int *pa = &a;
	int *pb = &b;
	int *pres = &res;

	bool calc = true;

	while (calc) {

		cout << "0 - exit" << endl;
		cout << "1 - sum" << endl;
		cout << "2 - minus" << endl;
		cout << "3 - dil" << endl;
		cout << "4 - dobutok" << endl;
		cout << "Please enter action:" << endl;
		cin >> action;

		switch (action)
		{
		case 0:
			calc = false;
			break;
		case 1:
			//cinab(*a, *b);
			//sum(*a, *b, *res);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		}
	}




	system("pause");
	return 0;
}