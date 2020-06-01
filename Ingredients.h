#pragma once
#include <map>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>

class Ingredients
{
public:
	void Ingred(std::map <int, std::string> &m);
	void PrintIngred();
protected:
	int a;
	std::map <int, std::string> m =//продукти
	{
		{ 0, "Томат"},
		{ 1, "Лук" },
		{ 2, "Картофель" },
		{ 3, "Морква" },
		{ 4, "Огурец" },
		{ 5, "Свекла" },
		{ 6, "Капуста" },
		{ 7, "Мясо" },
		{ 8, "Рыба" },
		{ 9, "Фасоль" },
		{ 10, "Соус" },
		{ 11, "Торт" },
		{ 12, "Мороженое" },
		{ 13, "Пиво" },
		{ 14, "Вино" },
		{ 15, "Коньяк" },
		{ 16, "Виски" },
		{ 17, "Ром" },
		{ 18, "Cola" },
		{ 19, "Pepsi" },
		{ 20, "Квас" },
		{ 21, "Лимонад" },
		{ 22, "Сок" }
	};


};

