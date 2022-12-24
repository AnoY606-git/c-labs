#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//Ключевое слово this

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

		cout << this << "\t" << "Конструктор" << endl;
 	}

	Point(int valueX, int valueY) // Реализация конструктора класса и его перегрузка
	{
		x = valueX;
		y = valueY;

		cout << this << "\t" << "Конструктор" << endl;
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
	void SetY(int y)
	{
		this->y = y; // При помощи this-> можно присвоить значение y
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

	a.SetY(5);
	a.Print();
 
	return 0;
	system("pause");
}