/*
 * Napisati program koji generise 20 slucajnih brojeva iz intervala
 * [10,50] u niz.
 * Zatim napraviti funkciju koja ce ispisati samo slozene brojeve
 * (bez prostih brojeva)
 * Ispisati pocetni niz i trazeni niz brojeva
 */
 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 using namespace std;
 
 bool slozen(int broj){
     if(broj!=2){
         for(int i=2;i<broj;i++){
             if(broj%i==0){
                 return true;
             }
         }
     }
     return false;
 }
 
 void ispisslozenih(int N[]){
     for(int i=0;i<20;i++){
         if(slozen(N[i])){
             cout<<N[i]<<" ";
         }
     }
 }
 
 int main(){
     srand(time(NULL));
     rand();
     int niz[20];
     cout<<"Generisani niz: ";
     for(int i=0; i<20;i++){
         niz[i]=rand()%41+10;
         cout<<niz[i]<<" ";
     }
     cout<<"\nNiz od samo slozenih brojeva: ";
     ispisslozenih(niz);
     
     
     
     return 0;
 }