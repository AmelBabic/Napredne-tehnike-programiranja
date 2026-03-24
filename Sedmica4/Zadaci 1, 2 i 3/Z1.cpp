/*1a) Deklarišite strukturu kružnica i instancirajte objekte k1, k2, k3 i k4. Dodijelite vrijednosti
obilježjima tako:
a) da se centar kružnice k1 nalaziti u prvom kvadrantu koordinatnog sistema, k2 u drugom, k3 u
trećem, a k4 u četvrtom kvadrantu (na desnoj slici su označena sva četiri kvadranta)
b) sa tastature učitajte vrijednost poluprečnika kružnice k1
c) neka poluprečnik kružnice k2 bude iste veličine kao kod k1
d) neka poluprečnik kružnice k3 bude duplo veći od k2
e) neka poluprečnik kružnice k4 bude zbir poluprečnika od k2 i k3*/
/*A zatim, ispišite karakteristike kružnica (obilježja objekata k1, ...,k4) koristeći pune rečenice, kao u
sljedećem primjeru:
- Kružnica iz prvog kvadranta sa centrom O(3,4) ima isti poluprečnik kao kružnica O(-4,6) iz
drugog kvadranta koji iznosi r = 2. - Kružnica O(─9,─20) iz trećeg kvadranta ima duplo veći poluprečnik (r = 4) od kružnice O(-4,6). Zadatak 1b:*/
/*Prepravite prethodni zadatak tako da koristite strukturu Tacka sa atributima int x, int y*/

//1a)
#include  "strukture.h"


#include <iostream>
using namespace std;
int main()
{
    kruznica k1;
    k1.cx=2;
    k1.cy=2;
    kruznica k2;
    k2.cx=-3;
    k2.cy=2;
    kruznica k3;
    k3.cx=-4;
    k3.cy=-3;
    kruznica k4;
    k4.cx=5;
    k4.cy=-3;
    cout<<"Unesite poluprecnik kruznice k1: ";
    cin>>k1.r;
    k2.r=k1.r;
    k3.r=2*k2.r;
    k4.r=k2.r+k3.r;
    cout<<"Kruznica k1 iz prvog kvadranta sa centrom O("<<k1.cx<<", "<<k1.cy<<") ima isti poluprecnik kao kruznica k2 iz drugog kvadranta sa centrom O("<<k2.cx<<", "<<k2.cy<<") koji iznosi: "<<k1.r<<endl;
    cout<<"Kruznica k2 iz drugog kvadranta sa centrom O("<<k2.cx<<", "<<k2.cy<<") ima isti poluprecnik kao kruznica k1 iz prvog kvadranta sa centrom O("<<k1.cx<<", "<<k1.cy<<") koji iznosi: "<<k2.r<<endl;
    cout<<"Kruznica k3 iz treceg kvadranta sa centrom O("<<k3.cx<<", "<<k3.cy<<") ima duplo veci poluprecnik od kruznice k2 iz drugog kvadranta sa centrom O("<<k2.cx<<", "<<k2.cy<<") koji iznosi: "<<k3.r<<endl;
    cout<<"Kruznica k4 iz cetvrtog kvadranta sa centrom O("<<k4.cx<<", "<<k4.cy<<") ima poluprecnik koji je zbir poluprecnika kruznica k2 iz drugog kvadranta sa centrom O("<<k2.cx<<", "<<k2.cy<<") i kruznice k3 iz treceg kvadranta sa centrom O("<<k3.cx<<", "<<k3.cy<<") koji iznosi: "<<k4.r<<endl;

    return 0;
}

//1b) prepravka, bit ce zakomentarisana ta verzija
/*

#include "strukture.h"


#include <iostream>
using namespace std;
int main()
{
kruznica k1;
k1.O.x=2;
k1.O.y=2;
kruznica k2;
k2.O.x=-3;
k2.O.y=2;
kruznica k3;
k3.O.x=-4;
k3.O.y=-3;
kruznica k4;
k4.O.x=5;
k4.O.y=-3;
cout<<"Unesite poluprecnik kruznice k1: ";
cin>>k1.r;
k2.r=k1.r;
k3.r=2*k2.r;
k4.r=k2.r+k3.r;
cout<<"Kruznica k1 iz prvog kvadranta sa centrom O("<<k1.O.x<<", "<<k1.O.y<<") ima isti poluprecnik kao kruznica k2 iz drugog kvadranta sa centrom O("<<k2.O.x<<", "<<k2.O.y<<") koji iznosi: "<<k1.r<<endl;
cout<<"Kruznica k2 iz drugog kvadranta sa centrom O("<<k2.O.x<<", "<<k2.O.y<<") ima isti poluprecnik kao kruznica k1 iz prvog kvadranta sa centrom O("<<k1.O.x<<", "<<k1.O.y<<") koji iznosi: "<<k2.r<<endl;
cout<<"Kruznica k3 iz treceg kvadranta sa centrom O("<<k3.O.x<<", "<<k3.O.y<<") ima duplo veci poluprecnik od kruznice k2 iz drugog kvadranta sa centrom O("<<k2.O.x<<", "<<k2.O.y<<") koji iznosi: "<<k3.r<<endl;
cout<<"Kruznica k4 iz cetvrtog kvadranta sa centrom O("<<k4.O.x<<", "<<k4.O.y<<") ima poluprecnik koji je zbir poluprecnika kruznica k2 iz drugog kvadranta sa centrom O("<<k2.O.x<<", "<<k2.O.y<<") i kruznice k3 iz treceg kvadranta sa centrom O("<<k3.O.x<<", "<<k3.O.y<<") koji iznosi: "<<k4.r<<endl;

return 0;
}
*/