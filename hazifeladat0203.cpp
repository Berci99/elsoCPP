#include <iostream> //könyvtálakat bemásoljuk
#include <string>
#include <fstream>
#include <vector>

#define MERET 3 //Definiálunk egy  számot melyre tudunk késöbb hivatkozni

using namespace std;


class Szemely{ // létre hozunk egy személy nevü osztályt
public:
    string nev; // két adat
    int kor;

    Szemely(){}
    Szemely(string _nev, int _kor){
        nev=_nev;
        kor=_kor;
    }

};


Szemely szemelyek[MERET]; // tömb létrehozása
vector<Szemely> beolvasottSzemelyek; // vektor létrehozása

int main() {
    string nev;
    int kor;
    char elvalaszto='\t';

	
    for (int i = 0; i < MERET; ++i) { // feltöltjük a tömböt
        cout<<"Kerem adja meg a "<<i<<". szemely nevet: "<<endl;
        cin>>nev;
        cout<<"Kerem adja meg a "<<i<<". szemely korat: "<<endl;
        cin>>kor;
        szemelyek[i]=Szemely(nev, kor);
    }

	
    ofstream fajlom("lista.txt"); // megnyitja a fajlt

    if(fajlom.is_open()){
        cout<<"A fajl megnyitva irasra."<<endl;

        for (int i = 0; i < MERET; ++i) {
            fajlom<<szemelyek[i].nev;
            fajlom<<'\t';
            fajlom<<szemelyek[i].kor;
            fajlom<<'\n';
        }
        cout<<"A fajl feltoltve."<<endl;

    } else{cout<<"Nem sikerult megnyitni a fajlt!";}

    fajlom.close();
    cout<<"A fajl bezarva."<<endl;


    ifstream fajlomOlvasasra("lista.txt");// megnyitja a fajlt

    if(fajlomOlvasasra.is_open()){
        cout<<"A fajl megnyitva olvasasra."<<endl; // ha a fajl nyitva akkor kiirja

        string beolvasottSor;

        string kiolvasottNev;
        string kiolvasottKor;

        while (getline(fajlomOlvasasra,beolvasottSor)){
            unsigned long elvalasztoHelye=beolvasottSor.find('\t'); 
            kiolvasottNev=beolvasottSor.substr(0,elvalasztoHelye); 
            kiolvasottKor=beolvasottSor.substr(elvalasztoHelye+1,beolvasottSor.size()); 

            int kor=stoi(kiolvasottKor); 

            beolvasottSzemelyek.push_back(Szemely(kiolvasottNev,kor));
        }

    }else{cout<<"Nem sikerult megnyitni a fajlt!";}

    fajlomOlvasasra.close();
    cout<<"A fajl olvasasa befejezodott."<<endl;

	
    for (int j = 0; j < beolvasottSzemelyek.size(); ++j) {// bejárja a vektort és kiirja
        cout<<beolvasottSzemelyek[j].nev<<'\t'<<beolvasottSzemelyek[j].kor<<endl;
    }
    cout<<"Minden tarolt adat kiirva."<<endl;

    std::cout << "A kod a vegehez ert." << std::endl;
    return 0;
} 
