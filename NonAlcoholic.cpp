#include "NonAlcoholic.h"



void NonAlcoholic::GetInfo() 
{
Drinks::GetInfo();
}


//////////////////////////// Конструктор.Диструктор   ///////////////////
NonAlcoholic :: ~NonAlcoholic(){}
NonAlcoholic::NonAlcoholic(const char* _name, double _volume) : Drinks(_name, _volume){}
