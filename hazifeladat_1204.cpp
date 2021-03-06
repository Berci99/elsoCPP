#include <iostream>
 using namespace std;
 class Bankartya{
 private:
    string datum;
    string hely;
    unsigned int osszeg;
 public:
    Bankartya(){}
    Bankartya(string _datum, string _hely, unsigned int _osszeg){
        datum=_datum;
        hely=_hely;
        osszeg=_osszeg;
    }
     const string &getDatum() const {
        return datum;
    }
     const string &getHely() const {
        return hely;
    }
     unsigned int getOsszeg() const {
        return osszeg;
    }
};
 Bankartya* list = NULL;
int elementNum;
 bool isEmpty(){
    if(elementNum == 0){
        return true;
    }
    return false;
}
void deleteAllElements(){
    if(elementNum != 0 || list != NULL){
        delete[] list;
        elementNum = 0;
    }
}
 void putLast(Bankartya newElement){
    Bankartya *tempList = new Bankartya[elementNum+1];
    for (int i = 0; i < elementNum; ++i) {
        tempList[i] = list[i];
    }
    tempList[elementNum] = newElement;
    if(list) delete[] list;
    list = tempList;
    elementNum++;
}
 void sortores(){
    cout << "----||----" << endl;
}
 void printListElementsToConsole(){
    cout << "\t\t DATUM \t\t HELY \t OSSZEG" << endl;
    for (int i = 0; i < elementNum; ++i) {
        cout << "A(z) " << (i+1) <<". Bankartya:\t" << list[i].getDatum() << "\t" << list[i].getHely() << "\t\t" << list[i].getOsszeg() <<endl;
    }
    sortores();
}

int atlag(){
    int osszegszam=0;
     for(int i=0; i<elementNum; i++){
        osszegszam+=list[i].getOsszeg();
        }
        return osszegszam/elementNum;
     }

int max(){
    if(elementNum>0){
       int max=list[0].getOsszeg();
       for(int i=0;i<elementNum;i++){
        if(list[i].getOsszeg()>max){
            max=list[i].getOsszeg();
        }
       }
       return max;
    }
    else{return 0;}
}

int min(){
   if(elementNum>0){
      int min=list[0].getOsszeg();
    for(int i=0;i<elementNum;i++){
        if(list[i].getOsszeg()<min){
            min=list[i].getOsszeg();
        }
       }
       return min;
    }
    else{return 0;}
}



 int main() {
    int menu = 0;
    do{
        cout << "\t Bankkartya hozaadasa: 1" << endl;
        cout << "\t Bankkartya megtekintese: 2" << endl;
        cout<<"\t Bankkartya osszeg  atlag: 3"<<endl;
        cout<<"\t Legnagyobb osszeg: 4"<<endl;
        cout<<"\t Legkissebb osszeg: 5"<<endl;
        cout << "\t Kilepes: 0" << endl;
        cin >> menu;
        
         if(menu == 1){
            string tempdatum;
            string temphely;
            int temposszeg;
             cout << "Adja meg a bankkartya datumat:" << endl;
            cin >> tempdatum;
            cout << "Adja meg a bankkartya helyet:" << endl;
            cin >> temphely;
            cout << "Adja meg a bankartya osszeget:" << endl;
            cin >> temposszeg;
             putLast(Bankartya(tempdatum, temphely, temposszeg));
        } else if(menu == 2){
            printListElementsToConsole();
        }
        
         else if(menu == 3){
            cout<<"Atlag:"<<atlag()<<"Ft"<<endl;
        }

        else if(menu == 4){
            cout<<"Legnagyobb:"<<max()<<"Ft"<<endl;
        }

        else if(menu == 5){
            cout<<"Legkissebb:"<<min()<<"Ft"<<endl;
        }

        
        
    }while(menu > 0);
     cout << "Bankkartya:" << endl;
    printListElementsToConsole();
     cout << "Kilepve" << endl;
    return 0;
 }
