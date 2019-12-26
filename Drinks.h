#pragma once
#include <iostream>
#pragma warning (disable:4996)
class Drinks
{
protected :
    char * name;
	double volume;
public:
    virtual void THIS_IS_ABSTRACT_CLASS ()const =0;
     const char* get_name () const;
    double get_volume () const;
	void set_name (const char* );
	void set_valume (double);
	Drinks(const char*, double);
	virtual ~Drinks();
	virtual void GetInfo();
};
