#include <iostream>
#define TOMBMERET 1
using namespace std;



void konzolrolfeltolt(){
    int szam;
    cin>>szam;
    cout<<szam*szam<<endl;
}

void osszegkiir(){
    int elsoszam; int masodikszam;
    cin>>elsoszam;
    cin>>masodikszam;
    cout<<elsoszam+masodikszam<<endl;
}

void faktorialis(){
    int szam;
    cin>>szam;
   for(int i=szam-1; i>0; i--){
      szam=szam*i;
   }
    cout<<szam<<endl;
    
}


int main()
{
   konzolrolfeltolt();

osszegkiir();
faktorialis();
    return 0;
}
