/*
* Napraviti program koji generise 15 slucajenih brojeva iz intervala
 * [27,93] u vektor. Potrebno je napraviti funkciju koja ce u
 * novi vektor snimiti samo brojeve koji su manji od posljednje
 * generisanog broja.
 * Ispisati prvi vektor i drugi vektor
 */

#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

void snimimanje(vector<int> &v1, vector<int> &v2)
{
    int zadnja = v1[v1.size()-1];
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i]<zadnja)
        {
            v2.push_back(v1[i]);
        }
    }
}

int main(){
    srand(time(NULL));
    rand();
    vector<int> pocetni;
    for (int i=0; i<15;i++)
    {
        pocetni.push_back(rand()%67+27);
    }
    cout<<"Pocetni: ";
    for (int i:pocetni)cout<<i<<" ";
    vector<int> novi;
    snimimanje(pocetni,novi);
    if (novi.empty())
    {
        cout<<"\nNema elemenata manjih od zadnjeg";
    }else
    {
        cout<<"\nNovi vektor: ";
        for (int i: novi) cout<<i<<" ";
    }
    return 0;
}