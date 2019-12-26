#include "Beer.h"
#include "Drinks_exception.h"

////////////////////////////   GETTERS AND SETTERS   ///////////////////////////

std::ostream& operator << (std::ostream& out, const raw& t)
{
	switch (t) {
	case raw::barley: return (out << "barley");
	case raw::wheat : return (out << "wheat");
	case raw::ginger : return (out << "ginger");
	}
	return (out);
}

raw Beer::get_raw() const
{
	return raw_material;
}
void Beer::set_raw(raw _raw)
{
	raw_material = _raw;
}
void Beer::GetInfo()
{
	Alcoholic::GetInfo();
	cout << "Òèï ñûðüÿ : " << get_raw();
	cout << '\n';
}





//////////////////////////// Êîíñòðóêòîð.Äèñòðóêòîð   ///////////////////
Beer :: ~Beer() {}
Beer::Beer(const char* _name, double _volume,double _strength,raw _raw) : Alcoholic(_name, _volume, _strength)
{
	set_raw(_raw);
}
