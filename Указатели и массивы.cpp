#include <iostream>
using namespace std;

// Указатели и массивы.

int main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 5;
	int arr[SIZE]{ 10,20,30,50,100 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	int* pArr = arr;

	cout << "------------------------------" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << &arr[i] << endl;
	}

	cout << "------------------------------" << endl;

	cout << *(arr + 1) << endl;

	return 0;
}