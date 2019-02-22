// kommentelesek segitsegevel irja le, hogy milyen lépések szuksegesek a fajlbol valo kiolvasásához cpp
// nyelven 
// valositsa meg a kodot a következő specifikácioval: fájl: hallgatok. txt
// kinézet: nev'\t' atlag


#include <iostream> // megfelelo konyvtarak hasznalata 
#include <fstream>
#include <string>
#include <vector>

using namespace std; // azert hasznaljuk h ne kelljen hasznalni std-t a coutok ele es vegere

class Tamas { // osztaly valtozok hsznalata
public:
	string nev;
	int atlag;

	Tamas() {}
	Tamas(string _nev, int _atlag) {
		nev = _nev;
		atlag = _atlag;


	}
};

vector<Tamas>beTamas; // letre hozunk egy vektort ami Tamasokat tarol es a neve beTamas
const char elvalaszto = '\t'; // at elvalaszto jele
const string fajl = "hallgatok.txt"; //megnyitjuk a fajlt

bool olvas() {
	ifstream fajlolvas(fajl); // fajlt kiolvassuk
	if (fajlolvas.is_open()) { // vizsgaljuk, hogy meg van e nyitva 

		string olvasottsor;
		string olvasottnev;
		string olvasottatlag;

		while (getline(fajlolvas, olvasottsor)) {
			unsigned long elvalasztohelye = olvasottsor.find(elvalaszto);// megkeresi az elvalasztot a sorban es az elejetol az elvalasztoig megy

			olvasottnev = olvasottsor.substr(0, elvalasztohelye);
			olvasottatlag = olvasottsor.substr(elvalasztohelye + 1, olvasottsor.size());// a masodik feletol a sor vegeig megy es ott valasztja el

			int csinaltatlag = stoi(olvasottatlag); // az intbol stringet csinal


			beTamas.push_back(Tamas(olvasottnev, csinaltatlag));// be tudunk tenni Tamasokat
		}
		fajlolvas.close(); //bezarjuk a fajlt
		return true;
	}
	else {
		return false;
	}
}
int maximumkeres() {// megkeressuk a legnagyobb atlagu tamast

	int maximum = beTamas[0].atlag;

	for (int i = 0; i < beTamas.size(); ++i) {
		if (beTamas[i].atlag > maximum) {
			maximum = beTamas[i].atlag;
		}
	}
	return maximum;
}

int minimumkeres() {// megkeressuk a legkissebb atlagu tamast

	int minimum = beTamas[0].atlag;
	for (int i = 0; i < beTamas.size(); ++i) {
		if (beTamas[i].atlag < minimum) {
			minimum = beTamas[i].atlag;
		}
	}
	return minimum;
}




string legnagyobbatlag() { // azert kell mert nem az atlag kell hanem a neve a legnagyobb atlagunak

	string legnagyobbatlag = beTamas[0].nev;
	int maximum = beTamas[0].atlag;

	for (int i = 0; i < beTamas.size(); ++i) {
		if (beTamas[i].atlag > maximum) {
			legnagyobbatlag = beTamas[i].nev;
			maximum = beTamas[i].atlag;
		}
	}
	return legnagyobbatlag;
}

string legkissebbatlag() {
	//azert kell mert nem az atlag kell hanem a neve a legkissebb atlagunak

	string legkissebbatlag = beTamas[0].nev;
	int minimum = beTamas[0].atlag;

	for (int i = 0; i < beTamas.size(); ++i) {
		if (beTamas[i].atlag < minimum) {
			legkissebbatlag = beTamas[i].nev;
			minimum = beTamas[i].atlag;
		}
	}
	return legkissebbatlag;
}







int main()
{
	cout << "A legnagyobb atlag neve: " << legnagyobbatlag() << " es szama: " << maximumkeres() << endl;// kiiratasok
	cout << "A legkissebb atlag neve: " << legkissebbatlag() << " es szama: " << minimumkeres() << endl;


	std::cout << "Hello World!\n";
}

