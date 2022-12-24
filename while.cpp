#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//cout << "Текст вывелся на экран" << endl;

	int a = 0;

	while (a < 10)
	{
		cout << "Переменная a = " << a << endl;
		a++;
	}

	return 0;
}