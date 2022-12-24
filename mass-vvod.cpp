#include <iostream>
#include <Windows.h>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	cout << "\nВаш массив: ";

	for (int i = 0; i < 10; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}