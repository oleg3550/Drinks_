#pragma once
#include "NonAlcoholic.h"

enum class gaz{Low,Medium,High};

class Minerale : public NonAlcoholic
{
private:
	gaz m_gaz; 
public:
	void THIS_IS_ABSTRACT_CLASS()const {};
	gaz get_gaz() const;
	void set_gaz(gaz);
	Minerale(const char*, double, gaz);
	virtual ~Minerale();
	void GetInfo();
};
