#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string bebra[10] = {
		"Игорь Камаев", "Мистер Бебрун", "Мистер Бебра",
		"Сергей Камаев", "Берилл 5М", "Мистер Абоба",
		"Пенис Душилин", "Чупапи Муняня", "Орехи Берилла",
		"По Попе"
	};

	for (int i = 2; i < 7; i++) {
		std::cout << bebra[i] << std::endl;
	}

	return 0;
}