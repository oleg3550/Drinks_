#include "Cognac.h"
#include <stdio.h>
#include <time.h>
#include "Drinks_exception.h"
////////////////////////////   GETTERS AND SETTERS   ///////////////////////////
int Cognac::get_stars() const
{
	return stars;
}
void Cognac::set_stars(int _stars)
{
	if (_stars <= 0)
		throw Drinks_exception("Количество звезд коньяка недопустимо мало!");
	if (_stars > 5)
		throw Drinks_exception("Количество звезд коньяка больше 5 (недопустимо)!");
	this->stars = _stars;
}
int Cognac::get_c_date() const
{
	return c_date;
}
void Cognac::set_c_date(int _c_date)
{
	if (_c_date < 0)
		throw Drinks_exception("Некорректное значение года выпуска (отрицательное)!");
	time_t t;
	struct tm* nabor;
	time(&t);
	nabor = localtime(&t);
	if (_c_date > nabor->tm_year + 1900)
		throw Drinks_exception("Некорректное значение года выпуска(должно быть меньше либо равно нынешнему году)!");
	this->c_date = _c_date;              
}
void Cognac::GetInfo()
{
	Alcoholic::GetInfo();
	cout << "Количество звезд коньяка : " << get_stars();
	cout << '\n';
	cout << "Выдержка коньяка (год) : " << get_c_date();
	cout << '\n';
}




//////////////////////////// Конструктор.Диструктор   ///////////////////
Cognac :: ~Cognac() {}

Cognac::
Cognac( const char* _name, double _volume,  double _strength, int _stars, int _c_date) : Alcoholic(_name, _volume, _strength)
{                                            
	set_stars(_stars);
	set_c_date(_c_date);
}
