#include "FractionFormat_DIVISION.h"

FractionFormat_DIVISION::FractionFormat_DIVISION(FractionFormat* suivant) :FractionFormat(suivant){}

Fraction FractionFormat_DIVISION::traiter(const char * string)
{
	if (strchr(string, '/') == NULL) {
		if(fracsuivant != NULL)
			return fracsuivant->traiter(string);
		else throw "Pas d'expert trouvé";
	}
	int index = 0;
	int num = 0, dem = 0;
	int* choix = &num;
	bool isNegative = false;

	while (string[index] != '\0') {
		if (string[index] == '-')
			isNegative = !isNegative;
		else if (isdigit(string[index]))
			*choix = (*choix * 10) + string[index] - '0';
		else if (string[index] == '/')
			choix = &dem;
		index++;
	}
	if (isNegative)
		num = -num;

	return Fraction(num,dem);
}

