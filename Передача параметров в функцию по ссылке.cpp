#include <iostream>
using namespace std;

// Передача параметров в функцию по ссылке.

void Foo(int a) 
{
	a = 1;
}

void Foo2(int &a)
{
	a = 2;
}

void Foo3(int *a)
{
	*a = 3;
}

int main()
{
	setlocale(LC_ALL, "ru");

	int value = 5;
	
	cout << "Foo:" << endl;

	Foo(value);

	cout << "Value = " << value << endl << endl;

	cout << "Foo2:" << endl ;

	Foo2(value);

	cout << "Value = " << value << endl << endl;

	cout << "Foo3:" << endl;

	Foo3(&value);

	cout << "Value = " << value << endl << endl;

	return 0;
}