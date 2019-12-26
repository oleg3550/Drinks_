#pragma once
#include "NonAlcoholic.h"

enum class variety{Ramune,Bionad,Classic};
//{японский лимонад,на основе трав,классическое исполнение}
class Lemonade :public  NonAlcoholic
{
private:
	variety l_variety; 
public:
	void THIS_IS_ABSTRACT_CLASS()const {};
	variety get_variety() const;
	void set_variety(variety);
	Lemonade(const char*, double, variety);
	virtual ~Lemonade();
	void GetInfo();
};
