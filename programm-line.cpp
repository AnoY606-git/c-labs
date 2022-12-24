#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int symbolLength;
	char symbol;
	int lineType;
	int cursor = 0;

	cout << "Введите длину строки: ";
	cin >> symbolLength;

	cout << "Введите тип символа для линии: ";
	cin >> symbol;

	cout << "Введите тип линии:\n" << "1. Горизонтальная\n" << "2. Вертикальная\n" << "Ваш выбор: ";
	cin >> lineType;

	switch (lineType)
	{
	case 1:
		while (cursor != symbolLength)
		{
			cout << symbol << endl;
			cursor++;
		}
		break;

	case 2:
		while (cursor != symbolLength)
		{
			cout << symbol;
			cursor++;
		}
		break;

	default:
		cout << "Данного типа нет в списке." << endl;
		break;
	}

	return 0;
}