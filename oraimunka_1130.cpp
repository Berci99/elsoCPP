#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


class Tanulo 
{
private:
	string nev;
	unsigned int eletkor;
	unsigned int igazolvany;

public:
	Tanulo() {}
	Tanulo(string _nev, int _eletkor, int _igazolvany) {
		nev = _nev;
		eletkor = _eletkor;
		igazolvany = _igazolvany;
	}
	
	
};

class Osztaly {
private:
	Osztaly() {}
	~Osztaly() {
		if (elemszam != 0 || list != nullptr) {
			delete[]list;
			elemszam = 0;
		}
	   }

	   
	void tanulofelvetel(Tanulo ujtanulo) {
		Tanulo *templist = new Tanulo[elemszam + 1];
		for (int i = 0; i < elemszam; ++i) {
			templist[i] = list[i];
		}

		templist[elemszam] = ujtanulo;
		if (list) { delete[]list; }
		list = templist;
		elemszam++;
	}
	void csere(int elsoindex, int masodikindex) {
		Tanulo ideiglenes = list[elsoindex];
		list[elsoindex] = list[masodikindex];
		list[masodikindex] = ideiglenes;
	}
		
	int legidosebb{
		int maximum() {
	 if (elementszam > 0) {
	 int maximum = list[0].getPrice();
		 for (int i = 0; i < elementszam; i++) {
			if (list[i].getPrice() > maximum) {
				maximum = list[i].getPrice();
			}
		 }

return maximum;
	 }
	 else { return 0; }
 }

 

	int legidosebb{
		int minimum() {
	 if (elementszam > 0) {
	 int minimum = list[0].getPrice();
		 for (int i = 0; i < elementszam; i++) {
			if (list[i].getPrice() < minimum) {
				minimum = list[i].getPrice();
			}
		 }
   return minimum;

	 }
	 else { return 0; }
 }

	}
	}

	int sorbarendezes{

	}



private:
	Tanulo* list;
	int elemszam;

	
};



int main()
{
    std::cout << "Hello World!\n"; 
}
