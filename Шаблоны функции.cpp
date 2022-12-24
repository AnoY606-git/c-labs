#include <iostream>
using namespace std;

// Шаблоны функций

template <typename T>
T Sum(T a, T b)
{
	return a + b;
}

template <typename T1, typename T2>
void Bebra(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	cout << Sum(5.12, 2.99) << endl;

	cout << Sum(10, 20) << endl;

	Bebra(20, "Бебра");

	return 0;
}