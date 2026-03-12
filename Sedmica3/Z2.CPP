//Funkcije za rad sa char [] - prvi dio
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    char maloSlovo, velikoSlovo;
    do {
        cout << "Unesite malo slovo: ";
        cin >> maloSlovo;
    }while (!islower(maloSlovo));
    cout << maloSlovo << " -> " << static_cast<char>(toupper(maloSlovo)) << endl;
    do {
        cout << "Unesite veliko slovo: ";
        cin >> velikoSlovo;
    }while (!isupper(velikoSlovo));
    cout << velikoSlovo << " -> " << static_cast<char>(tolower(velikoSlovo)) << endl;

    char niz[100];
    cout << "Unesite neki niz karaktera: ";
    cin.ignore();
    cin.get(niz,100);
    cout << "Unijeli ste " << strlen(niz) << " karaktera.\n";
    char niz1[10];
    char niz2[6];
    cout << "Unesite neki tekst (10 karaktera max): ";
    cin.ignore();
    cin.getline(niz1,10);
    strncpy_s(niz2,niz1,5);
    niz2[5] = '\0';
    cout << "niz2[] ima vrijednost: " << niz2 << endl;
    char niz3[50];
    strcat_s(niz3,niz1);
    strcat_s(niz3, " - ");
    strcat_s(niz3,niz2);
    cout << "niz3[] ima vrijednost: " << niz3 << endl;

    cout << endl;
    system("pause");
    return 0;
}