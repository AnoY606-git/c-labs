#include <iostream>
using namespace std;

// Агрументы функции по умолчанию.

// Если установить значение переменной по умолчанию,
// тогда функция будет выводить то значание, которое мы использовали.

void Foo(int a = 5) 
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	Foo(); // Тут будет выводиться значение по умолчанию.
	cout << endl;

	Foo(20);

	return 0;
}