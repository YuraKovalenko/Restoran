#include "Dish.h"

void Dish::Pdish()//����� ����� � ��������� �� �������� �����䳺���
{
	std::string name;//����� ������
	std::string size;//����� ������
	int n;//���� �� ������
	std::cout << "������� �������� ����� : ";
	std::cin >> name;
	//������������ ����
	if (name == "soup1")//����
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0" && m[5] != "0" && m[6] != "0" && m[7] != "0" && m[9] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["����"];
				CountMoney(n);
			}
			else
			{
				n = soup["����"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ����\n";
		}
	}

	if (name == "soup2")//���
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[7] != "0" )
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["���"];
				CountMoney(n);
			}
			else
			{
				n = soup["���"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� c��\n";
		}
	}

	if (name == "soup3")//�����
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[7] != "0" && m[0] != "0")
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["�����"];
				CountMoney(n);
			}
			else
			{
				n = soup["�����"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� �����\n";
		}
	}

	if (name == "soup4")//���
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[8] != "0" )
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["���"];
				CountMoney(n);
			}
			else
			{
				n = soup["���"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ���\n";
		}
	}

	if (name == "soup5")//���������
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[8] != "0" && m[4] != "0")
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["���������"];
				CountMoney(n);
			}
			else
			{
				n = soup["���������"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ���������\n";
		}
	}
	////////////////////////////////////////////////////////
	//������������ ������
	if (name == "gar1")//������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["������"];
			CountMoney(n);
		}
		else
		{
			n = gar["������"];
			CountMoney(n);
		}
	}

	if (name == "gar2")//���
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["���"];
			CountMoney(n);
		}
		else
		{
			n = gar["���"];
			CountMoney(n);
		}
	}

	if (name == "gar3")//�����
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["�����"];
			CountMoney(n);
		}
		else
		{
			n = gar["�����"];
			CountMoney(n);
		}
	}

	if (name == "gar4")//�������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["��������"];
			CountMoney(n);
		}
		else
		{
			n = gar["��������"];
			CountMoney(n);
		}
	}

	if (name == "gar5")//��������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["��������"];
			CountMoney(n);
		}
		else
		{
			n = gar["��������"];
			CountMoney(n);
		}
	}
	////////////////////////////////////////////////
	//������������ ������
	if (name == "salad1")//��������� �����
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*salad["��������� �����"];
			CountMoney(n);
		}
		else
		{
			n = salad["��������� �����"];
			CountMoney(n);
		}
	}

	if (name == "salad2")//����� ������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*salad["����� ������"];
			CountMoney(n);
		}
		else
		{
			n = salad["����� ������"];
			CountMoney(n);
		}
	}

	if (name == "salad3")//����� ������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*salad["����� ������"];
			CountMoney(n);
		}
		else
		{
			n = salad["����� ������"];
			CountMoney(n);
		}
	}

	if (name == "salad4")//����� �����
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*salad["����� �����"];
			CountMoney(n);
		}
		else
		{
			n = salad["����� �����"];
			CountMoney(n);
		}
	}

	if (name == "salad5")//����� �������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*salad["����� �������"];
			CountMoney(n);
		}
		else
		{
			n = salad["����� �������"];
			CountMoney(n);
		}
	}
	/////////////////////////////////////////////////
	//���������� �������
	if (name == "desert1")//���������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["���������"];
			CountMoney(n);
		}
		else
		{
			n = gar["���������"];
			CountMoney(n);
		}
	}

	if (name == "desert2")//���� ��������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["���� ��������"];
			CountMoney(n);
		}
		else
		{
			n = gar["���� ��������"];
			CountMoney(n);
		}
	}

	if (name == "desert3")//���������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["���������"];
			CountMoney(n);
		}
		else
		{
			n = gar["���������"];
			CountMoney(n);
		}
	}

	if (name == "desert4")//���������� ����
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["���������� ����"];
			CountMoney(n);
		}
		else
		{
			n = gar["���������� ����"];
			CountMoney(n);
		}
	}

	if (name == "desert5")//�������
	{
		std::cout << "������� ������ ����� : ";
		std::cin >> size;
		if (size == "b")//b ������ ������,� s - ����
		{
			n = 1.8*gar["�������"];
			CountMoney(n);
		}
		else
		{
			n = gar["�������"];
			CountMoney(n);
		}
	}
	/////////////////////////////////////////////////
	//���������� �����
	if (name == "drink1")//�������
	{
		if (m[21] != "0" )//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["�������"];
				CountMoney(n);
			}
			else
			{
				n = soup["�������"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� �������\n";
		}
	}

	if (name == "drink2")//���
	{
		if (m[22] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["���"];
				CountMoney(n);
			}
			else
			{
				n = soup["���"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ���\n";
		}
	}

	if (name == "drink3")//Cola
	{
		if (m[18] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["Cola"];
				CountMoney(n);
			}
			else
			{
				n = soup["Cola"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� Cola\n";
		}
	}

	if (name == "drink4")//Pepsi
	{
		if (m[19] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["Pepsi"];
				CountMoney(n);
			}
			else
			{
				n = soup["Pepsi"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� Pepsi\n";
		}
	}

	if (name == "drink5")//����
	{
		if (m[20] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["����"];
				CountMoney(n);
			}
			else
			{
				n = soup["����"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ����\n";
		}
	}
	/////////////////////////////////////////////////
	//���������� ����������� �����
	if (name == "alko1")//���
	{
		if (m[17] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["���"];
				CountMoney(n);
			}
			else
			{
				n = soup["���"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ���\n";
		}
	}

	if (name == "alko2")//����
	{
		if (m[13] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["����"];
				CountMoney(n);
			}
			else
			{
				n = soup["����"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ����\n";
		}
	}

	if (name == "alko3")//������
	{
		if (m[15] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["������"];
				CountMoney(n);
			}
			else
			{
				n = soup["������"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ������\n";
		}
	}

	if (name == "alko4")//�����
	{
		if (m[16] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["�����"];
				CountMoney(n);
			}
			else
			{
				n = soup["�����"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� �����\n";
		}
	}

	if (name == "alko5")//����
	{
		if (m[14] != "0")//���� �������� �������
		{
			std::cout << "������� ������ ����� : ";
			std::cin >> size;
			if (size == "b")//b ������ ������,� s - ����
			{
				n = 1.8*soup["����"];
				CountMoney(n);
			}
			else
			{
				n = soup["����"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "��������, �� �� �� ���� ����������� ����\n";
		}
	}
}

int Dish::CountMoney(int n)//����������� ����
{
	result += n;
	return result;
}

void Dish::PrintMoney()//���� ����
{
	std::cout << "Money : " << result << "\n";
}
