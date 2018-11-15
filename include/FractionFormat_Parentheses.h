#pragma once
#include "FractionFormat.h"
class FractionFormat_Parentheses : public FractionFormat{
public:
	Fraction traiter(const char*);
	FractionFormat_Parentheses(FractionFormat*);
};