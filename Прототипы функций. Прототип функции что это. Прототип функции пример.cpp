#include <iostream>
using namespace std;

void aboba(); //Прототип функции для её объявления далее.

void foo()
{
	cout << "Чупапи Муняня" << endl;
	aboba();
}

int main()
{
	setlocale(LC_ALL, "ru");
	
	foo();

	return 0;
}