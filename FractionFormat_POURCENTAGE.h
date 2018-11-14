#pragma once
#include "FractionFormat.h"
class FractionFormat_POURCENTAGE : public FractionFormat {
public:
	Fraction traiter(const char*);
	FractionFormat_POURCENTAGE(FractionFormat*);
};

