//Uvod u rad sa nizovima karaktera
#include <iostream>
#include <limits>
using namespace std;
int main() {
    char karakter;
    cout << "Unesite neki karakter: ";
    cin >> karakter;
    cout << "Unijeli ste karakter: " << karakter;
    //Ciscenje kompletnog buffera
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    char nizKaraktera[30];
    cout << "\nUnesite niz karaktera: ";
    cin.get(nizKaraktera,30);
    cout << "Unijeli ste: " << nizKaraktera;
    char nizKaraktera2[50];
    cout << "\nUnesite niz karaktera (prekid je ;): ";
    cin.get(nizKaraktera2,50,';');
    cout << "Unijeli ste (zavrsno sa ;): " << nizKaraktera2;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "\nUnesite ponovo neki tekst: ";
    cin.getline(nizKaraktera2,50);
    cout << "Unijeli ste tekst: " << nizKaraktera2;
    cout << endl;
    system("pause");
    return 0;
}