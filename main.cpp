#include "ChargeurListeFraction.h"
#ifdef _WIN32
#include <Windows.h>
#endif
using namespace std;

int main(){	
	#ifdef _WIN32
	SetConsoleOutputCP(CP_UTF7);
	#endif
	ifstream testfichier("Fractions.txt", ifstream::in);
	try {
		vector<Fraction>* test = ChargeurListeFraction::charge(testfichier);
		for (Fraction n : *test)
			cout << n << endl;
		delete test;
	}
	catch (const char* erreur) {
		cout << erreur << endl;
	}
    #ifdef _WIN32
        system("dir");
    #endif
	return 0;
}