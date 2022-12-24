#include <iostream>
using namespace std;

void foo()
{
	cout << "Чупапи муняня: ";
}

//Функция для понимания

int Sum(int a, int b)
{
	int result;

	result = a + b;

	return result;
}

// Функция с оптимизацией кода

int Summ(int a, int b)
{
	return a + b;
}

//Основная программа

int main()
{
	setlocale(LC_ALL, "ru");

	foo();

	int c;
	int b;
	int q = 10;
	int w = 30;

	c = Sum(2, 5);

	b = Sum(q, w);

	cout << c << " ";
	cout << Sum(q, w) << " "; // Данный вывод можно использовать, если больше нигде не используется функция.
	cout << b << endl;

	return 0;
}