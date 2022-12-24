#include <iostream>
using namespace std;

// Рекурсия. Факториал. 

int Fact(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * Fact(N - 1);
}

int main()
{
	setlocale(LC_ALL, "ru");

	int a, b;

	cout << "Введите число для вычисления факториала: ";
	cin >> a;

	b = Fact(a);

	cout << "Результат: " << b << endl;

	return 0;
}