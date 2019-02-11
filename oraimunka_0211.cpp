#include <string>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;



class Tranzakcio {
public:
	string nev;
	int ar;

	Tranzakcio() {}
	Tranzakcio(string _nev, int _ar) {
		nev = _nev;
		ar = _ar;
		}

};

vector<Tranzakcio> beolvasottTranzakciok;

int main() {
	string nev;
	int ar;
	char elvalaszto = ':';

	while (nev != "0") {
		cout << "Kerem adja meg a . tranzakcio nevet: " << endl;
		cin >> nev;
		if (nev != "0") {
			cout << "Kerem adja meg a . tarnzakcio arat: " << endl;
			cin >> ar;

			beolvasottTranzakciok.push_back(Tranzakcio(nev, ar));
		}
	}

	cout << "Beolvasott tranzakciok szama: " << beolvasottTranzakciok.size() << endl;

	ofstream fajlom("vasarlasok.txt");

	if (fajlom.is_open()) {
		cout << "A fajl megnyitva irasra." << endl;

		for (int i = 0; i < beolvasottTranzakciok.size(); ++i) {
			fajlom << beolvasottTranzakciok[i].nev;
			fajlom << ':';
			fajlom << elvalaszto;
			fajlom << beolvasottTranzakciok[i].ar;
			fajlom << ':';

		}

		cout << "A fajl feltoltve." << endl;

	}
	else { cout << "Nem sikerult megnyitni a fajlt!"; }
	fajlom.close();
	cout << "A fajlom bezarva." << endl;

	ifstream fajlomOlvasasra("vasarlasok.txt")
		if (fajlomOlvasasra.is_open()) {
			cout << A fajl nyitva olvasasra. << endl;

			string beolvasottSor;
			string kiolvasottNev;
			string kiolvasottAr;
			int ar = stoi(kiolvasottKor);

			beolvasottTranzakcio.push_back(Tranzakcio(kiolvasottNev, ar));
		}


		else { cout << "Nem sikerult megnyitni a fajlt!"; }
}
