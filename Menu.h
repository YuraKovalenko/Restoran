#pragma once
#include "Dish.h"

class Menu : public Dish
{
	void PrintMap(std::map<std::string, int> &a);
public:
	void PrintMoney();
	void PrintMenu();//����� ��� ��������� ����
	void Logic();
	int min = 150, max = 270;//������ ������ � ������
};

