#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double num;
	int k;

	cout << "Введите чупапное число: ";
	cin >> num;
	if (num < 10) {
		cout << "Это чупапное число меньше 10." << endl;
		k = 1;
	}
	else if (num == 10) {
		cout << "Это чупапное число равно 10." << endl;
		k = 2;
	}
	else {
		cout << "Это чупапное число больше, или равное 10." << endl;
		k = 3;
	}

	cout << "k = " << k << endl;

	return 0;
}