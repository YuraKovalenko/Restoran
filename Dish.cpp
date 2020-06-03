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
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*soup["m1"];
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

	if (name == "soup3")//суп
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[7] != "0")
		{
			std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "soup5")//шурпа
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[7] != "0" && m[0] != "0")
		{
			std::cout << "Введите размер блюда (b або s) : ";
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
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[8] != "0")
		{
			std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "soup2")//росольник
	{
		if (m[1] != "0" && m[2] != "0" && m[3] != "0"  && m[8] != "0" && m[4] != "0")
		{
			std::cout << "Введите размер блюда (b або s) : ";
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
	if (name == "gar2")//гречка
	{
		std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "gar5")//рис
	{
		std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "gar4")//пшоно
	{
		std::cout << "Введите размер блюда (b або s): ";
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

	if (name == "gar3")//пельмені
	{
		std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "gar1")//вареники
	{
		std::cout << "Введите размер блюда (b або s) : ";
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
		std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "salad5")//Салат Цезарь
	{
		std::cout << "Введите размер блюда (b або s): ";
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

	if (name == "salad2")//Салат Бунито
	{
		std::cout << "Введите размер блюда (b або s): ";
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
		std::cout << "Введите размер блюда (b або s) : ";
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

	if (name == "salad3")//Салат Дамский
	{
		std::cout << "Введите размер блюда (b або s) : ";
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
		std::cout << "Введите размер блюда (b або s) : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*desert["Мороженое"];
			CountMoney(n);
		}
		else
		{
			n = desert["Мороженое"];
			CountMoney(n);
		}
	}

	if (name == "desert2")//Торт Наполеон
	{
		std::cout << "Введите размер блюда (b або s) : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*desert["Торт Наполеон"];
			CountMoney(n);
		}
		else
		{
			n = desert["Торт Наполеон"];
			CountMoney(n);
		}
	}

	if (name == "desert5")//Штруделль
	{
		std::cout << "Введите размер блюда (b або s) : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*desert["Штруделль"];
			CountMoney(n);
		}
		else
		{
			n = desert["Штруделль"];
			CountMoney(n);
		}
	}

	if (name == "desert4")//Шоколадный торт
	{
		std::cout << "Введите размер блюда (b або s) : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*desert["Шоколадный торт"];
			CountMoney(n);
		}
		else
		{
			n = desert["Шоколадный торт"];
			CountMoney(n);
		}
	}

	if (name == "desert3")//Чизкейк
	{
		std::cout << "Введите размер блюда (b або s) : ";
		std::cin >> size;
		if (size == "b")//b велика порція,а s - мала
		{
			n = 1.8*desert["Чизкейк"];
			CountMoney(n);
		}
		else
		{
			n = desert["Чизкейк"];
			CountMoney(n);
		}
	}
	/////////////////////////////////////////////////
	//формування напоїв
	if (name == "drink4")//Лимонад
	{
		if (m[21] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*drink["Лимонад"];
				CountMoney(n);
			}
			else
			{
				n = drink["Лимонад"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Лимонад\n";
		}
	}

	if (name == "drink5")//Сок
	{
		if (m[22] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*drink["Сок"];
				CountMoney(n);
			}
			else
			{
				n = drink["Сок"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Сок\n";
		}
	}

	if (name == "drink1")//Cola
	{
		if (m[18] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*drink["Cola"];
				CountMoney(n);
			}
			else
			{
				n = drink["Cola"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Cola\n";
		}
	}

	if (name == "drink2")//Pepsi
	{
		if (m[19] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*drink["Pepsi"];
				CountMoney(n);
			}
			else
			{
				n = drink["Pepsi"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Pepsi\n";
		}
	}

	if (name == "drink3")//Квас
	{
		if (m[20] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*drink["Квас"];
				CountMoney(n);
			}
			else
			{
				n = drink["Квас"];
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
	if (name == "alko5")//Ром
	{
		if (m[17] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*alko["Ром"];
				CountMoney(n);
			}
			else
			{
				n = alko["Ром"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Ром\n";
		}
	}

	if (name == "alko4")//Пиво
	{
		if (m[13] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*alko["Пиво"];
				CountMoney(n);
			}
			else
			{
				n = alko["Пиво"];
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
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*alko["Коньяк"];
				CountMoney(n);
			}
			else
			{
				n = alko["Коньяк"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Коньяк\n";
		}
	}

	if (name == "alko2")//Виски
	{
		if (m[16] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*alko["Виски"];
				CountMoney(n);
			}
			else
			{
				n = alko["Виски"];
				CountMoney(n);
			}
		}
		else
		{
			std::cout << "Извените, но мы не може приготовить Виски\n";
		}
	}

	if (name == "alko1")//Вино
	{
		if (m[14] != "0")//якщо продукти присутні
		{
			std::cout << "Введите размер блюда (b або s) : ";
			std::cin >> size;
			if (size == "b")//b велика порція,а s - мала
			{
				n = 1.8*alko["Вино"];
				CountMoney(n);
			}
			else
			{
				n = alko["Вино"];
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
