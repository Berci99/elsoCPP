#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;
class Alkatresz {


private:
	
	unsigned int gyartasiszam;
	unsigned int sulya;
public:
	Alkatresz() {}
	Alkatresz(int _gyartasiszam, int _sulya) {
		gyartasiszam = _gyartasiszam;
		sulya = _sulya;
	}
	unsigned int getGyartasszam() const {
		return gyartasiszam;
	}

	unsigned int getSulya() const {
		return sulya;
	}





};





int main()
{
	vector<int> vektorom;
	map<int, string>parom;
	parom.insert(pair<int, string>(15, "alma"));


		map<int, string>::iterator iter;
	for (iter = parom.begin(); iter != parom.end(); iter++) {

		cout << iter->first << '\t';
		cout << iter->second;
	}
	cout<<endl;
	for (int i = 0; i < 11; i++) {
		vektorom.push_back(i);
    }
	for (int i = 0; i < vektorom.size(); i++) {
		cout << vektorom[i] << endl;
	
	}

	vector<Alkatresz> szerszam;


	for (int i = 0; i < 18; i++) {
		szerszam.push_back(Alkatresz(245, 1555));
	}
	for (int i = 0; i < szerszam.size(); i++) {
		cout << szerszam[i].getGyartasszam()<< " "<<szerszam[i].getSulya()<< endl;

	}




    cout << "Lefutottam!\n"; 
}
