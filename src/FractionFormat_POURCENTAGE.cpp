#include "../include/FractionFormat_POURCENTAGE.h"

FractionFormat_POURCENTAGE::FractionFormat_POURCENTAGE(FractionFormat *suivant):FractionFormat(suivant){}


Fraction FractionFormat_POURCENTAGE::traiter(const char* string) {
	
	if (strchr(string, '%') == NULL) {
		if(fracsuivant != NULL)
			return fracsuivant->traiter(string);
		else throw "Pas d'expert trouvé";
	}
	int index = 0;
	int num = 0, dem = 0;
	bool isNegative = false;

	while (string[index] != '%') {
		if (string[index] == '-')
			isNegative = !isNegative;
		else if (isdigit(string[index]))
			num = (num * 10) + string[index] - '0';
		index++;
	}
	if (isNegative)
		num = -num;
	return Fraction(num, 100);
}

