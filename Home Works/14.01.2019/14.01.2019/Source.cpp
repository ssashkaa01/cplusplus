# include <iostream>

using namespace std;

void bin(int n) {

	int arr[4] = {1,1,1,1};
	int i = 3;

	while(n % 2 == 0){
	    arr[i] = 0;
		n = n - (n / 2);
		i--;
	}

	for (int i = 0; i < 4; i++) {
		cout << arr[i];
	}
	cout << endl;
}

void numb(int numb) {
	bin(numb);
}

bool check(int arr[]) {

	for (int i = 0; i < 4; i++) {
		if (arr[i] > arr[i + 1] && i != 3) {
			return false;
		}
	}
	return true;
}


int main() {

	/*
	1.	�������� ���������� �������, 
	��� ������ ���� ����� � �������� ���� � ������� ������ ��������
	*/
	numb(8);
	
	/*
	2.	�������� ���������� ������ �������, 
	��� �������� �� ��������� � ������� ����� ������������� �� ����������(�� ���������). 
	*/

	int arr[4] = { 2,44,329,333 };
	
	if (check(arr)) {
		cout << "TRUE";
	}
	else {
		cout << "FALSE";
	}
	cout << endl;


	system("pause");
	return 0;
}