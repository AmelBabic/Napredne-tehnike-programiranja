//Funkcije za rad sa char [] -2. dio
#include <cstring>
#include <iostream>

using namespace std;
int main() {
    char niz1[20];
    char niz2[20];
    do {
        cout << "Unesite novi password: ";
        cin.get(niz1,20);
        cin.ignore();
        cout << "Unesite ponovo novi password: ";
        cin.get(niz2,20);
        cin.ignore();
        if (strcmp(niz1,niz2) != 0) cout << "[GRESKA] Nisu podudarni passwordi!\n";
    }while (strcmp(niz1,niz2) != 0);
    cout << "Uspjesno promijenjen password!\n";
    char tekst[200], pretraga[20];
    cout << "Unesite neki tekst: ";
    cin.getline(tekst,200,'\n');
    cout << "Unesite rijec za pretragu: ";
    cin.getline(pretraga,20,'\n');
    char *pok = strstr(tekst,pretraga);
    if (pok == nullptr) {
        cout << "Trazena rijec ne postoji u tekstu!";
    }else {
        cout << "Trazena rijec je pronadjena!";
    }
    cout << endl;
    system("pause");
    return 0;
}