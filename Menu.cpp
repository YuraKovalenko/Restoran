#include "Menu.h"

void Menu::PrintMenu()//��������� ������ ���������
{
	std::string s;
	std::string str = "=============================================\n";//�������� ����� ��� ������
	std::string sss = "��������\t  �  ���     �  ���\n";//�������� ����� ��� ������
	std::cout << str;
	std::cout << "\t\t    Menu\n";
	std::cout << str;
	PrintMessege("����");
	PrintMap(soup);
	PrintMessege("�������");
	PrintMap(gar);
	PrintMessege("������");
	PrintMap(salad);
	PrintMessege("�������");
	PrintMap(drink);
	PrintMessege("��������");
	PrintMap(alko);
	std::cout << str;
	Ingred(m);
}

void Menu::PrintMessege(std::string s)//��������� ����� ��� ���������
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

void Menu::Logic()
{
	for (int i = 0; i < 2; i++)
	{
		Pdish();
	}
}