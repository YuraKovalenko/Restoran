#include "Menu.h"
/*
	��� ���������� ���������� ���������� ����� Logic
	� ������� ��� �������� ���� � �������
	����� ��������� ������� Ingred ��� ������ ���� �������� ��������
	� ������ PrintMoney ���� ������� ����� �� �� ���� ���������
	� ����� 2 ������� ������� ��� ������������ ����
*/
void Menu::PrintMenu()//��������� ������ ���������
{
	std::string s;
	std::string str = "=============================================\n";//�������� ����� ��� ������
	std::string sss = "��������\t  �  ���     �  ���\n";//�������� ����� ��� ������
	std::cout << str;
	std::cout << "\t\t    Menu\n";
	std::cout << str;
	PrintMessage("���� (soup�)");
	PrintMap(soup);
	PrintMessage("������� (gar�)");
	PrintMap(gar);
	PrintMessage("������ (salad�)");
	PrintMap(salad);
	PrintMessage("������� (desert�)");
	PrintMap(desert);
	PrintMessage("������� (drink�)");
	PrintMap(drink);
	PrintMessage("�������� (alko�)");
	PrintMap(alko);
	std::cout << str;
	Ingred(m);//���� �������� ������
}
//��������� ����� 
//��������� ����� ��� ���������
void Ingredients::PrintMessage(std::string s) 
{
	std::string str = "=============================================\n";
	std::cout << str;
	std::cout << "\t\t    " << s << "\n";
	std::cout << str;
}
//��������� ����� 
void Menu::PrintMap(std::map<std::string, int> &a)
{
	std::string s;
	for (auto j : a)
	{
		s = j.first;
		std::cout << s << std::setw(17 - s.size()) << "| " << min << "�" << "(" << j.second << "���" << ") | " << max << "�" << "(" << j.second*1.8 << "���" << ")" << std::setw(1) << " |\n";
	}
}

//����� ����� ���� ���������� ����������
void Menu::Logic()
{
	Menu a;
	std::cout << "������� (menu) ���� ���������� ����\n";
	std::cout << "������� (start) ���� ��������\n";
	std::cout << "������� (finish) ���� ���������\n";
	std::cout << "������� (money) ���� ���������� ����\n";
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
				std::cout << "�� ����� ������������ �������\n";
			}
		}
		std::cout << "������� (menu) ���� ���������� ����\n";
		std::cout << "������� (start) ���� ��������\n";
		std::cout << "������� (finish) ���� ���������\n";
		std::cout << "������� (money) ���� ���������� ����\n";
		std::cin >> command;
	}
	a.PrintMoney();
}

void Menu::PrintMoney()//���� ����
{
	std::cout << "�� ������ ��������� : \n";
	std::cout  << result << "\n";
}
