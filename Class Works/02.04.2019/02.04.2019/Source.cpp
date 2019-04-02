#include <iostream>

using namespace std;

#define MAX(a,b,c)(( (((a)>(b) ? (a):(b)) == ((a)>(c) ?(a):(c)) ) ?(a):(b)) != (a)?((b) > (c)?(b):(c)):(a)  )

int main() {

	/*
	C++  
Написати макрос (макро-функцію), 
який знаходить та повертає максимальне з трьох переданих йому чисел */

	cout << MAX(20, 3, 177) << endl;;

	system("pause");
	return 0;
}