#include "Dish.h"

void Dish::Pdish()//метод страв в залежності від наявності інгредієнтів
{
	std::string name;//назва страви
	std::string size;//розмір порції
	int n;//ціна за страву
	std::cout << "Введите название блюда : ";
	std::cin >> name;
	//формулювання супів
	if (name == "soup1")//борщ
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0" && m[5] != "0" && m[6] != "0" && m[7] != "0" && m[9] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Борщ"];
				CountMoney(n);
			}
			else
			{
				n = soup["Борщ"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить борщ\n";
		}
	}

	if (name == "soup2")//суп
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[7] != "0" )
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Суп"];
				CountMoney(n);
			}
			else
			{
				n = soup["Суп"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить cуп\n";
		}
	}

	if (name == "soup3")//шурпа
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[7] != "0" && m[0] != "0")
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Шурпа"];
				CountMoney(n);
			}
			else
			{
				n = soup["Шурпа"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить шурпу\n";
		}
	}

	if (name == "soup4")//уха
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[8] != "0" )
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Уха"];
				CountMoney(n);
			}
			else
			{
				n = soup["Уха"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить уху\n";
		}
	}

	if (name == "soup5")//росольник
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[8] != "0" && m[4] != "0")
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Росольник"];
				CountMoney(n);
			}
			else
			{
				n = soup["Росольник"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить росольник\n";
		}
	}
	////////////////////////////////////////////////////////
	//формулювання гарнірів
	if (name == "gar1")//гречка
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Гречка"];
			CountMoney(n);
		}
		else
		{
			n = gar["Гречка"];
			CountMoney(n);
		}
	}

	if (name == "gar2")//рис
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Рис"];
			CountMoney(n);
		}
		else
		{
			n = gar["Рис"];
			CountMoney(n);
		}
	}

	if (name == "gar3")//пшоно
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Пшено"];
			CountMoney(n);
		}
		else
		{
			n = gar["Пшено"];
			CountMoney(n);
		}
	}

	if (name == "gar4")//пельмені
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Пельмени"];
			CountMoney(n);
		}
		else
		{
			n = gar["Пельмени"];
			CountMoney(n);
		}
	}

	if (name == "gar5")//вареники
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Вареники"];
			CountMoney(n);
		}
		else
		{
			n = gar["Вареники"];
			CountMoney(n);
		}
	}
	////////////////////////////////////////////////
	//формулювання салатів
	if (name == "salad1")//Греческий салат
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*salad["Греческий салат"];
			CountMoney(n);
		}
		else
		{
			n = salad["Греческий салат"];
			CountMoney(n);
		}
	}

	if (name == "salad2")//Салат Цезарь
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*salad["Салат Цезарь"];
			CountMoney(n);
		}
		else
		{
			n = salad["Салат Цезарь"];
			CountMoney(n);
		}
	}

	if (name == "salad3")//Салат Бунито
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*salad["Салат Бунито"];
			CountMoney(n);
		}
		else
		{
			n = salad["Салат Бунито"];
			CountMoney(n);
		}
	}

	if (name == "salad4")//Салат Марго
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*salad["Салат Марго"];
			CountMoney(n);
		}
		else
		{
			n = salad["Салат Марго"];
			CountMoney(n);
		}
	}

	if (name == "salad5")//Салат Дамский
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*salad["Салат Дамский"];
			CountMoney(n);
		}
		else
		{
			n = salad["Салат Дамский"];
			CountMoney(n);
		}
	}
	/////////////////////////////////////////////////
	//формування десертів
	if (name == "desert1")//Мороженое
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Мороженое"];
			CountMoney(n);
		}
		else
		{
			n = gar["Мороженое"];
			CountMoney(n);
		}
	}

	if (name == "desert2")//Торт Наполеон
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Торт Наполеон"];
			CountMoney(n);
		}
		else
		{
			n = gar["Торт Наполеон"];
			CountMoney(n);
		}
	}

	if (name == "desert3")//Штруделль
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Штруделль"];
			CountMoney(n);
		}
		else
		{
			n = gar["Штруделль"];
			CountMoney(n);
		}
	}

	if (name == "desert4")//Шоколадный торт
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Шоколадный торт"];
			CountMoney(n);
		}
		else
		{
			n = gar["Шоколадный торт"];
			CountMoney(n);
		}
	}

	if (name == "desert5")//Чизкейк
	{
		std::cout << "Введите размер блюда : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*gar["Чизкейк"];
			CountMoney(n);
		}
		else
		{
			n = gar["Чизкейк"];
			CountMoney(n);
		}
	}
	/////////////////////////////////////////////////
	//формування напоїв
	if (name == "drink1")//Лимонад
	{
		if (m[21] != "0" )//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Лимонад"];
				CountMoney(n);
			}
			else
			{
				n = soup["Лимонад"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Лимонад\n";
		}
	}

	if (name == "drink2")//Сок
	{
		if (m[22] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Сок"];
				CountMoney(n);
			}
			else
			{
				n = soup["Сок"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Сок\n";
		}
	}

	if (name == "drink3")//Cola
	{
		if (m[18] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
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
			std::cout << "Извените, но мы не може приготовить Cola\n";
		}
	}

	if (name == "drink4")//Pepsi
	{
		if (m[19] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
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
			std::cout << "Извените, но мы не може приготовить Pepsi\n";
		}
	}

	if (name == "drink5")//Квас
	{
		if (m[20] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Квас"];
				CountMoney(n);
			}
			else
			{
				n = soup["Квас"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Квас\n";
		}
	}
	/////////////////////////////////////////////////
	//формування алкогольних напоїв
	if (name == "alko1")//Ром
	{
		if (m[17] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Ром"];
				CountMoney(n);
			}
			else
			{
				n = soup["Ром"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Ром\n";
		}
	}

	if (name == "alko2")//Пиво
	{
		if (m[13] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Пиво"];
				CountMoney(n);
			}
			else
			{
				n = soup["Пиво"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Пиво\n";
		}
	}

	if (name == "alko3")//Коньяк
	{
		if (m[15] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Коньяк"];
				CountMoney(n);
			}
			else
			{
				n = soup["Коньяк"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Коньяк\n";
		}
	}

	if (name == "alko4")//Виски
	{
		if (m[16] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Виски"];
				CountMoney(n);
			}
			else
			{
				n = soup["Виски"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Виски\n";
		}
	}

	if (name == "alko5")//Вино
	{
		if (m[14] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["Вино"];
				CountMoney(n);
			}
			else
			{
				n = soup["Вино"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Вино\n";
		}
	}
}

int Dish::CountMoney(int n)//підрахування суми
{
	result += n;
	return result;
}

void Dish::PrintMoney()//вивід суми
{
	std::cout << "Money : " << result << "\n";
}
