#pragma once
#include "Alcohlic.h"
class Cognac: public Alcoholic
{
private:
	
	int stars;
	int c_date;       
public:
	void THIS_IS_ABSTRACT_CLASS()const {};
	int  get_stars() const;
	void set_stars(int);
	int  get_c_date() const;
	void set_c_date(int);
	Cognac(const char*, double,  double, int, int);
	virtual ~Cognac();
	void GetInfo();
};
