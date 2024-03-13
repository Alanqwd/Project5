#include <iostream>
int main()
{
	setlocale(LC_ALL, "ru");
	int sel;
	float kol;
	int vall;
	float v;
	float val;

	std::cout << "Меню : Пицца: 1 пеперрони - 1$, 2 сырный - 2$, 3 маргарита - 3$, 4 барбекью - 4$: ";
	std::cin >> val;
	std::cout << "Выберите количество: ";
	std::cin >> vall;
	std::cout << " Напитки: 1 colla - 1$, 2 sprite - 2$, 3 cold tea - 3$: ";
	std::cin >> v;
	std::cout << "Выберите количество: ";
	std::cin >> kol;
	std::cout << "Пицца: " << val * vall << "\n";

	std::cout << "Напиток: " << v * kol << "\n";
	if (val * vall + v * kol >= 50)
	{
		std::cout << "Итог с 20% скидкой: \n" << (val * vall + v * kol) / 20 << "\n";


	}
	else if (vall >= 5)
	{
		std::cout << "Цена с каждой 5 бесплатной пицой: \n" << (val * (vall - 1)) << "\n";

	}
	else if (v == 2 && v == 3 || kol >= 3)
	{
		std::cout << "Скидка 15% если напиток стоит более 2$ и количество больше трех: " << v * kol / 15 << "\n";

	}
	std::cout << "Чек: " << "\n";
	std::cout << "Номер пиццы: " << val << "\n";
	std::cout << "Количество: " << vall << "\n";
	std::cout << "Номер напитка: " << v << "\n";
	std::cout << "Количество: " << kol << "\n";
	std::cout << "Итог: " << (val * vall) + (v * kol);




	return 0;
}