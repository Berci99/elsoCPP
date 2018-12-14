#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Pont {

public:
	int y;
	int x;
	Pont() {}
	Pont(int _x, int _y) {
		x = _x;
		y = _y;
	}

};

class Tav
{
public:
	string nev;
	int meret;

	Tav() {}
	Tav(string _nev, int _meret) {
		nev = _nev;
		meret = _meret;
	}
	

};


int main()
{
	vector<Pont> pontok;
	for (int i = 0; i < 10; i++) {
		pontok.push_back(Pont(i + 1, i + 2));
	}



	Pont elso(5, 6);
	elso.x = 7;
	elso.y = 12;
	
	for (int i = 0; i < 10; i++) {
		cout << pontok[i].x << '\t' << pontok[i].y << endl;
	}

	vector<Tav> tavok;


}
