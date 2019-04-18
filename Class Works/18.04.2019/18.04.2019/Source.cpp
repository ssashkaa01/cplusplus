#include <iostream>
#include <ctime>
#include "array.h"

using namespace std;

int main() {
	
	srand(time(NULL));

	///*Дана строка символов, которая обязательно заканчивается символом точки. 
	//Удалить из строки первые буквы каждого слова*/

	//char str[255] = "Hello world!I programmer.";
	//int i = 0;

	//while ((int)str[i] != 46) {
	//	
	//	str[0] = NULL;

	//	if ((int)str[i-1] == 32) {
	//		str[i] = NULL;
	//	}
	//	cout << str[i];
	//	i++;
	//}

	//cout << endl;

	///*Дан массив размера n, заполнить его случайными числами, 
	//Найти все нечётные числа массива.*/
	//int const size = 10;
	//int arr[size];

	//fillArray(arr,size);
	//printArr(arr, size);
	//cout << "-------" << endl;
	//coutPairedNumb(arr, size);





	/*Задача на динамическое выделение памяти.
	Изначально есть указатель на массив с одним элементом.
	Пользователь вводит число.
	Если оно больше 0 записываем его в массив.
	Далее пользователь вводит второе число, тут уже,
	если оно больше 0, надо пере выделять память для 2-х элементов массива
	и записать в массив второе число. И так далее…  для 3-х элементов, для 4-х…
	пока пользователь не введет отрицательное число.*/

	int size = 0;
	int *arr = new int[size];
	int number;
	bool addNumb = true;

	while (addNumb) {

		cout << "Please enter number" << endl;
		cin >> number;

		if (number > 0) {

			addNumber(number, arr, size);

		}
		else {

			printArr(arr, size);
			addNumb = false;
		}
	}
	
	/*Дана строка символов. Признак конца строки — символ 'n' (переход на новую строку). 
	Строка состоит из слов, которые отделены друг от друга пробелами. 
	Вывести самое длинное слово и его порядковый номер.*/

	//char str[255] = "Kyiv is the capital of Ukraine\n";
	//int i = 0;
	//int count = 0;
	//bool word = true;

	//while ((int)str[i] != 10) {
	//	
	//	//Почалося нове слово
	//	/*if ((int)str[i - count] == 32) {
	//		count++;
	//		
	//	}
	//	else */
	//	if((int)str[i] == 32){

	//		word = true;
	//		
	//		while (word) {
	//			i++;
	//			if ((int)str[i] == 32) {
	//				
	//				word = false;
	//			}
	//		//	cout << 1;
	//		//	cout << str[i];
	//		//	count++;
	//		//	cout << count;
	//		//	i++;
	//			//cout << str[i];
	//			//cout << "+++";
	//			cout << str[i];
	//			//i++;



	//		}
	//		
	//		//cout << endl;
	//		
	//	}
	//	//cout << str[i];
	//	i++;
	//}

	//cout << endl;

	system("pause");
	return 0;
}