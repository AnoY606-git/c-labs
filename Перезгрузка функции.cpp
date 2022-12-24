#include <iostream>
using namespace std;

// Перегрузка функции

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

int main()
{
	setlocale(LC_ALL, "ru");

	double a, b, outp;
	int c, d, proverka, out;

	cout << "Варианты сложения чисел: \n1. Целые \n2. Дробные" << endl;
	cout << "Выберите вариант: ";

	cin >> proverka;

	if (proverka == 1)
	{
		cout << "Введите первое число: " << endl;
		cin >> c;

		cout << "Введите второе число: " << endl;
		cin >> d;

		out = Sum(c, d);
		
		cout << "Сумма равна: " << out;
	}
	else
	{
		cout << "Введите первое число: " << endl;
		cin >> a;

		cout << "Введите второе число: " << endl;
		cin >> b;

		outp = Sum(a, b);

		cout << "Сумма равна: " << outp;
	}

	return 0;
}