#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	const int size = 5;

	int arr[size] = {6,7,8,9,10};

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	system("PAUSE");
	return 0;
}