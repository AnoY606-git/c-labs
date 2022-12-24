#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class Human 
{
public:

	int age;
	int weight;
	string name;

	void Print() 
	{
		cout << "ФИО: " << name << "\nВес: " << weight << "\nВозраст: " << age << endl << endl;
	}

};


class Point
{
private:

	int x;
	int y;
public:

	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	void Print() 
	{
		cout << "X = " << x << "\nY = " << y << endl;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Human firstHuman;

	firstHuman.age = 22;
	firstHuman.weight = 70;
	firstHuman.name = "Ivanov Ivan Ivanovich";

	firstHuman.Print();

	Point a;
	
	a.SetX(5);

	a.Print();

	int result = a.GetX();

	cout << "\n" << "Result = " << result << endl;

	a.SetY(10);

	a.Print();

	result = a.GetY();

	cout << "\n" << "Result = " << result << endl;
 
	return 0;
	system("pause");
}