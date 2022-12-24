#include <iostream>
using namespace std;

// Передача параметров в функцию по указателю.

void Foo(int *pa, int *pb, int *pc)
{
	(*pa) = 555;

	(*pb) = 100;

	(*pc) = -20;
}

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;
	int b = 0;
	int c = 1;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "Foo" << endl;

	Foo(&a, &b, &c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	return 0;
}