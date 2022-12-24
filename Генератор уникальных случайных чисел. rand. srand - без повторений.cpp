#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	srand(time(NULL)); // Если закомментировать данную функцию, тогда элементы будут всегда одинакомыми.

	const int SIZE = 10;
	int arr[SIZE];

	bool alreadyThere; // Переменная для проверки на истину.

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRanomValue = rand() % 20; // +5 для отсчёта от 5 - ти.

		for (int j = 0; j < i; j++) // Цикл для поиска переменной "newRanomValue" в массиве.
		{
			if (arr[j] == newRanomValue) 
			{
				alreadyThere = true;
				break; // Для того, чтобы не звходить в цикл.
			}
		}

		if (alreadyThere = true)
		{
			arr[i] = newRanomValue; // При первом заходе в массив, тут будет элемент из массива.
			i++; // Переносим переход сюда, чтобы двигаться с нулевой ячейки массива на первую.
		}

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	system("PAUSE");
}