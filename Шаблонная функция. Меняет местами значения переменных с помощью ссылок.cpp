#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

// Шаблонная функция. Меняет местами значения переменных с помощью ссылок.

template <typename T>
void Replace(T &first, T &second)
{
	T bufer;

	bufer = first;

	first = second;
	
	second = bufer;

}


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int vvod;

	cout << "Программа SWAP вашего очка запущена..." << endl << endl;

	cout << "Выберите тип:" << endl;
	cout << "1. Целые числа." << endl;
	cout << "2. Дробные числа." << endl;
	cout << "3. Строки." << endl << endl;
	cout << "Ваш выбор: ";
	cin >> vvod;

	if (vvod == 1)
	{
		int a, b;
		cout << "Введите первое число: ";
		cin >> a;

		cout << "Введите второе число: ";
		cin >> b;

		Replace(a, b);

		cout << "Ваши числа: " << a << " " << b << endl;
	}
	else if (vvod == 2)
	{
		double a, b;
		cout << "Введите первое число: ";
		cin >> a;

		cout << "Введите второе число: ";
		cin >> b;

		Replace(a, b);

		cout << "Ваши числа: " << a << " " << b << endl;
	}
	else
	{
		string a, b;
		cout << "Введите первое слово: ";
		cin >> a;

		cout << "Введите второе слово: ";
		cin >> b;

		Replace(a, b);

		cout << "Ваши слова: " << a << " " << b << endl;
	}

	return 0;
}