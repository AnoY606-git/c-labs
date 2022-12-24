#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	double fistNumber, twoNubmer;
	int variantOperation;

	cout << "Бебрадный калькулятор запущен..." << endl;

	cout << "Введите число: ";
	cin >> fistNumber;

	cout << "\nВведите второе число: ";
	cin >> twoNubmer;

	cout << "Варианты операций с числами:" << endl;
	cout << "1 - Сложение." << endl;
	cout << "2 - Вычитание." << endl;
	cout << "3 - Деление." << endl;
	cout << "4 - Умножение." << endl;
	cout << "Вариант: " << endl;
	cin >> variantOperation;

	switch (variantOperation)
	{
	case 1:
		cout << "Ваш ответ: " << fistNumber + twoNubmer;
		break;

	case 2:
		cout << "Ваш ответ: " << fistNumber - twoNubmer;
		break;

	case 3:
		cout << "Ваш ответ: " << fistNumber / twoNubmer;
		break;

	case 4:
		cout << "Ваш ответ: " << fistNumber * twoNubmer;
		break;

	default:
		cout << "Данного варианта нет в списке операций." << endl;
		break;
	}

	return 0;
}