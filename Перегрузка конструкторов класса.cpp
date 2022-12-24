#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//Перегрузка конструкторов класса

class Point
{
private:

	int x;
	int y;

public:
	// Параметры конструктора по умолчанию
	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int valueX, int valueY) // Реализация конструктора класса и его перегрузка
	{
		x = valueX;
		y = valueY;
	}

	Point(int valueX, bool boolean)
	{
		x = valueX;

		if (boolean)
		{
			y = 10;
		}
		else
		{
			y = -1;
		}
	}
	void Print() 
	{
		cout << "X = " << x << "\nY = " << y << endl << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point a; // Передаём параметры конструктору класса

	a.Print();

	Point b(10, 20);

	b.Print();

	Point c(20, false);

	c.Print();
 
	return 0;
	system("pause");
}