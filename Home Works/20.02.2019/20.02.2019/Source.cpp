#include <iostream>

using namespace std;

template <class T>
void sum(T *a, T *b, T *res) {
	*res = *a + *b;
}

template <class T>
void minusa(T *a, T *b, T *res) {
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

void bignmumb(int *n1, int *n2) {
	if (*n1 > *n2) {
		cout << "Big number - " << *n1 << endl;
	}
	else {
		cout << "Big number - " << *n2 << endl;
	}
}

void obmen(int *n1, int *n2, int *n3) {

	int tmp = *n1;
	*n1 = *n3;
	*n3 = *n2;
	*n2 = tmp;

}

void see(int *n1, int *n2, int *n3) {

	cout << "n1 = " << *n1 << endl;
	cout << "n2 = " << *n2 << endl;
	cout << "n3 = " << *n3 << endl << endl;

}

int main() {

	/*
	1. 	Используя указатели и оператор разыменования, определить наибольшее из двух чисел
	*/
	int numb1 = 10;
	int numb2 = 15;
	int *pnumb1 = &numb1;
	int *pnumb2 = &numb2;
	bignmumb(pnumb1, pnumb2);
	cout << endl;
	/*
	2.	Используя указатели и оператор разыменования, обменять местами значения 3-x переменных.
	*/

	int n1 = 5;
	int n2 = 3;
	int n3 = 8;
	int *pn1 = &n1;
	int *pn2 = &n2;
	int *pn3 = &n3;
	see(pn1, pn2, pn3);
	obmen(pn1, pn2, pn3);
	see(pn1, pn2, pn3);

	/*
	3.	Написать примитивный калькулятор, пользуясь только указателями.
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
			cinab(pa, pb);
			sum(pa, pb, pres);
			cout << "Result - " << res << endl; 
			break;
		case 2:
			cinab(pa, pb);
			minusa(pa, pb, pres);
			cout << "Result - " << res << endl;
			break;
		case 3:
			cinab(pa, pb);
			dil(pa, pb, pres);
			cout << "Result - " << res << endl;
			break;
		case 4:
			cinab(pa, pb);
			dobutok(pa, pb, pres);
			cout << "Result - " << res << endl;
			break;
		}
	}

	system("pause");
	return 0;
}