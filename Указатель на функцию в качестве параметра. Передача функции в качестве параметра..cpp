#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

// Указатель на функцию в качестве параметра. Передача функции в качестве параметра.

string GetDataFromBD() // Get означает получения данных из какого-то места.
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From Web Server";
}

void ShowInfo(string(*foo)()) // Делаем указатель на функцию, для передачи данных функции.
{
	cout << foo() << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ShowInfo(GetDataFromBD); // Подставляем любую функцию типа string для вывода данных.


	return 0;
}