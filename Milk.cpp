#include "Milk.h"
#include "Drinks_exception.h"
////////////////////////////   GETTERS AND SETTERS   ///////////////////////////
double Milk::get_fat() const
{
	return fat;
}
void Milk::set_fat(double _fat)
{
	if (_fat < 0)
		throw Drinks_exception("Значение процента жирности не может быть отрицательным");
	if (_fat > 6.1)
		throw Drinks_exception("Слишком большое значение процента жирности ( >6.1% )!");
	this->fat = _fat;
}
void Milk::GetInfo()
{
	NonAlcoholic::GetInfo();
	cout << "Процент жирности молока : " << get_fat()<<"%";
	cout << '\n';
}


//////////////////////////// Конструктор.Диструктор   ///////////////////
Milk :: ~Milk() {}

Milk::
Milk(const char* _name, double _volume,double _fat) : NonAlcoholic(_name, _volume)
{
	set_fat(_fat);
}
