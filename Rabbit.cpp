#include <iostream>

int rabbit(int step, int jump = 3, int startPos = 0) {
	int sum = 0;
	for (int i = 1; i <= jump; i++) {
		if (startPos + i <= step)
			if (startPos + i == step)
				sum++;
		else
			sum += rabbit(step, jump, startPos + i);
	}
	return sum;
}

int main()
{
	setlocale(LC_ALL, "RU");
	int jump, step, sum = 0;
	std::cout << "Введите количество ступенек от 0 до 100: ";
	std::cin >> step;
	if (step <= 0 || step > 100)
		std::cout << "Некорректный ввод. Слишком длинная лестница.\n";
	else
	{
		std::cout << "Введите максимальную длину прыжка в ступеньках: ";
		std::cin >> jump;
		std::cout << "Количество возможных способов подъёма по лестнице: " << rabbit(step, jump);
	}
}