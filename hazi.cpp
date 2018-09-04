/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;


class Edesseg{
    int cukormennyisege;
    
    
    public:
    Edesseg(){}
    Edesseg(int _cukormennyisege){
        cukormennyisege=_cukormennyisege;
     
    }
    
    int getCukormennyisege(){return cukormennyisege;}
    
    void setCukormennyisege(int ujcukormennyisege){cukormennyisege=ujcukormennyisege;}
    
    
    void toString(){
        std::cout << getCukormennyisege() << " Gramm " << std::endl;
    }
};

class Hidegedesseg : public Edesseg{
    int maximalishofokfogy;
    
    public:
    Hidegedesseg(){}
    Hidegedesseg(int cukormennyisege, int _maximalishofokfogy):Edesseg(cukormennyisege){
        maximalishofokfogy=_maximalishofokfogy;
    }
    
    int getMaximalishofokfogy(){return maximalishofokfogy;}
    
    void setMaximalishofokfogy(int ujmaximalishofokfogy){maximalishofokfogy=ujmaximalishofokfogy;}
    
    void toString(){
       std::cout << getCukormennyisege() << " Gramm, " << getMaximalishofokfogy()<< " Fok "  << std::endl;
    }
};

class Sutemeny : public Edesseg{
    int sutesiido;
    
    public:
    Sutemeny(){}
    Sutemeny(int cukormennyisege, int _sutesiido):Edesseg(cukormennyisege){
        sutesiido=_sutesiido;
    }
    
    int getSutesiido(){return sutesiido;}
    void setSutesiido(int ujsutesiido){sutesiido=ujsutesiido;}
    
    void toString(){
       std::cout << getCukormennyisege() << " Gramm, "  << getSutesiido()<< " Perc " << std::endl;
    }
};

    class Fagylalt : public Edesseg{
    string ize;
    
    public:
    Fagylalt(int cukormennyisege, string _ize):Edesseg(cukormennyisege){
        ize=_ize;
    }
    
    string getIze(){return ize;}
    void setIze(string ujize){ize=ujize;}
    
    void toString(){
       std::cout << getCukormennyisege() << " Gramm, "  << getIze()<< " ízü " << std::endl;
    }
};




int main()
{
   Hidegedesseg elso(15,20);
    elso.toString();
    Sutemeny elsosuti(20,25);
    elsosuti.toString();
    Fagylalt elsofagyi(18,"Csoki");
    elsofagyi.toString();
 Edesseg l(25);
 l.toString();
  

    
}
