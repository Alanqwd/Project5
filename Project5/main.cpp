#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	int sel;
	float kol;
	int vall;
	float v;
	float val;

	std::cout << "���� : �����: 1 ��������� - 1$, 2 ������ - 2$, 3 ��������� - 3$, 4 �������� - 4$: ";
	std::cin >> val;
	std::cout << "�������� ����������: ";
	std::cin >> vall;
	std::cout << " �������: 1 colla - 1$, 2 sprite - 2$, 3 cold tea - 3$: ";
	std::cin >> v;
	std::cout << "�������� ����������: ";
	std::cin >> kol;
	std::cout << "�����: " << val * vall << "\n";

	std::cout << "�������: " << v * kol << "\n";
	if (val * vall + v * kol >= 50)
	{
		std::cout << "���� � 20% �������: \n" << (val * vall + v * kol) / 20 << "\n";


	}
	else if (vall >= 5)
	{
		std::cout << "���� � ������ 5 ���������� �����: \n" << (val * (vall - 1)) << "\n";

	}
	else if (v == 2 && v == 3 || kol >= 3)
	{
		std::cout << "������ 15% ���� ������� ����� ����� 2$ � ���������� ������ ����: " << v * kol / 15 << "\n";

	}
	std::cout << "���: " << "\n";
	std::cout << "����� �����: " << val << "\n";
	std::cout << "����������: " << vall << "\n";
	std::cout << "����� �������: " << v << "\n";
	std::cout << "����������: " << kol << "\n";
	std::cout << "����: " << (val * vall) + (v * kol);




	return 0;
}