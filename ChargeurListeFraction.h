#pragma once
#include <vector>
#include "Fraction.h"
#include <fstream>
class ChargeurListeFraction
{
public:
	static vector<Fraction>* charge(ifstream&);
};

