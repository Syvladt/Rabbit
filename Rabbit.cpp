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
	std::cout << "������� ���������� �������� �� 0 �� 100: ";
	std::cin >> step;
	if (step <= 0 || step > 100)
		std::cout << "������������ ����. ������� ������� ��������.\n";
	else
	{
		std::cout << "������� ������������ ����� ������ � ����������: ";
		std::cin >> jump;
		std::cout << "���������� ��������� �������� ������� �� ��������: " << rabbit(step, jump);
	}
}