/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

bool otteloszt(int szamok[10]){
    for(int i=0;i<10;i++){
        if(szamok[i]%5==0){
            std::cout << szamok[i] << std::endl;
            return true;
        }
    }
    return false;
}

void kiirvane(int szamok[10]){
    if(otteloszt(szamok)){
        std::cout << "A szamok kozott van 5-tel oszthato szam." << std::endl;
    }
    else{
        std::cout << "A szamok kozott nincs 5-tel  oszthato szam."<< std::endl;
    }
}

int main()
{
    int szamok[10];
    for(int i=0;i<10;i++){
        szamok[i]=(i+1)*5;
        std::cout << szamok[i] << std::endl;
    }
    
    kiirvane(szamok);

    return 0;
}
