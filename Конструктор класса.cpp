#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//Конструктор класса

class Point
{
private:

	int x;
	int y;

public:

	Point(int valueX, int valueY) // Реализация конструктора класса
	{
		x = valueX;
		y = valueY;
	}

	void Print() 
	{
		cout << "X = " << x << "\nY = " << y << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point a(5,44); // Передаём параметры конструктору класса

	a.Print();

	Point b(10, 22); // Передаём параметры конструктору класса

	b.Print();
 
	return 0;
	system("pause");
}