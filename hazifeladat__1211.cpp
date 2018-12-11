#include <iostream>
#include <vector>
 using namespace std;
 class Termek {
private:
    int cikkszam;
    string nev;
    int ar;
    int suly;
 public:
    Termek(){}
    Termek(int _cikkszam, string _nev, int _ar, int _suly){
        cikkszam = _cikkszam;
        nev = _nev;
        ar = _ar;
        suly = _suly;
    }
     int getCikkszam(){
        return cikkszam;
    }
     string &getNev(){
        return nev;
    }
     int getAr(){
        return ar;
    }
     int getSuly(){
        return suly;
    }
};
 class Webshop {
private:
    vector<Termek> raktaronLevoTermek;
    vector<Termek> eladotTermek;
    string nev;
    string cim;
     int bevetel=0;
    int eladottDarab=0;
 public:
    Webshop(){}
    Webshop(string _nev, string _cim){
        nev = _nev;
        cim = _cim;
    }
     string &getNev(){
        return nev;
    }
     string &getCim(){
        return cim;
    }
     int getEladottDarab(){
        return eladottDarab;
    }
     int getBevetel(){
        return bevetel;
    }
     int getTermekPositionInRaktaronLevoTermek(Termek termek){
        for(int i = 0; i < raktaronLevoTermek.size(); i++){
            if(raktaronLevoTermek[i].getCikkszam() == termek.getCikkszam()){
                return i;
            }
        }
        return 0;
    }
     void addRaktaronLevoTermek(Termek termek){
        raktaronLevoTermek.push_back(termek);
    }
     void removeRaktaronLevoTermek(Termek termek){
        raktaronLevoTermek.erase(raktaronLevoTermek.begin()+getTermekPositionInRaktaronLevoTermek(termek));
    }
     bool isExistsRaktaronLevoTermek(Termek termek){
        for(int i = 0; i < raktaronLevoTermek.size(); i++){
            if(raktaronLevoTermek[i].getCikkszam() == termek.getCikkszam()){
                return true;
            }
        }
        return false;
    }
     void addEladotTermek(Termek termek){
        eladotTermek.push_back(termek);
    }
     bool isExistsEladotTermek(Termek termek){
        for(int i = 0; i < eladotTermek.size(); i++){
            if(eladotTermek[i].getCikkszam() == termek.getCikkszam()){
                return true;
            }
        }
        return false;
    }
     void eladas(Termek termek){
        removeRaktaronLevoTermek(termek);
        addEladotTermek(termek);
        bevetel+=termek.getAr();
        eladottDarab++;
    }
    Termek getLegdragabbanEladott(){
        Termek temp;
        for(int i = 0; i < eladotTermek.size(); i++){
            if(!isExistsEladotTermek(temp) || eladotTermek[i].getAr() > temp.getAr()){
                temp = eladotTermek[i];
            }
        }
        return temp;
    }
     Termek getLegolcsobbanEladott(){
        Termek temp;
        for(int i = 0; i < eladotTermek.size(); i++){
            if(!isExistsEladotTermek(temp) || eladotTermek[i].getAr() < temp.getAr()){
                temp = eladotTermek[i];
            }
        }
        return temp;
    }

     void termekTulajdonsagok(Termek termek){
        cout << "\t CIKKSZAM \t NEV \t AR \t SULY" << endl;
        cout << "\t\t" << termek.getCikkszam() << "\t" << termek.getNev() << "\t" << termek.getAr() << "Ft\t" << termek.getSuly() << "kg" << endl;
    }
     void termekekRaktaron(){
        cout << "Raktaron levo termekek:" << endl;
        cout << "\t CIKKSZAM \t NEV \t AR \t SULY" << endl;
        for(int i = 0; i < raktaronLevoTermek.size(); i++){
            cout << (i+1) << ".\t\t" << raktaronLevoTermek[i].getCikkszam() << "\t" << raktaronLevoTermek[i].getNev() << "\t" << raktaronLevoTermek[i].getAr() << "Ft\t" << raktaronLevoTermek[i].getSuly() << "kg" << endl;
        }
    }
     void termekekEladott(){
        cout << "Eladott termekek:" << endl;
        cout << "\t CIKKSZAM \t NEV \t AR \t SULY" << endl;
        for(int i = 0; i < eladotTermek.size(); i++){
            cout << (i+1) << ".\t\t" << eladotTermek[i].getCikkszam() << "\t" << eladotTermek[i].getNev() << "\t" << eladotTermek[i].getAr() << "Ft\t" << eladotTermek[i].getSuly() << "kg" << endl;
        }
    }
};
 void sortvalaszt(){
    cout << "----[]-----" << endl;
}
 int main(){
     Webshop w("Whish", "Nem tudom utca 26.");
    Termek t0(1, "labda", 800, 1);
    Termek t2(2, "banan", 200, 5);
    Termek t3(3, "keksz", 600, 3);
    Termek t4(4, "ollo", 1000, 1);
     w.addRaktaronLevoTermek(t0);
    w.addRaktaronLevoTermek(t2);
    w.addRaktaronLevoTermek(t3);
    w.addRaktaronLevoTermek(t4);
     w.termekekRaktaron();
    sortvalaszt();
    w.termekekEladott();
    sortvalaszt();
     w.eladas(t4);
    w.termekekRaktaron();
    sortvalaszt();
    w.termekekEladott();
    sortvalaszt();
    cout << "Eladott termekek szama: " << w.getEladottDarab() << endl;
    cout << "Bevetel: " << w.getBevetel() << "Ft" << endl;
    sortvalaszt();
     w.eladas(t2);
    w.termekekRaktaron();
    sortvalaszt();
    w.termekekEladott();
    sortvalaszt();
    cout << "Eladott termekek szama: " << w.getEladottDarab() << endl;
    cout << "Bevetel: " << w.getBevetel() << "Ft" << endl;
    sortvalaszt();
     cout << "Legolcsobb eladott termek:" << endl;
    w.termekTulajdonsagok(w.getLegolcsobbanEladott());
    sortvalaszt();
    cout << "Legdragabb eladott termek:" << endl;
    w.termekTulajdonsagok(w.getLegdragabbanEladott());
    sortvalaszt();
     cout << "Vegigertem" << endl;
    return 0;
}
