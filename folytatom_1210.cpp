#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

class Termek {
	unsigned int cikkszam;
	string neve;
	unsigned int sulya;
	unsigned int ara;
public:
	Termek() {}
	Termek(unsigned int _cikkszam, string _neve, unsigned int _ara, unsigned int _sulya) {
		cikkszam = _cikkszam;
		neve = _neve;
		sulya = _sulya;
		ara = _ara;
	}
	unsigned int getCikkszam() const {
		return cikkszam;
	}
	const string &getNeve() const {
		return neve;
	}
	unsigned int getSulya() const {
		return sulya;
	}
	unsigned int getAra() const {
		return ara;
	}


};



int main()
{
    std::cout << "Hello World!\n"; 
}

