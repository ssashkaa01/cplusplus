#include <iostream>

using namespace std;

//����������� ���� ��� ����
int sum(int sum = 0, int point = 0) {

	sum += point;

	return sum;
}

//����������� ���������� �������������
float score(float score) {
	
	score /= 3;

	return score;
}

int main() {

	/*1. �� ��� ����� ǳ��� ���� ������� �������� ����������� ������ �� 0 �� 10.
 ������ ��������� ������ ������� �������� (�������� 3), ��� ������������ �� ������ �����������,
 ��� ��� ���������� �������� �� ������� ������. �������� ������ � �������.*/

	int users[3] = { 0, 0, 0 };
	int point = 0;
	bool setpoint;

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			setpoint = true;

			while (setpoint) {
				
				cout << "Please enter points for user " << i << " [" << j << "] >> 0 - 10" << endl;
				cin >> point;

				if (point <= 10 && point >= 0) {
					setpoint = false;
				}
			}
			
			users[i] = sum(users[i], point);
		}

		cout << endl << "Points for user " << i << " = " << score(users[i]) << endl << endl;
	}

	system("pause");
	return 0;
}