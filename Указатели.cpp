#include <iostream>
using namespace std;

// Указатели.



int main()
{
	setlocale(LC_ALL, "ru");

	string a = "Абоба";

	string *pa = &a;

	int b = 5;

	int* pb = &b;

	cout << pa << endl;

	cout << *pa << endl;

	*pb = 2;

	cout << *pb << endl;

	return 0;
}