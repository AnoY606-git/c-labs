#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

// Копирование динамического массива

void FillArray(int* const arr, const int size) // Функция заполнения массива
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

void ShowArray(const int* const arr, const int size) // Функция вывода массива
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size = 0;

	cout << "Введите размер массива: ";
	cin >> size;
	cout << endl;

	int* firstArray = new int[size]; // Инициализируем первый массив
	int* secondArray = new int[size]; // Инициализируем второй массив


	FillArray(firstArray, size);
	FillArray(secondArray, size);


	cout << "fistArray = " << endl;
	ShowArray(firstArray, size);

	cout << "secondArray = " << endl;
	ShowArray(secondArray, size);

	delete[] firstArray;

	firstArray = new int[size]; // Создали новый массив

	for (int i = 0; i < size; i++) // Скопировали массив во второй массив
	{
		firstArray[i] = secondArray[i];
	}

	cout << "===============================================================================================" << endl << endl;

	cout << "fistArray = " << endl;
	ShowArray(firstArray, size);

	cout << "secondArray = " << endl;
	ShowArray(secondArray, size);

	delete [] firstArray;
	firstArray = nullptr;

	delete[] secondArray;
	secondArray = nullptr;

	return 0;
}