/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Epulet{
    int ablakokszama;
    int alapterulet;
    
  public:
    Epulet(int _ablakokszama, int _alapterulet){
        _ablakokszama=_ablakokszama;
        alapterulet=_alapterulet;
    }
    
    
    
 int getAblakokszama(){
        return ablakokszama;
    }
    
    int getAlapterulet(){
        return alapterulet;
    }
    
    
    void setAblakokszama(int ujablakokszama){
        ablakokszama=ujablakokszama;
    }
    
    void setAlapterulet(int ujalapterulet){
        alapterulet=ujalapterulet;
    }

 void toString(){
        std::cout << getAblakokszama() <<" db  "<<getAlapterulet()<<" nm"<< std::endl;
    }
};

class Haz : public Epulet{
    int szobakszama;
    int ajtokszama;
    
    public:
    Haz(int ablakokszama, int alapterulet, int szobakszama, int ajtokszama):Epulet(ablakokszama, alapterulet){
        szobakszama=szobakszama;
        ablakokszama=ablakokszama;
    }
    
   int getSzobakszama(){return szobakszama;}
   int getAjtokszama(){return ajtokszama;}
    void setSzobakszama(int ujszobakszama){szobakszama=ujszobakszama;}
    void setAjtokszama(int ujajtokszama){ajtokszama=ujajtokszama;}
    void toString(){
        Epulet::toString();
       std::cout << getSzobakszama() <<"6  "<<getAjtokszama()<<" 11"<< std::endl;
    }
    
};
    class Garazs : public Epulet{
    int parkolohelyekszama;
    
    public:
    Garazs(int _ablakokszama, int _alapterulet, int _parkolohelyekszama):Epulet(_ablakokszama, _alapterulet){
        parkolohelyekszama=_parkolohelyekszama;
    }
    
    int getpPrkolohelyekszama(){return parkolohelyekszama;}
    void setParkolohelyekszama(int ujparkolohelyekszama){parkolohelyekszama=ujparkolohelyekszama;}
    
    void toString(){
        Epulet::toString();
        std::cout << "parkolohelyekszama: " << parkolohelyekszama << std::endl;
    }
    
    
};

int main()
{
    Epulet elso(8,240);
    elso.toString();
    Haz elsohaz(8,12,24,40);
    elsohaz.toString();
    Garazs elsogarazs(3,320,802);
    elsogarazs.toString();

    return 0;
    
}  
    