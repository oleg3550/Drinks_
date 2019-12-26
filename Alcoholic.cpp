#include "Alcohlic.h"
#include "Drinks_exception.h"

////////////////////////////   GETTERS AND SETTERS   ///////////////////////////

double Alcoholic::get_strength() const
{
	return strength;
}

void Alcoholic::set_strength(double _strength)
{
	if (_strength <= 1.6)
		throw Drinks_exception("Процент содержания спирта меньше 1.6 % (напиток не является алкогольным)!");
	if (strength >= 92)
		throw Drinks_exception("Напиток не пригоден для употребления (слишком большой градус)!");
	this->strength = _strength;
}
void Alcoholic::GetInfo() 
{
	Drinks::GetInfo();
	cout << "Крепость напитка : " << get_strength()<<" градусов";
	cout << '\n';
}


//////////////////////////// Конструктор.Диструктор   ///////////////////
Alcoholic :: ~Alcoholic(){}
Alcoholic::Alcoholic(const char* _name, double _volume, double _strength):Drinks(_name, _volume) 
{
	set_strength(_strength);
}
