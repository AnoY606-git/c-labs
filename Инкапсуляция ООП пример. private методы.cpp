#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//Инкапсуляция ООП пример. private методы.

class coffeGrinder
{
public:
	void Start()
	{
		bool checkVoltageIsNormal = chekVoltage();

		if (checkVoltageIsNormal)
		{
			cout << "Вжух!!!" << endl;
		}
		else
		{
			cout << "Beep Beep!!!" << endl;
		}
	}

	// Инкапсуляция для метода private
private:
	bool chekVoltage()
	{
		return false; // Если с напряжением всё норм, тогда функция a.Start() выведет "Вжух!!!" 
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	coffeGrinder a;

	a.Start();
 
	return 0;
	system("pause");
}