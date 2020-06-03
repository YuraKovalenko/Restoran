#include "Menu.h"
/*
	тут відбувається формування замовлення через Logic
	є функція яка виводить меню в консоль
	також викликана функція Ingred яка робить деякі продукти відсутніми
	є методя PrintMoney який повертає гроші які ми маємо заплатить
	і також 2 допоміжні функції для формулювання меню
*/
void Menu::PrintMenu()//реалізація методу виведення
{
	std::string s;
	std::string str = "=============================================\n";//допоміжна змінна для виводу
	std::string sss = "Название\t  г  грн     г  грн\n";//допоміжна змінна для виводу
	std::cout << str;
	std::cout << "\t\t    Menu\n";
	std::cout << str;
	PrintMessage("Супы (soup№)");
	PrintMap(soup);
	PrintMessage("Гарниры (gar№)");
	PrintMap(gar);
	PrintMessage("Салаты (salad№)");
	PrintMap(salad);
	PrintMessage("Десерты (desert№)");
	PrintMap(desert);
	PrintMessage("Напитки (drink№)");
	PrintMap(drink);
	PrintMessage("Спиртное (alko№)");
	PrintMap(alko);
	std::cout << str;
	Ingred(m);//деякі продукти відсутні
}
//допоміжний метод 
//допоміжний метод для виведення
void Ingredients::PrintMessage(std::string s) 
{
	std::string str = "=============================================\n";
	std::cout << str;
	std::cout << "\t\t    " << s << "\n";
	std::cout << str;
}
//допоміжний метод 
void Menu::PrintMap(std::map<std::string, int> &a)
{
	std::string s;
	for (auto j : a)
	{
		s = j.first;
		std::cout << s << std::setw(17 - s.size()) << "| " << min << "г" << "(" << j.second << "грн" << ") | " << max << "г" << "(" << j.second*1.8 << "грн" << ")" << std::setw(1) << " |\n";
	}
}

//метод через який відбувається замовлення
void Menu::Logic()
{
	Menu a;
	std::cout << "Введите (menu) чтоб посмотреть меню\n";
	std::cout << "Введите (start) чтоб заказать\n";
	std::cout << "Введите (finish) чтоб закончить\n";
	std::cout << "Введите (money) чтоб посмотреть счет\n";
	std::string command;
	std::cin >> command;
	while (command != "finish")
	{
		if (command == "menu")
		{
			a.PrintMenu();
			a.PrintIngred();
		}
		if (command == "start")
		{
			a.Pdish();
		}
		if (command == "money")
		{
			a.PrintMoney();
		}
		try
		{
			if (command != "menu" && command != "start" && command != "money")
			{
				throw 1;
			}
		}
		catch (int i)
		{
			if (i == 1)
			{
				std::cout << "Вы ввели неправильную команду\n";
			}
		}
		std::cout << "Введите (menu) чтоб посмотреть меню\n";
		std::cout << "Введите (start) чтоб заказать\n";
		std::cout << "Введите (finish) чтоб закончить\n";
		std::cout << "Введите (money) чтоб посмотреть счет\n";
		std::cin >> command;
	}
	a.PrintMoney();
}

void Menu::PrintMoney()//вивід суми
{
	std::cout << "Вы должны заплатить : \n";
	std::cout  << result << "\n";
}
