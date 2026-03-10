/*
* Napraviti funkciju koja vraca udaljesnot izmedju sume parnih
 * i sume nepranih cifara cetverocifenog broja
 * Osigurati da korisnik unese cetverocfireni broj
 * Npr: 4270
 * Funkcija treba da vrati 1
 * Npr: 2362
 * Funkcija treba da vrati 7
 */

#include <iostream>
#include <cmath>
using namespace std;

int udaljenost(int n)
{
    int h,s,d,j;
    h = n/1000;
    s = n%1000/100;
    d = n%100/10;
    j = n%10;
    int sumaParnih = 0, sumaNeparnih = 0;
    h%2 == 0 ? sumaParnih+=h : sumaNeparnih+=h;
    s%2 == 0 ? sumaParnih+=s : sumaNeparnih+=s;
    d%2 == 0 ? sumaParnih+=d : sumaNeparnih+=d;
    j%2 == 0 ? sumaParnih+=j : sumaNeparnih+=j;
    return abs(sumaParnih-sumaNeparnih);
}
int main(){
    int n;
    do
    {
        cout<<"Unesite cetverocifren broj: ";
        cin>>n;
        if (n>9999 or n<1000)
        {
            cout<<"Uneseni broj nije cetverocifren"<<endl;
        }
    }while (n>9999 or n<1000);
    cout<<"Udaljenost izmedju sume parnih cifara i sume neparnih cifara je: "<<udaljenost(n)<<endl;
    return 0;
}