#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	const int ROW = 2;
	const int COl = 2;

	int arr[ROW][COl]{};
	int number = 0;

	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COl; j++)
		{	
			cout << "Введите значение массива: ";

			cin >> number;

			arr[i][j] = number;
		}
	}

	cout << "Ваше значение массива: " << endl;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COl; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	system("PAUSE");
}