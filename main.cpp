﻿#include "Ingredients.h"
#include "Dish.h"
#include "Menu.h"

/*
	в першому класі прописані всі наявні інгредієнти 
	в другому,який є похідним,будуть прописані страви,та інгредієнти з яких вони повинні складатися
	думаю прописать фічу про то ше деякі інгредієнти будуть відсутні
	нада добавить шось про виключення і вказівник на функцію
*/

int main()
{
	srand(time(0));
	setlocale(0, "");
	Menu a;
	a.PrintMenu();
	a.PrintIngred();
	a.Logic();
	a.PrintMoney();
	system("pause");
}



