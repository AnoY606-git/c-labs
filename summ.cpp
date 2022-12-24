#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int aboba, bebra;
	cout << "Введите первое число: ";
	cin >> aboba;
	cout << "Введите второе число: ";
	cin >> bebra;
	int chupapi = aboba + bebra;
	cout << "Ответ: " << chupapi << "\n";
	cout << "А по попе?" << endl;
	return 0;
}