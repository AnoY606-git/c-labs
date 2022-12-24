#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

// 


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int* pa = new int;

	*pa = 10;

	cout << *pa << endl;

	delete pa; // Заичищаем данные в памяти.

	pa = nullptr; // Зачищаем указатель.

	return 0;
}