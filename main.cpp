#include <iostream>
#include "Alcohlic.h"
#include "Beer.h"
#include "Cognac.h"
#include "Drinks.h"
#include "Lemonade.h"
#include "Milk.h"
#include "Minerale.h"
#include "NonAlcoholic.h"
#include "Wine.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	Drinks* beer;
	Drinks* wine;
	Drinks* cognac;
	Drinks* milk;
	Drinks* mineralwater;
	Drinks* lemonade;

	Drinks* drinks[6] = {
    beer = new Beer ("Аливария", 1.5, 8.0, raw :: wheat),
	wine = new Wine("Старая Келья", 0.8, 5, wine_colour::Red,1961),
	cognac = new Cognac("Джим Бим", 1, 30, 4,1988),
	milk = new Milk("Простоквашино", 1.5,3.2),
	mineralwater = new Minerale("Минская-4",2, gaz::Medium),
	lemonade = new Lemonade("Лимонка", 0.5, variety ::Bionad)
	};
	for (int i = 0; i < 6; i++)
	{
		drinks[i]->GetInfo();
		cout<<'\n';
	}

}
