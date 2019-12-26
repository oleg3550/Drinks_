#include "Lemonade.h"
#include "Drinks_exception.h"

////////////////////////////   GETTERS AND SETTERS   ///////////////////////////

std::ostream& operator << (std::ostream& out,const variety& t)
{
	switch (t) {
	case variety::Ramune: return (out << "Ramune");
	case variety::Bionad : return (out << "Bionad");
	case variety::Classic: return (out << "Classic");
	}
	return (out);
}

variety Lemonade::get_variety() const
{
	return l_variety;
}
void Lemonade::set_variety(variety _variety)
{
	l_variety = _variety;
}
void Lemonade::GetInfo()
{
	NonAlcoholic::GetInfo();
	cout << "Тип Лимонада : " << get_variety();
	cout << '\n';
}


//////////////////////////// Конструктор.Диструктор   ///////////////////
Lemonade :: ~Lemonade() {}

Lemonade::
Lemonade( const char* _name, double _volume , variety _variety) : NonAlcoholic(_name,_volume)
{
	set_variety(_variety);
}
