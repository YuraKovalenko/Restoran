#pragma once
#include "Ingredients.h"

class Dish : public Ingredients
{
	int result = 0;//���� �� ����
public:
	void Pdish();//����� �����
	int CountMoney(int n);
	void PrintMoney();
	std::map<std::string, int> soup =//��������� �� ���������� ������ � �� ���� �� ��������� ������
	{
		{"����",60},
		{"���",60},
		{"�����",90},
		{"���",90},
		{"���������",90},
	};
	std::map<std::string, int> gar =//��������� �� ���������� ������ � �� ���� �� ��������� ������
	{
		{ "������", 60 },
		{ "���",60 },
		{ "�����",60 },
		{ "��������",70 },
		{ "��������",70 },
	};
	std::map<std::string, int> salad =//��������� �� ���������� ������ � �� ���� �� ��������� ������
	{
		{"��������� �����",80},
		{"����� ������",80},
		{"����� ������",80},
		{"����� �����",85},
		{"����� �������",85},
	};
	std::map<std::string, int> desert =//��������� �� ���������� ������ � �� ���� �� ��������� ������
	{
		{"���������",60},
		{"���� ��������",75},
		{"���������",70},
		{"���������� ����",80},
		{"�������",70},
	};
	std::map<std::string, int> drink =//��������� �� ���������� ������ � �� ���� �� ��������� ������
	{
		{"�������",60},
		{"���",60},
		{"Cola",60},
		{"Pepsi",60},
		{"����",60},
	};
	std::map<std::string, int> alko =//��������� �� ���������� ������ � �� ���� �� ��������� ������
	{
		{"���",95},
		{"����",60},
		{"������",95},
		{"�����",95},
		{"����",80},
	};
};

