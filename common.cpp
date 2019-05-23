#include "common.h"

using namespace std;

void Test::pomiar(string nazwa_testu) {
	
	float wynik = (float)((1000 * (stop - start))/ CLOCKS_PER_SEC);
	
	ofstream plik(nazwa_pliku.c_str(), ios::app);
	
	if(plik.is_open()) {
		
		plik << nazwa_testu << ",";
		plik << fixed << setprecision(8) << wynik << endl;
	
	} else {
		
		cout << "Mam problem z otwarciem pliku!" << endl;
	}
	
	plik.close();
}