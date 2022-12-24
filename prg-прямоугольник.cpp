#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	char zvezda = '*';
	int height = 0;
	int width = 0;

	cout << "Введите длину прямоугольника: ";
	cin >> width;

	cout << "Введите ширину прямоугольника: ";
	cin >> height;

	for (int j = 0; j != height; j++)
	{
		for (int i = 0; i != width; i++)
		{
			cout << zvezda;

			if (i == width -1)
			{
				cout << endl;
			}

		}
	}


	system("PAUSE");
	return 0;
}