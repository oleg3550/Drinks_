#pragma once
#include "Drinks.h"
class Alcoholic : public Drinks
{
protected:
	double strength ;
public:
	virtual void THIS_IS_ABSTRACT_CLASS()const = 0;
	double get_strength() const;
	void set_strength(double);
	Alcoholic(const char*, double,double);
	virtual ~ Alcoholic();
	virtual void GetInfo();

};
