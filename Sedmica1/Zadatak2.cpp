/*
* Napraviti funkciju koja sortira vektor od najmanjeg
 * do najvećeg broja (bez sort funkcije)
 * Ispisati vektor prije i poslije sortiranja
 * Korisnik unosi broje elemenata vektora i elemente vektora
 */

#include <iostream>
#include <vector>
using namespace std;

void sortiraj(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] < v[j])
            {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Unesite broj elemenata vektora: ";
    cin>>n;
    vector<int> niz;
    niz.resize(n);
    cout<<"Unesite elemente vektora: ";
    for (int i = 0; i < n; i++)
    {
        cin>>niz[i];
    }
    cout<<"Uneseni vektor prije sortiranja: ";
    for (int i:niz) cout<<i;
    sortiraj(niz);
    cout<<"\nVektor poslije sortiranja: ";
    for (int i:niz) cout<<i;


    return 0;
}