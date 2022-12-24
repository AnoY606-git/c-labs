#include <iostream>
using namespace std;

// Рекурсия

int Foo(int a)
{
	if (a < 1)

		return 0;

	a--; // Уменьшение переменной a на один.

	cout << a << endl;
		
	return Foo(a); // Как только цикл доходит до данного значения, 
				   // он вызывает функцию заново и передает параметр переменной "a".
}

int main()
{
	setlocale(LC_ALL, "ru");

	Foo(5);

	return 0;
}