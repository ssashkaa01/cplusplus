#include <iostream>
#include <ctime>

using namespace std;

//ЗАВДАННЯ 1
/*

	1. Сгенерировать десять массивов из случайных чисел.
	Вывести их и сумму их элементов на экран.
	Найти среди них один с максимальной суммой элементов.
	Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
	Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.

*/
/*
int const ROW = 10;

//Заповнення
void fill(int arr[]) {

	for (int i = 0; i < ROW; i++) {
		arr[i] = rand() % 100 + 0;
	}
}

//Вивід
void print(int arr[]) {
	
	for (int i = 0; i < ROW; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

//Сума
int sum(int arr[]) {
	
	int sum = 0;

	for (int i = 0; i < ROW; i++) {
		sum += arr[i];
	}

	return sum;
}

int main() {

	srand(time(NULL));

	int arr[ROW][ROW] = {};
	int tmp = 0;
	int summ = 0;
	int row = 0;

	
	for (int i = 0; i < ROW; i++) {

		//Заповнення
		fill(arr[i]);

		//Вивід
		cout << "ARRAY " << i << endl;
		print(arr[i]);

		//Підрахунок суми масиву
		tmp = sum(arr[i]);
		if (tmp > summ) {
			summ = tmp;
			row = i;
		}
		cout << "SUM - " << tmp << endl << endl;
	}

	//Вивід найбільшого масиву
	cout << endl << endl << "BIG ARRAY - " << row << endl;
	cout << "SUM - " << summ << endl << endl;
	print(arr[row]);
	cout << endl;
	
	system("pause");
	return 0;
}
*/

/*
2. Банкомат.Реалізувати перевантажені функції там, де це необхідно.
-   Є реєстрація користувача(логін по номеру карти(масив  int),пароль(масив int),
або логін по номеру телефону(масив int)).
-   Вхід в аккаунт через логін і пароль або через логін і номер телефону(масив int).
-	Переказ грошей або на картку або на телефон.
-	Вивід грошей або ціле число(передати int) або дробове число(передати double). Перевірити баланс(на екра).
*/

int const ROW = 3;

//Вивід грошей
template <class T>
void output(T count, int card[]) {

	if (card[2] >= count) {
		card[2] -= count;
		cout << "-" << count << " UAH" << endl;
	}
	else {
		cout << "Not money..." << endl;
	}

	cout << "Your balance - " << card[2] << " UAH" << endl << endl;

}

int main() {

	//Карти
	// card[0][0] - номер карти
	// card[0][1] - пароль
	// card[0][2] - гроші
 	
	int card[ROW][3] = {
		{123456,1234,1000},
		{654321,4321,4000},
		{111111,1111,10000}
	};

	int number_card = 0;

	bool doing = true;
	bool auth = false;

	while (doing) {

		int action;

		cout << "MENU:" << endl;
		cout << "0 - exit" << endl;

		//Авторизація
		if (!auth) {
			
			int login = 0;
			int pass = 0;
			int count = 3;

			cout << "Please enter number card:" << endl;
			cin >> login;

			for (int i = 0; i < ROW; i++) {

				if (card[i][0] == login) {

					while (count > 0)
					{
						cout << "Please enter password:" << endl;
						cin >> pass;

						if (pass == card[i][1]) {
							number_card = i;
							count = 0;
							auth = true;
							i = ROW;
						}
						else {
							count--;
						}
					}
				}
				else {
					cout << "Not found card!" << endl;
					i = ROW;
				}
			}
		}

		if (auth) {

			int transfer = 0;
			int tcard = 0;

			cout << "1 - money transfer to card" << endl;
			cout << "2 - output money" << endl;
			cin >> action;

			switch (action)
			{
				//Вихід
			case 0:
				doing = false;
				break;

				//Переказ грошей
			case 1:

				cout << "Please enter card:" << endl;
				cin >> tcard;

				for (int i = 0; i < ROW; i++) {
					if (card[i][0] == tcard) {
						cout << "Card Found..." << endl;
						tcard = i;
						i = ROW;
					}
					else {
						cout << "Not fount card!" << endl;
						i = ROW;
					}
				}

				cout << "Please enter transfer money:" << endl;
				cin >> transfer;

				if (card[number_card][2] < transfer) {
					cout << "Not money..." << endl;
					
				}
				else {
					card[number_card][2] -= transfer;
					card[tcard][2] += transfer;
					cout << "SUCCESS!" << endl;
				}

				cout << "Your balance - " << card[number_card][2] << " UAH" << endl << endl;
				break;

				//Вивід грошей
			case 2:

				int money = 0;

				cout << "Please enter output money:" << endl;
				cin >> money;

				output(money, card[number_card]);
				break;
			}
		}
	}
}