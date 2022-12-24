#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//Конструктор копирования

class MyClass
{
public:

	int *data;

	MyClass(int size)
	{

		this->Size = size;

		this->data = new int[size];

		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}

		cout << "Вызвался конструктор " << this << endl;
		
	};

	MyClass(const MyClass &other)
	{

		this->Size = other.Size;

		this->data = new int[other.Size];

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}

		cout << "Вызвался конструктор копирования " << this << endl;
	}

	~MyClass()
	{
		cout << "Вызвался деструктор " << this << endl;
		delete[] data;
	};

private:

	int Size;

};

void Foo(MyClass value)
{
	cout << "Вызвалась функция FOO" << endl;
}

MyClass Foo2()
{
	cout << "Вызвалась функция FOO2" << endl;
	MyClass temp(2);
	return temp;
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Foo2();

	MyClass a(10);

	MyClass b(a);

	//Foo(a);
 
	return 0;
	system("pause");
}