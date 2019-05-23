#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

string test_text = "496e20746865204c616e64206f66204d6f72646f722077686572652074686520536861646f7773206c6965";
string test_text32 = "496e20746865204c616e64206f66204d";
string key256 = "664f324b556a71563939573854424e314733596761426545674c4171376c626d";

class Test {
	
public:

	clock_t start, stop;
	string nazwa_pliku;
	
	Test(string f) {
		
		this->nazwa_pliku = f;
	}
	
	void pomiar(string nazwa_testu);
}


#endif