#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void check_passw (string password) {
	string valid_passw = "penis_dushilin";
	if (password == valid_passw) {
		cout << "Доступ к Бебре разрешен." << endl;
	}
	else {
		cout << "Доступ к Бебре запрещен!" << endl;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string user_passw;
	cout << "Введите Бебрадный пароль:";
	getline(cin, user_passw);
	check_passw(user_passw);
	return 0;
}