# include <iostream>

using namespace std;

void del(char *str, char letter) {

	int len = strlen(str);

	for (int i = 0; i < len; i++) {

		if (letter == str[i]) {
			str[i] = ' ';
		}
	}
}

void stat(char *str) {

	int sgol = 0;
	int sprigol = 0;
	int spunkt = 0;
	int probil = 0;
	int len = strlen(str);
	char gol[] = "aAeEiIoOuUyY";
	char progol[] = "";

	for (int i = 0; i < len; i++) {

		//�� �����
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {

			bool golos = false;

			for (int j = 0; j < 12; j++) {

				if (gol[j] == str[i]) {

					sgol++;
					golos = true;
				}

			}

			if (!golos) {
				sprigol++;
			}
		}
		//�� ����������� �����
		else {
			if ((int)str[i] == 32) {
				probil++;
			}
			else {
				spunkt++;
			}
		}
	}

	cout << "GOLOSNI - " << sgol << endl;
	cout << "PRIGOLOSNI - " << sprigol << endl;
	cout << "SPACE - " << probil << endl;
	cout << "ZNAKI - " << spunkt << endl;


}

int main() {

	/*
	1) ���� �����. 
	�������� �� ����� ������� ������. 
	��������� ��������� � ������ �����. 

	2) ��������� ��������, ��� ����� � ������ �����, 
	� ���� ���� ����������: 
	������� ��������� ������� (whitespaces), 
	��������, 
	�����������, 
	����� ����������. */

	char str[255];
	char letter;

	cout << "Please enter string:" << endl;

	cin.getline(str,255);

	//����������
	stat(str);

	//���������

	cout << "Please enter letter for delete:" << endl;
	cin >> letter;

	del(str, letter);

	cout << str << endl;

	cout << endl;
	system("pause");
	return 0;
}