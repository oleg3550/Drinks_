#pragma once
#include "NonAlcoholic.h"
class Milk : public NonAlcoholic
{
	private:
		double fat;
	public:
		void THIS_IS_ABSTRACT_CLASS()const {};
		double get_fat() const;
		void set_fat(double);
		Milk(const char*, double, double);
		virtual ~Milk();
		void GetInfo();
};
