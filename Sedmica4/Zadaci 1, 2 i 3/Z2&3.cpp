/*
Deklarišite strukturu trougao i kruznica:
a. kreirajte troguao T1 čije ćete koordinate tačaka A, B i C učitati sa tastature
b. kreirajte kružnicu K1, čiji se centar nalazi u tački A trougla T1
c. vrijednost poluprečnika kružnice K1 učitajte sa tastature
d. kreirajte kružnicu K3 sa istim osobinama kao kružnica K1, tj. K1 iskopirajte u novi K3
e. povećajte poluprečnik kružnice K3 za 10%
f. kreirajte kružnicu K2 koja se nalazi na tački B sa istim poluprečnikom kao kod K3*/

#include <iostream>
#include "strukture.h"
using namespace std;
//Zadatak 3 je nastavak na zadatak 2, void funkcija infokruznica je dodatak
void infokruznica(kruznica k)
{
    cout<<"Infokruznica"<<endl;
    cout<<"Centar O("<<k.O.x<<", "<<k.O.y<<")"<<endl;
    cout<<"poluprecnik r = "<<k.r<<endl;
}
int main()
{
    trougao T1;
    cout<<"Unesite koordinate tacke A: "<<endl;
    cin>>T1.A.x>>T1.A.y;
    cout<<"Unesite koordinate tacke B: "<<endl;
    cin>>T1.B.x>>T1.B.y;
    cout<<"Unesite koordinate tacke C: "<<endl;
    cin>>T1.C.x>>T1.C.y;
    kruznica k1;
    k1.O=T1.A;
    cout<<"Unesite poluprecnik kruznice k1: "<<endl;
    cin>>k1.r;
    kruznica k3;
    k3=k1;
    k3.r+=(k3.r/10);
    kruznica k2;
    k2.O=T1.B;
    k2.r=k3.r;
    infokruznica(k1);
    infokruznica(k2);
}