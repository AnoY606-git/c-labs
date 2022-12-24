#include <iostream>
using namespace std;

// Передача параметров в функцию по указателю.

void Foo(int *pa)
{
	(*pa)++;
}

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 0;

	cout << a << endl;

	Foo(&a);

	cout << a << endl;

	return 0;
}