#include "Drinks.h"
#include "string.h"
#include "Drinks_exception.h"
#include<iostream>
using namespace std;




////////////////////////////   GETTERS AND SETTERS   ///////////////////////////
 const char* Drinks::get_name() const
{
	return name;
}
double Drinks::get_volume() const
{
	return volume;
}
void Drinks:: set_name(const char* _name)
{
	this->name = new char [strlen(_name) + 1];
	strcpy(this->name,_name);
}
void Drinks::set_valume(double _volume)
{
	if (_volume <= 0)
		throw Drinks_exception("خلْهى نîëوهي لûٍü لîëüّه 0!");
	this->volume = _volume;
}
void Drinks::GetInfo()
{
	cout << "حàçâàيèه يàïèٍêà : " << get_name();
	cout << '\n';
	cout << "خلْهى يàïèٍêà : " << get_volume()<<" ë";
	cout << '\n';
}
//////////////////////////// تîيًٌٍَêٍîً.ؤèًٌٍَêٍîً   ///////////////////
Drinks :: ~Drinks()
{
	delete[] name;
}
Drinks ::Drinks(const char* _name, double _volume)
{
	set_name(_name);
	set_valume(_volume);
}
