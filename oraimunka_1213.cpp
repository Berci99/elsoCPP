#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Termek {
private:
	int beszerzesiar;
	int nettoeladasiar;
	string nev;
	unsigned int cikkszam;
public:
	Termek() {}
	Termek(int _beszerzesiar, int _nettoeladasiar, string _nev, unsigned int _cikkszam) {
		beszerzesiar= _beszerzesiar;
	    nettoeladasiar= _nettoeladasiar;
		nev= _nev;
		cikkszam= _cikkszam;
	}
	int getBeszerzesiar() {
		return beszerzesiar;
	}
	int getNettoeladasiar() {
		return nettoeladasiar;
	}
	string &getNev() {
		return nev;
	}
	int getCikkszam() {
		return cikkszam;
	}
	int getBruttoeladasiar() {
		return (nettoeladasiar * 1, 27);
	}

};

class Kisbolt {
private:
	string nev;
	string varos;
	string termekek;
	vector<Termek> termekek;
	
public:
	Kisbolt() {}
	Kisbolt(string _nev, string _varos, string _termekek) {
		nev = _nev;
		varos= _varos;
		termekek = _termekek;
	}
	string &getNev() {
		return nev;
	}
	string &getVaros() {
		return varos;
	}
	string &getTermekek() {
		return termekek;
	}
	int getLegnagyobbbevetelthozotermek(Termek termek) {
		for (int i = 0; i < termekek.size(); i++) {
			if (termekek[i].getCikkszam() == termek.getBeszerzesiar()) {
				return i;
			}
		}
		return 0;
	}



int main()
{
    std::cout << "Hello World!\n"; 
}

