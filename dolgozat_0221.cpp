#include <vector>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Kaja {
public:
	string nev;
		int ar;

Kaja(){}
Kaja(string _nev, int _ar) {
	nev = _nev;
	ar = _ar;
}


};
vector<Kaja>beKaja;
const char elvalaszto='-';
const string fajl = "fajl.txt";

bool olvas(){
	ifstream fajlolvas(fajl);
	if (fajlolvas.is_open()) {
		string olvasottsor;
		string olvasottnev;
		string olvasottar;

		while (getline(fajlolvas,olvasottsor)) {
			beKaja.push_back(Kaja(olvasottnev));
		} 
		return true;
	}
	else {
		return false;
	}

}
int maximumkeres() {
	int maximum = beKaja[0].ar;
	for (int i = 0; i < beKaja.size(); i++) {
		if (beKaja[0].ar < maximum) {
			maximum = beKaja[0].ar;
		}
	}
	return true;
}

int minimumkeres() {
	int minimum = beKaja[0].ar;
	for (int i = 0; i < beKaja.size(); i++) {
		if (beKaja[0].ar > minimum) {
			minimum = beKaja[0].ar;
		}
	}
	return true;
}

int main()
{
    std::cout << "Hello World!\n"; 
}

