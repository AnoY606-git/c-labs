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
		cout << "ФИО: " << name << "\nВес: " << weight << "\nВозраст: " << age << endl;
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

	return 0;
	system("pause");
}