#include "Wine.h"
#include "Drinks_exception.h"
#include <stdio.h>
#include <time.h>

////////////////////////////   GETTERS AND SETTERS   ///////////////////////////

std::ostream& operator << (std::ostream& out, const wine_colour& t)
{
	switch (t) {
	case wine_colour::White: return (out << "White");
	case wine_colour::Red: return (out << "Red");
	}
	return (out);
}
wine_colour Wine::get_w_colour() const
{
	return w_colour;
}
void Wine::set_w_colour(wine_colour _w_colour)
{
	w_colour = _w_colour;
}
int Wine::get_w_date() const
{
	return w_date;
}
void Wine::set_w_date(int _w_date)
{
	if (_w_date < 0)
		throw Drinks_exception("Некорректное значение года выпуска (отрицательное)!");
	time_t b;
	struct tm* nabor;
	time(&b);
	nabor = localtime(&b);
	if (_w_date > nabor->tm_year + 1900)
		throw Drinks_exception("Некорректное значение года выпуска(должно быть меньше либо равно нынешнему году)!");
	this->w_date = _w_date;
}
void Wine::GetInfo()
{
	Alcoholic::GetInfo();
	cout << "Тип вина(цвет) : " << get_w_colour();
	cout << '\n';
	cout << "Выдержка вина (год): " << get_w_date();
	cout << '\n';
}




//////////////////////////// Конструктор.Диструктор   ///////////////////
Wine :: ~Wine() {}

Wine::
Wine(  const char* _name, double _volume, double _strength,wine_colour   _w_colour, int  _w_date) : Alcoholic(_name, _volume, _strength)
{
	set_w_colour(_w_colour);
	set_w_date(_w_date);
}
