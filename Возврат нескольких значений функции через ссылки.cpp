#include <iostream>
using namespace std;

// Возврат нескольких значений функции через ссылки.

void Foo(int &a, int &b, int &c) 
{
	a = 10;

	b *= 2;

	c -= 100;
}


int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0; int b = 4; int c = 34;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;

	Foo(a, b, c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;

	return 0;
}