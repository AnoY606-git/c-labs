//Общими требованиями к лабораторной работе являются :
//1) вводить исходное дерево из файла в понятной для
//пользователя форме, а не с клавиатуры;
//2) по требованию прользователя показывать дерево на экране;
//3) обрабатывать дерево в оперативной памяти, а не путем
//многократного обращения к файлу;
//4) обеспечить возможность многократных запросов без
//повторного запуска программы.
//
//1. Изделие задано с помощью  дерева. В листьях указаны
//значения массы соответствующих деталей. Масса сборного узла
//определяется как сумма масс составляющих деталей.
//Требуется:
//1) рассчитать массу всего изделия;
//2) организовать обход листьев, запрашивая новые значения
//массы и сообщая, как при этом меняется масса изделия(8).


#include <iostream>
#include <Windows.h>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct Node
{
	string components; // Компоненты изделия
	int mass; // Масса изделия
	int index; // Уровень
	Node* product; // Указатель на изделие
	vector<Node*> sonsTree; // Массив указателей 
};

void count_mass();

void print_detour_mass();

void delete_tree();


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	string buffer; // Буфер для строк из файла
	int length;

	string path = "input.txt"; // окрываем файл для чтения
	ifstream input;
	input.open(path);

	if (!input.is_open()) // Проверка на открытие файла
	{
		cout << "Файл успешно открыт!" << endl;
	}
	else 
	{
		cout << "Ошибка чтения файла!" << endl;
	}

	stringstream proverka;

	while (!input.eof()) // Цикл, пока не конец файла
	{
		getline(input, buffer);
		length = buffer.length();

	}



	input.close();

	return 0;
	system("pause");
}
