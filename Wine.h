#pragma once
#include "Alcohlic.h"

enum class wine_colour {White, Red};

class Wine : public Alcoholic
{
private:
	wine_colour w_colour;
	int w_date;
public:
	void THIS_IS_ABSTRACT_CLASS()const {};
	wine_colour  get_w_colour() const;
	void set_w_colour(wine_colour);
	int  get_w_date() const;
	void set_w_date(int);
	Wine(  const char*, double, double, wine_colour, int);
	virtual ~Wine();
	void GetInfo();
};
