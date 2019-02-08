# include <iostream>
# include <ctime>

using namespace std;

const int SIZE = 7;

//����������
void Fill(int arr[SIZE]) {

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 80 - 26;
	}
}

//���������
void Print(int arr[SIZE]) {

	int min = 54;
	int sum = 0;
	int elem = 0;

	cout << "Please enter last sum index element:" << endl;
	cin >> elem;

	for (int i = 0; i < SIZE; i++) {

		//��������� ��������
		if (min > arr[i] && elem <= i) {
			min = arr[i];
		}
		//��������� ����
		sum += arr[i];
	}

	cout << "MIN - " << min << endl;
	cout << "SUM - " << sum << endl;
}

int main() {

	srand(time(NULL));

	int arr[SIZE] = {};

	/*1. �������� ������� �������, �� � ����� ��������� ��������� ����������� ����� � ���� ���������. 
	��������� ������ ������� ��� ����������� ������ ������� 10 �� ������� 7.
������� Fill(), ��� �������� ����������� ����� ����������� ���������� � ������� [-26..54] 
������� Print(), ��� �������� �������� ������ �� ����� 
������������ �������:
- ��� ����������� ���� �������� ������
- ��� ����������� ���������� �������� ������ �� ������� ������� ��� ������� (�� ������� �� ��������� �������) 
*/

	Fill(arr);
	Print(arr);

	system("pause");
	return 0;
}