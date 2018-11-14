#pragma once
#include "FractionFormat.h"
class FractionFormat_DIVISION : public FractionFormat {
public:
	FractionFormat_DIVISION(FractionFormat*);
	Fraction traiter(const char *);
};