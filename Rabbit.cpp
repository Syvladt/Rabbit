#include <iostream>

void rabbit(int step, int jump = 3)
{
	std::cout << "�������!\n";
}

int main()
{
	setlocale(LC_ALL, "RU");
	int jump, step;
	std::cout << "������� ���������� �������� �� 0 �� 100: ";
	std::cin >> step;
	if (step > 100)
		std::cout << "������������ ����. ������� ������� ��������.\n";
	else
	{
		std::cout << "������� ������������ ����� ������ � ����������: ";
		std::cin >> jump;
		if (jump > step)
			std::cout << "������������ ����, ����� ������ ������ ����� ��������.\n";
		else
			rabbit(step);
	}
}