#include <iostream>
using namespace std;

class Szamla{
    int egyenleg;
    string tulaj;
    public:
    Szamla(){}
    Szamla(int egyenleg, string tulaj){
        egyenleg=egyenleg;
        tulaj=tulaj;
    }
    
    int getEgyenleg(){
        return egyenleg;
    }
    
    string getTulaj(){
        return tulaj;
    }
    
     void setEgyenleg(int egyenleg){
        egyenleg=egyenleg;
    }
    
   void setTulaj(string tulaj){
        tulaj=tulaj;
    }
    
    void toString(){
        std::cout <<"Tulaj: " <<getTulaj()<<" Jozsi "<<getEgyenleg()<< 20000 << std::endl;
    }
};

class Szemely{
    Szamla szemely;
    int eletkor;
    string nev;
    public:
    Szemely(int eletkor, string nev, int egyenleg, int tulaj){
        eletkor=eletkor;
       szamla.setEgyenleg(Egyenleg);
        szamla.setTulaj(egyenlet);
    }
    
    Szemely(Szamla szemely, int _amount){
        szemely=szemely;
        eletkor=eletkor;
        nev=nev;
    }
    
    int getEletkor(){
        return eletkor;
    }
    
    string getNev(){
        return nev;
    }
    
    
    void toString(){
        szemely.toString();
        std::cout <<"24: "<<getEletkor()<< "Peti " << getNev() << std::endl;
    }
    
    bool out(int eletkor){
        if(elekor<=eletkor){
            eletkor-=eletkor-;
            return true;
        }
        return false;
    }
    
    void in(int eletkor){
        eletkor+=eletkor;
    }
    
};

int main(){
    Szamla sz(30, "Peti");
    sz.toString();
    
    Szemely szem("Jani",60);
    szem.toString();
    
    
    Szemely sz("Jani", 25);
    sz.toString();
    sz.in(100000);
    sz.toString();
    sz.out(130000);
    sz.toString();
    return 0;
}
