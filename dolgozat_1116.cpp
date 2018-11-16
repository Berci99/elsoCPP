#include<iostream> // bemásoljuk a könyvtárat
#define TOMBMERET 10 // definiáltunk egy tömb méretet
using namespace std;

int globalisTomb[TOMBMERET]; // létrehoztunk egy globális tömböt meglyben a definiált tömbméretre hivatkozunk


bool csere(int elsoIndex, int masodikIndex){

    if(elsoIndex>=0&&elsoIndex<TOMBMERET&&masodikIndex>=0&&masodikIndex<TOMBMERET){

        int ideiglenes = globalisTomb[elsoIndex];

        globalisTomb[elsoIndex]=globalisTomb[masodikIndex];

        globalisTomb[masodikIndex]=ideiglenes;



        return true;

    }

    else return false;

}



//buborek rendezes algoritmusanak megvalositasa C++ -ban

void buborekRendezes()

{

    int i;

    int j;

    for (i = 0; i < TOMBMERET-1; i++) {

        for (j = 0; j < TOMBMERET - i - 1; j++){

            if (globalisTomb[j] > globalisTomb[j + 1])

                csere(j, j + 1);

        }

    }

}



void konzolrolFeltolt(){
for(int i=0; i<TOMBMERET; i++){ // létrehoztunk egy ciklust mely bejárja a tömböt
    cin>>globalisTomb[i]; // konzolrol kérjük be a számokat

}


}



void kiir(){
for(int i=0; i<TOMBMERET; i++){ // létrehoztunk egy ciklust mely bejárja a tömböt
cout<<i<<globalisTomb[i]<<endl;  // kiiratjuk a tömb i-edik elemét

}
}




int main() {

    //feltoltjuk a konzolrol a tombunk minden helyet

    konzolrolFeltolt();

    //kiirjuk a meg rendezetlen tombot

    kiir();

    //rendezzuk a tombot (ez nem jar kiirassal, igy nem latjuk a folyamatot)

    buborekRendezes();

    //kiirjuk a rendezett tomb elemeit

    kiir();





    std::cout << "Lefutottam vegig" << std::endl;

    return 0;

}
