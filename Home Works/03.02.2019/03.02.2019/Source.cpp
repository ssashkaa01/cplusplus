#include <iostream>

using namespace std;

//Знаходження суми всіх балів
int sum(int sum = 0, int point = 0) {

	sum += point;

	return sum;
}

//Знаходження середнього арифметичного
float score(float score) {
	
	score /= 3;

	return score;
}

int main() {

	/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10.
 Знайти підсумкову оцінку кожного учасника (учасників 3), яка обчислюється як середнє арифметичне,
 але без врахування найкращої та найгіршої оцінок. Виконати задачу з функіями.*/

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