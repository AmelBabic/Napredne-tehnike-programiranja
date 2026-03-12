//Funkcije za rad sa char [] -3. dio
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
int main() {
    char brojChar[10];
    cout << "Unesite neki broj: ";
    cin.getline(brojChar,10);
    int brojInt = atoi(brojChar);
    cout << brojChar << " -> " << brojInt;
    int broj;
    cout << "\nUnesite neki broj: ";
    cin >> broj;
    char brojChar2[10];
    itoa(broj,brojChar2,2);
    cout << strlen(brojChar2) << " -> " << brojChar2 << endl;
    cin.ignore();
    char password[9];
    cout << "Unesite lozinku od 8 karaktera: ";
    for (int i=0;i<8;i++) {
        password[i] = getch();
    }
    password[8] = '\0';
    cout << "\nPassword: " << password << endl;
    cout << endl;
    system("pause");
    return 0;
}