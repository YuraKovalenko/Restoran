#pragma once
#include "Dish.h"

class Menu : public Dish
{
	void PrintMap(std::map<std::string, int> &a);
public:
	void PrintMoney();
	void PrintMenu();//метод для виведення меню
	void Logic();
	int min = 150, max = 270;//розміри порцій в грамах
};

