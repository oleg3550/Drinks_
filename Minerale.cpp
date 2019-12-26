#include "Minerale.h"
#include "Drinks_exception.h"

////////////////////////////   GETTERS AND SETTERS   ///////////////////////////

std::ostream& operator << (std::ostream& out, const gaz& t)
{
	switch (t) {
	case gaz::Low: return (out << "Low");
	case gaz::Medium: return (out << "Medium");
	case gaz::High: return (out << "High");
	}
	return (out);
}
gaz Minerale::get_gaz() const
{
	return m_gaz;
}
void Minerale::set_gaz(gaz _gaz)
{
	m_gaz = _gaz;
}
void Minerale::GetInfo()
{
	NonAlcoholic::GetInfo();
	cout << "羊屣屙� 汔玷痤忄眄铖蜩 : " << get_gaz();
	cout << '\n';
}


//////////////////////////// 暑眈蝠箨蝾�.蔫耱痼牝铕   ///////////////////
Minerale :: ~Minerale() {}

Minerale::
Minerale(const char* _name, double _volume,gaz _gaz) : NonAlcoholic(_name, _volume)
{
	set_gaz(_gaz);
}
