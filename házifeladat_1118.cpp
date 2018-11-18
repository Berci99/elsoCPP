#include <iostream>
 using namespace std;
 int* lista= NULL;
 int elemekSzama;
 bool ures(){
     if(elemekSzama==0){ // egyenlővé teszzük az elemek számát mivel üres
         return true;
     }
     return false;
 }
 void toroldAzOsszesElemet(){ 
     if(elemekSzama!=0||lista!= NULL){ // vizsgáljuk, hogy nem egyenlő nullával az elemek széma és a lista sem nulla
         delete[]lista; // akkor töröljük 
         elemekSzama = 0; // egyenlővéteszzük nullával, hogy az üres helyre töltsünk számot
     }
 }
 void teddHatra(int newElemek){
     int *tempLista = new int[elemekSzama+1]; //a régi listához adunk egy uj elemet
     for (int i = 0; i < elemekSzama; ++i) {
         tempLista[i]=lista[i];
     }
     tempLista[elemekSzama]=newElemek;
     if(lista){delete[]lista;}
     lista=tempLista;
     elemekSzama++;
 } //idáig kell
 void teddElore(int newElemek){
     int *tempLista = new int[elemekSzama+1];
     tempLista[0]=newElemek;
     for (int i = 0; i < elemekSzama; ++i) {
         tempLista[i+1]=lista[i];
     }
     if(lista){delete[]lista;}
     lista=tempLista;
     elemekSzama++;
 }
 bool indexCsere(int index, int newElemek){
     if(index<elemekSzama&&index>=0){
         lista[index]=newElemek;
         return true;
     }
     else{ return false;}
 }
 bool ketelemCsere(int elsoIndex, int masodikIndex){
     if(elsoIndex>=0&&elsoIndex<elemekSzama&&
             masodikIndex>=0&&masodikIndex<elemekSzama){
         int temp = lista[elsoIndex];
         lista[elsoIndex]=lista[masodikIndex];
         lista[masodikIndex]=temp;
         return true;
     }
     return false;
 }
 bool teddbeazIndexet(int index,int newElemek){
     if(index<0){
         return false;
     }
     else if(index==0){teddElore(newElemek);}
     else if(index==elemekSzama){teddHatra(newElemek);}
     else if(index>elemekSzama){
         int *tempLista = new int[index+1];
         for (int i = 0; i < elemekSzama; ++i) {
             tempLista[i]=lista[i];
         }
         for (int j = elemekSzama; j <index ; ++j) {
             tempLista[j]=0;
         }
         tempLista[index]=newElemek;
         if(lista){delete[]lista;}
         lista=tempLista;
         elemekSzama=index+1;
     }
     else{
         int *tempLista = new int[elemekSzama+1];
         for (int i = 0; i < index; ++i) {
             tempLista[i]=lista[i];
         }
         tempLista[index]=newElemek;
         for (int j = index+1; j < elemekSzama+1; ++j) {
             tempLista[j] = lista[j-1];
         }
         if(lista){delete[]lista;}
         lista=tempLista;
         elemekSzama++;
     }
     return true;
 }
 void szetValasztas(){
     cout<<'\n'<<"-----||-----"<<"\n\n";
 }
 void irdAListatEsAzElemekSzamatAKonzolra(){
     for (int i = 0; i < elemekSzama; ++i) {
         cout<<"Az elemek ["<<i<<"] A lista = "<<lista[i]<<endl;
     }
     szetValasztas();
 }
 int main() {
     for (int i = 0; i < 10; ++i) {
         teddHatra(i);
     }
     irdAListatEsAzElemekSzamatAKonzolra();
     for (int j = 0; j < 10; ++j) {
        teddElore(j+10);
     }
    irdAListatEsAzElemekSzamatAKonzolra();
     teddbeazIndexet(24,145);
     irdAListatEsAzElemekSzamatAKonzolra();
     teddbeazIndexet(22,8765);
     irdAListatEsAzElemekSzamatAKonzolra();
     indexCsere(24,100);
     irdAListatEsAzElemekSzamatAKonzolra();
     ketelemCsere(22,25);
     irdAListatEsAzElemekSzamatAKonzolra();
     toroldAzOsszesElemet();
     std::cout << "Lefutottam!" << std::endl;
     return 0;
 }
