#include "ChargeurListeFraction.h"
#include "FractionFormat.h"
#include "FractionFormat_DIVISION.h"
#include "FractionFormat_Parentheses.h"
#include "FractionFormat_POURCENTAGE.h"

vector<Fraction>* ChargeurListeFraction::charge(ifstream& testfichier)
{
	vector<Fraction>* res= new vector<Fraction>;
	FractionFormat* FractionCOR = new FractionFormat_DIVISION(new FractionFormat_Parentheses(new FractionFormat_POURCENTAGE(NULL)));
	int nbstring = 0;
	int index = 0;
	char** listeString = new char*[nbstring + 1];
	char current_char = NULL;
	if (testfichier.good()) {
		current_char = testfichier.get();
		listeString[nbstring] = new char[100];
	}
	else
		throw "Erreur fichier non trouvé";
	while (testfichier.good()) {
		if (current_char == '\n') {
			listeString[nbstring][index] = '\0';
			current_char = testfichier.get();
			nbstring++;
			if (testfichier.good()) {
				if (nbstring % 1000 == 0)
					cout << "String number " << nbstring << endl;
				if (nbstring > 0) {
					char**temp = listeString;
					listeString = new char*[nbstring + 1];
					for (int i = 0; i < nbstring; i++) {
						listeString[i] = temp[i];
					}
					delete[] temp;
				}
				listeString[nbstring] = new char[100];
				index = 0;
			}

		}
		else {
			listeString[nbstring][index] = current_char;
			index++;
			current_char = testfichier.get();
			if (current_char == EOF) {
				listeString[nbstring][index] = '\0';
				nbstring++;
			}
		}
	}
	testfichier.close();
	for (int i = 0; i < nbstring; i++) {
		try {
			res->push_back(FractionCOR->traiter(listeString[i]));
			delete[] listeString[i];
		}
		catch (const char*) {
		}
	}
	delete[] listeString;
	delete FractionCOR;
	return res;
}