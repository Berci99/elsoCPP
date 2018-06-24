/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Dino{
    int meret;
    
    
    public:
    Dino(){}
    Dino(int _meret){
        meret=_meret;
     
    }
    
    int getMeret(){return meret;}
    
    void setMeret(int ujmeret){meret=ujmeret;}
    
    
    void toString(){
        std::cout << getMeret() << " meter " << std::endl;
    }
};

class Futodino : public Dino{
    int labak;
    
    public:
    Futodino(){}
    Futodino(int meret, int _labak):Dino(meret){
        labak=_labak;
    }
    
    int getLabak(){return labak;}
    void setLabak(int ujlabak){labak=ujlabak;}
    void toString(){
       std::cout << "meret: " << getMeret() << "labak: " << getLabak() << std::endl;
    }
};

class Repulodino : public Dino{
    int szarnyak;
    
    public:
    Repulodino(){}
    Repulodino(int meret, int _szarnyak):Dino(meret){
        szarnyak=_szarnyak;
    }
    
    int getSzarnyak(){return szarnyak;}
    void setSzarnyak(int ujszarnyak){szarnyak=ujszarnyak;}
    
    void toString(){
       std::cout << "meret: " << getMeret() << " szarnyak: " << getSzarnyak() << std::endl;
    }
};

class Ketrec{
  Dino lako;
  int szam;

public:
    Ketrec (int _meret, int _szam){
        szam=_szam;
    lako.setMeret(_meret);
  }
  int getSzam(){return szam;}
  void setSzam(int ujszam){szam=ujszam;}
  
void toString (){
    std::cout << "meret: " << lako.getMeret()<< " szam: " << getSzam() << std::endl;
    
}
};



int main()
{
    Futodino fold(20, 3);
    fold.toString();
    Repulodino eg(15, 2);
    eg.toString();
    
    
   Dino l(30);
   l.toString();
    
  Ketrec ket(4,6);
    ket.toString();

    
}
