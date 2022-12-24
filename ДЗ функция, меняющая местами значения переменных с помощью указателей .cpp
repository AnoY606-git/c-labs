#include <iostream>
using namespace std;

// Передача параметров в функцию по указателю.

void Foo(int *pa, int *pb, int *pc)
{
	*pc = *pa;

	*pa = *pb;

	*pb = *pc;

}

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 10;
	int b = 20;
	int c;

	Foo(&a, &b, &c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}