#include "../include/FractionFormat.h"

FractionFormat::FractionFormat(FractionFormat* suivant):fracsuivant(suivant){}

FractionFormat::~FractionFormat()
{
	delete fracsuivant;
}
