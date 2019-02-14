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
	1.	Написати рекурсивну функцію, 
	яка отримує ціле число і виводить його у двійковій системі числення
	*/
	numb(8);
	
	/*
	2.	Написати рекурсивну логічну функцію, 
	яка перевіряє чи переданий у функцію масив впорядкований за зростанням(не спаданням). 
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