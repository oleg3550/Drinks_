#pragma once
#include <iostream>
using namespace std;
class Drinks_exception : public exception
{
public:
	Drinks_exception(const char* const);
};
