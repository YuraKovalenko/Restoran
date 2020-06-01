#include "Menu.h"

void Menu::PrintMenu()//реалізація методу виведення
{
	std::string s;
	std::string str = "=============================================\n";//допоміжна змінна для виводу
	std::string sss = "Название\t  г  грн     г  грн\n";//допоміжна змінна для виводу
	std::cout << str;
	std::cout << "\t\t    Menu\n";
	std::cout << str;
	PrintMessege("Супы");
	PrintMap(soup);
	PrintMessege("Гарниры");
	PrintMap(gar);
	PrintMessege("Салаты");
	PrintMap(salad);
	PrintMessege("Напитки");
	PrintMap(drink);
	PrintMessege("Спиртное");
	PrintMap(alko);
	std::cout << str;
	Ingred(m);
}

void Menu::PrintMessege(std::string s)//допоміжний метод для виведення
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

void Menu::Logic()
{
	for (int i = 0; i < 2; i++)
	{
		Pdish();
	}
}