#include "Ingredients.h"

void Ingredients::Ingred(std::map <int, std::string> &m)
{
	int a;
	for (int j = 0; j < 3; j++)
	{
		a = rand() % 30;
		for (auto i = 0; i < m.size(); i++)
		{
			if (i == a)
			{
				m[i] = "0";
			}
		}
	}
}

void Ingredients::PrintIngred()
{
	for (auto i : m)
	{
		std::cout << i.second << "\n";
	}
}

