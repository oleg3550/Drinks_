#pragma once
#include "Alcohlic.h"

enum class raw{barley,wheat,ginger};

class Beer : public Alcoholic
{
private:
	raw raw_material;
public:
	void THIS_IS_ABSTRACT_CLASS()const {};
	raw  get_raw() const;
	void set_raw(raw);
	Beer(const char*, double, double ,raw);
	virtual ~Beer();
	void GetInfo();
};
