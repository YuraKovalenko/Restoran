#pragma once
#include "Dish.h"

class Menu : public Dish
{
public:
	void PrintMenu();//����� ��� ��������� ����
	void PrintMessege(std::string s);
	void PrintMap(std::map<std::string, int> &a);
	void Logic();
	int min = 150, max = 270;//������ ������ � ������
};

