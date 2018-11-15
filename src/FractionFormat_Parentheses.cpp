#include "../include/FractionFormat_Parentheses.h"

FractionFormat_Parentheses::FractionFormat_Parentheses(FractionFormat* suivant):FractionFormat(suivant){}

Fraction FractionFormat_Parentheses::traiter(const char * string)
{
	if (strchr(string, '(') == NULL) {
		if(fracsuivant != NULL)
			return fracsuivant->traiter(string);
		else throw "Pas d'expert trouvé";
	}

	const char* test;
	int index = 1;
	int num = 0, dem =0;
	int* choix = &num;
	bool isNegative = false;

	test = strchr(string, '(');
		while (test[index] != '\0' && test[index] != ')') {
				if (test[index] == '-')
					isNegative = !isNegative;
				else if(isdigit(test[index]))
					*choix = (*choix *10)+ test[index] - '0';
				else if (test[index] == ',')
					choix = &dem;
			index++;
		}
	if (isNegative)
		num = -num;

	return Fraction(num, dem);
}
