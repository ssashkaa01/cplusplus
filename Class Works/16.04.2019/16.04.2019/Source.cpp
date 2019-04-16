#include <iostream>
#include <string>

using namespace std;

struct time {

	unsigned int year : 11;
	unsigned int hour : 5;
	unsigned int minute : 6;
	unsigned int second : 6;

};

int main() {

	int year = 0;
	cin >> year;

	time date;

	date.year = year;
	date.hour = 24;
	date.minute = 60;
	date.second = 60;

	cout << date.year << endl;
	cout << date.hour << endl;
	cout << date.minute << endl;
	cout << date.second << endl;

	system("pause");
	return 0;
}