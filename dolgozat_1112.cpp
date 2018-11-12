#include <iostream>
#define TOMBMERET 10
using namespace std;

int szamok[TOMBMERET];


bool szamcsere(int szam, int masodikszam){

    if(szam>=0&&szam<TOMBMERET&&masodikszam>=0&&masodikszam<TOMBMERET){

        int temp = szamok[szam];

        szamok[szam] = szamok[masodikszam];

        szamok[masodikszam] = temp;

        return true;

    }

    return false;

}


int main()
{
    szamcsere(8,5);
    cout << "Lefutottam!" << endl;
    return 0;
}
