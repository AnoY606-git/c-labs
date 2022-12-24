#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int const SIZE = 10;
	int arr[SIZE];

	srand(time(NULL)); // Если закомментировать данную функцию, тогда элементы будут всегда одинакомыми.

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20; // + 5 для отсчёта от 5-ти.
	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	system("PAUSE");
	return 0;
}