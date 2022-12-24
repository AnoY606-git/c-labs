#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

// Двумерный динамический массив


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int rows = 0;

	int cols = 0;

	cout << "Введите количество строчек: ";
	cin >> rows;

	cout << "Введите количество колонок: ";
	cin >> cols;


	int** arr = new int* [rows]; // Инициализация указателя на массив

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}


	for (int i = 0; i < rows; i++) // Заполнение массива случайными числами
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}


	for (int i = 0; i < rows; i++) // Вывод массива на экран
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}



	for (int i = 0; i < rows; i++) // Очистка массива
	{
		delete [] arr[i];
	}

	delete [] arr; // Очистка указателей на массив

	arr = nullptr;

	return 0;
}