#pragma once
#include "Fraction.h"
class FractionFormat
{
protected:
	FractionFormat* fracsuivant;
public:
	 FractionFormat(FractionFormat*);
	 ~FractionFormat();
	 virtual Fraction traiter(const char*)=0;
};

