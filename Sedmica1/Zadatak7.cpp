/*
* Korisnik unosi broj clanova niza, a zatim i clanove niza
 * Napraviti funkciju koja uvecava broj za jedan (povratni tip je
 * void) ako je on neparan.
 * Ispisati pocetni niz i na svaki clan tog niza primjeniti
 * ovu funkciju
 * Ispisati na kraju jos jednom niz
 */
#include <iostream>
using namespace std;

void uvecajneparne(int niz[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (niz[i]%2 !=0)
        {
            niz[i]++;
        }
    }
}

int main(){
    int n;
    cout << "Unesite broj clanova niza: ";
    cin >> n;
    cout << endl;
    cout<<"Unesite clanove niza: ";
    int niz[n];
    for (int i = 0; i < n; i++)
    {
        cin >> niz[i];
    }
    cout<<"\n Uneseni niz: ";
    for (int i = 0; i < n; i++)
    {
        cout<<niz[i]<<" ";
    }
    uvecajneparne(niz, n);
    cout<<"\nNiz nakon uvecanja neparnih: ";
    for (int i = 0; i < n; i++)
    {
        cout<<niz[i]<<" ";
    }
    return 0;
}