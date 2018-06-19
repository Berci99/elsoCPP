#include <stdio.h>
#include <iostream>
using namespace std;

class Ember{
int kor;
string nev;

 public:
    Ember(int _kor, string _nev){
        kor=_kor;
        nev=_nev;
    }

int getKor(){
        return kor;
    }
    
    string getNev(){
        return nev;
    }
    
    void setKor(int ujkor){
        kor=ujkor;
    }
    
    void setNev(string ujnev){
        nev=ujnev;
    }

 void toString(){
        std::cout << getNev() <<" Jani  "<<getKor()<<" yr"<< std::endl;
    }
};

class Alkalmazott : public Ember{
    int fizetes;
    
    public:
    Alkalmazott(int _kor, string _nev, int _fizetes): Ember(_kor,_nev){
        fizetes=_fizetes;
    }
    
    int getFizetes(){
        return fizetes;
    }
    
    
    void setFizetes(int ujfizetes){
        fizetes=ujfizetes;
    }
    
    void toString(){
        std::cout << getNev() <<" Jani  "<<getKor()<<" yr "<< getFizetes()<<" Ft"<<std::endl;
    }
};


class Tanulo : public Ember{
    int diakszam;
    
    public:
    Tanulo(int _kor, string _nev, int _diakszam):Ember(_kor, _nev){
        diakszam=_diakszam;
    }

    int getDiakszam(){
        return diakszam;
    }

    void setDiakszam(int ujdiakszam){
        diakszam=ujdiakszam;
    }
    
    void toString(){
        std::cout << getNev() <<" Jani  "<<getKor()<<" yr "<< getDiakszam()<<" 111"<<std::endl;
    }
};



int main()
{
    Ember elso(7,"Jani");
    elso.toString();
    Alkalmazott elsoalkalmazott(8,"Peti",11);
    elsoalkalmazott.toString();
    Tanulo elsotanulo(3,"Jozsi",12);
    elsotanulo.toString();

    return 0;
}
