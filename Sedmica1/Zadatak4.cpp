/*
 * Potrebno je napraviti funkciju koja će ukloniti cifru stotica iz
 * pozitivnog cijelog broja ako postoji
 * Program radi dok korisnik ne unese broj 0
 * Ulaz 1210 -> 110
 * Ulaz 18 -> 18
 * Ulaz -5 -> [GRESKA] Uneseni broj nije pozitivan
 * Ulaz 1231514 -> 123114
 * Ulaz 0 -> Kraj
 */

#include <iostream>
using namespace std;

int ukloniStotine(int broj) {
    return (broj<100 ? broj : (broj/1000)*100 + broj%100);
}
int main() {
    int broj;
    do {
        cout << "Unesite cijeli broj: ";
        cin >> broj;
        if (broj < 0) cout << "Uneseni broj nije pozitivan!\n";
        else if (broj>0) cout << "Ulaz: " << broj << " -> " << ukloniStotine(broj) << endl;
    }while (broj != 0);
    cout << endl;
    system("pause");
    return 0;
}