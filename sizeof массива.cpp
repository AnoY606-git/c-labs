#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int arr[] = {10, 20, 30, 50, 112, 21123};

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}

	system("PAUSE");
	return 0;
}