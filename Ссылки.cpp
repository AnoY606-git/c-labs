#include <iostream>
using namespace std;

// Ссылки



int main()
{
	setlocale(LC_ALL, "ru");

	int a = 5;

	int* pa = &a;

	int &aRef = a;

	cout << "a " << a << endl;

	cout << "&aRef\t" << aRef << endl;

	cout << "*pa\t" << *pa << endl; // Если использовать &, то в консоль выведется адрес ячейки памяти.

	cout << "========================================" << endl;

	int* paa = &aRef;

	*paa = 10;

	cout << "a " << a << endl;

	cout << "========================================" << endl;

	aRef = 100;

	cout << "&aRef\t" << aRef << endl;

	return 0;
}