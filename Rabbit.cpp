#include <iostream>

void rabbit(int step, int jump = 3)
{
	std::cout << "Прыгаем!\n";
}

int main()
{
	setlocale(LC_ALL, "RU");
	int jump, step;
	std::cout << "Введите количество ступенек от 0 до 100: ";
	std::cin >> step;
	if (step > 100)
		std::cout << "Некорректный ввод. Слишком длинная лестница.\n";
	else
	{
		std::cout << "Введите максимальную длину прыжка в ступеньках: ";
		std::cin >> jump;
		if (jump > step)
			std::cout << "Некорректный ввод, длина прыжка больше длины лестницы.\n";
		else
			rabbit(step);
	}
}