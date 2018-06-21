#include <stdio.h>
#include <iostream>
using namespace std;

class Evoeszkoz{
int meret;
string anyag;

public: 
     Evoeszkoz(int _meret, string _anyag){ 
         meret=_meret;
         anyag=_anyag;
     } 
      
     int getMeret(){ 
         return meret; 
     } 
     
     string getAnyag(){ 
         return anyag; 
     } 
      
     void setMeret(int ujmeret){ 
         meret=ujmeret; 
     } 
      
      void setAnyag(string ujanyag){ 
         anyag=ujanyag; 
     } 
      
     void toString(){ 
         std::cout << getMeret()<< "cm " <<getAnyag()<< std::endl; 
     } 
     
}; 

class Kanal : public Evoeszkoz{ 
   int melyseg; 
       public: 
   Kanal(int _meret, string _anyag, int _melyseg):Evoeszkoz(_meret,_anyag){ 
       melyseg=_melyseg; 
   } 
    
   int getMelyseg(){ 
       return melyseg; 
   } 
    
   void setMelyseg(int ujmelyseg){ 
       melyseg=ujmelyseg; 
   } 
    
   void toString(){ 
       std::cout <<getMelyseg()<< "mm"<< std::endl;
   } 
}; 

class Villa : public Evoeszkoz{
    int hegyesseg;
    public:
    Villa(int _meret, string _anyag, int _hegyesseg):Evoeszkoz(_meret,_anyag){
       hegyesseg=_hegyesseg; 
    }
    int getHegyesseg(){ 
       return hegyesseg; 
   } 
    
   void setHegyesseg(int ujhegyesseg){ 
       hegyesseg=ujhegyesseg; 
   } 
  void toString(){
    std::cout << getHegyesseg() <<"cm " << std::endl;
   } 
};

class Kes : public Evoeszkoz{
    int elesseg;
    public:
    Kes(int _meret, string _anyag, int _elesseg):Evoeszkoz(_meret,_anyag){
       elesseg=_elesseg; 
    }
    int getElesseg(){ 
       return elesseg; 
   } 
    
   void setElesseg(int ujelesseg){ 
       elesseg=ujelesseg; 
   } 
 void  toString(){
    std::cout << getMeret()<< "cm " <<getAnyag()<< " "<<getElesseg()<< "fok "<<std::endl;
   }
};



  int main() 
 { 
     Evoeszkoz e(5,"arany"); 
     e.toString(); 
      
     Kanal k(5,"ezust" ,12); 
    k.toString(); 
    
    Villa v(5,"rez" ,12); 
    v.toString(); 

    Kes ke(5,"bronz" ,15); 
    ke.toString(); 

    return 0;
}