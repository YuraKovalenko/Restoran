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
	void PrintIngred();//����� ��� ������
	virtual void PrintMessage(std::string s);
protected:
	void Ingred(std::map <int, std::string> &m);//����� ��� ������ �����䳺��� ��������
	std::map <int, std::string> m =//��������
	{
		{ 0, "�����"},
		{ 1, "���" },
		{ 2, "���������" },
		{ 3, "������" },
		{ 4, "������" },
		{ 5, "������" },
		{ 6, "�������" },
		{ 7, "����" },
		{ 8, "����" },
		{ 9, "������" },
		{ 10, "����" },
		{ 11, "����" },
		{ 12, "���������" },
		{ 13, "����" },
		{ 14, "����" },
		{ 15, "������" },
		{ 16, "�����" },
		{ 17, "���" },
		{ 18, "Cola" },
		{ 19, "Pepsi" },
		{ 20, "����" },
		{ 21, "�������" },
		{ 22, "���" }
	};


};

