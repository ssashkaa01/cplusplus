#include <iostream>

using namespace std;

int main() {

	/*�������� 3 ��������� ������ ������ ����. ��������� �� ������� ����������. 
	��������� � ������� �� ����� �� �������, � ����� ��� �������� ��������� ������*/
	
	int *a = new int;
	int *b = new int;
	int *c = new int;

	*a = 5;
	*b = 15;
	*c = 20;

	cout << *a << endl;
	cout << *b << endl;
	cout << *c << endl;

	cout << endl << "Dobutok - " << *a * *b * *c << endl;

	*a = NULL;
	*b = NULL;
	*c = NULL;

	delete a;
	delete b;
	delete c;

	system("pause");
	return 0;
}