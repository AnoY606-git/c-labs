#include <iostream>
#include <Windows.h>
using namespace std;

// Изменить размер массива. Удалить. Добавить элемент в массив. Увеличение массива.

// Функция заполнения массива.

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

// Функция вывода массива.

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
 	}
	cout << endl << endl;
}

void push_back(int*& arr, int& size, const int value)
{
	int* NewArray = new int[size + 1] {NULL}; // size + 1 для увеличения массива на 1 ячейку.

	for (int i = 0; i < size; i++) // Цикл для копирования массива в новый массив из size + 1 элементов.
	{
		NewArray[i] = arr[i];
	}

	NewArray[size++] = value; // Присваиваем последней ячейке значение переменной value. 
	// Инкремент для того, чтобы указать, что массив стал больше на один элемент. 

	delete[] arr;

	arr = NewArray; // Присваеваем указатель на новый массив.
}

// Функция для удаления последнего элемента массива.

void pop_back(int*& arr, int& size)
{
	size--;
	int* NewArray = new int[size] {NULL};

	for (int i = 0; i < size; i++)
	{
		NewArray[i] = arr[i];
	}

	delete[] arr;

	arr = NewArray;
}

// Функция для добавления элемента в начало массива.

void replaceFirstElement_array(int*& arr, int& size, const int value)
{
	int* NewArray = new int[size + 1];

	NewArray[0] = value;
	NewArray[size++];

	for (int i = 1; i < size; i++)
	{
		NewArray[i] = arr[i - 1];
	}
	delete[] arr;

	arr = NewArray;
}

// Функция для замены элемента на кастомный, при смещении следующих элементов.

void replaceAnyElement_array(int*& arr, int& size, const int value, const int Number)
{
	int* NewArray = new int[size + 1] {NULL};
	NewArray[size++];

	for (int i = 0; i < size; i++)
	{
		if (i < Number)
		{
			NewArray[i] = arr[i];
		}
		else if
			(i == Number)
		{
			NewArray[i] = value;
		}
		else if
			(i > Number)
		{
			NewArray[i] = arr[i - 1];
		}
	}

	delete[] arr;

	arr = NewArray;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size = 0;
	int value = 0;
	int numberArray = 0;

	cout << "Бебрадная программа для увеличения массива на 1 элемент запущена..." << endl;

	cout << "Введите размер массива: ";
	cin >> size;
	cout << endl;

	cout << "Введите любое целочисленное значени, которое надо внести в массив: ";
	cin >> value;
	cout << endl;

	int* arr = new int [size] {NULL};

	FillArray(arr, size);
	ShowArray(arr, size);

	push_back(arr, size, value);
	ShowArray(arr, size);

	pop_back(arr, size);
	ShowArray(arr, size);

	replaceFirstElement_array(arr, size, value);
	ShowArray(arr, size);


	cout << "Введите номер элемента, который нужно заменить\n(Номер от 0 до того значения, который вы ввели в 'Размер массива'): ";
	cin >> numberArray;
	cout << endl;

	FillArray(arr, size);
	replaceAnyElement_array(arr, size, value, numberArray);
	ShowArray(arr, size);

	delete[] arr;
	arr = nullptr;

	return 0;
	system("pause");
}