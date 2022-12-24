#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

string check_passw (string password) {
	string valid_passw = "penis_dushilin";
	string error_message;
	if (password == valid_passw) {
		error_message = "\nДоступ к Бебре разрешен.";
	}
	else {
		error_message = "\nДоступ к Бебре запрещен!";
	}
	return error_message;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string user_passw;
	cout << "Введите Бебрадный пароль: ";
	getline(cin, user_passw);
	cout << "\nПроверка пароля...";
	string error_message = check_passw(user_passw);
	cout << error_message << endl;
	return 0;
}