/* 4b d - prepravka
Osoba odaberite_osobu(Osoba osobe[], int v)
{
    for(int i = 0; i < v; i++)
    {
        cout << "\n" << i+1 << ". " << osobe[i].ime << ", ID=" << osobe[i].id;
    }

    int n;
    cout << "\nUnesite RB: ";
    cin >> n;

    if(n >= 1 && n <= v)
        return osobe[n-1];

    return osobe[0]; // fallback ako pogresan unos
}
*/
#include <iostream>
#include <cstring>
using namespace std;

// ================== DATUM ==================
struct Datum {
    int d, m, g;
};

void info(Datum date) {
    cout << date.d << "." << date.m << "." << date.g;
}

Datum ucitaj_datum() {
    Datum d;
    cin >> d.d >> d.m >> d.g;
    return d;
}

// ================== OSOBA ==================
struct Osoba {
    int id;
    char ime[20];
};

void info(Osoba o) {
    cout << o.ime << " (" << o.id << ")";
}

// izbor osobe (jednostavna verzija)
Osoba odaberite_osobu() {
    Osoba o1 = {302, "A B"};
    Osoba o2 = {303, "C B"};
    Osoba o3 = {304, "D B"};
    Osoba o4 = {305, "E B"};
    Osoba o5 = {306, "F B"};

    cout << "\nSpisak osoba:";
    cout << "\n1. " << o1.ime << ", ID=" << o1.id;
    cout << "\n2. " << o2.ime << ", ID=" << o2.id;
    cout << "\n3. " << o3.ime << ", ID=" << o3.id;
    cout << "\n4. " << o4.ime << ", ID=" << o4.id;
    cout << "\n5. " << o5.ime << ", ID=" << o5.id;

    int n;
    cout << "\nUnesite RB: ";
    cin >> n;

    if (n == 1) return o1;
    if (n == 2) return o2;
    if (n == 3) return o3;
    if (n == 4) return o4;
    if (n == 5) return o5;

    return o1; // fallback
}

// ================== PRIJAVA ==================
struct PrijavaZaIspit {
    Osoba student;
    Datum datum_prijave;
    Datum datum_odjave;
    int ocjena;
};

// ================== ISPIT ==================
struct Ispit {
    Osoba ispitivac;
    Datum datum_ispita;
    char predmet[20];
    PrijavaZaIspit prijave[10];
    int broj_prijava;
};

// unos ispita
Ispit ucitaj_ispit() {
    Ispit i1;

    cout << "\nUnesite ID ispitivaca: ";
    cin >> i1.ispitivac.id;

    cin.ignore();
    cout << "Unesite ime ispitivaca: ";
    cin.getline(i1.ispitivac.ime, 20);

    cout << "Unesite datum ispita (d m g): ";
    i1.datum_ispita = ucitaj_datum();

    cin.ignore();
    cout << "Unesite predmet: ";
    cin.getline(i1.predmet, 20);

    i1.broj_prijava = 0;

    return i1;
}

// prikaz ispita
void prikazi_ispite(Ispit ispiti[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\n--- ISPIT " << i + 1 << " ---";
        cout << "\nIspitivac: ";
        info(ispiti[i].ispitivac);

        cout << "\nDatum: ";
        info(ispiti[i].datum_ispita);

        cout << "\nPredmet: " << ispiti[i].predmet << endl;
    }
}

// odabir ispita (REFERENCA!)
Ispit& odaberite_ispit(Ispit ispiti[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\n" << i + 1 << ". " << ispiti[i].predmet;
    }

    int izbor;
    cout << "\nOdaberite ispit: ";
    cin >> izbor;

    return ispiti[izbor - 1];
}

// ================== MAIN ==================
int main() {
    const int max_ispiti = 10;
    Ispit ispiti[max_ispiti];
    int brojac_ispita = 0;

    int x;
    do {
        cout << "\n\n===== MENU =====";
        cout << "\n1. Ispiti - prikazi sve";
        cout << "\n2. Ispiti - dodaj novi";
        cout << "\n3. Prijavljeni - prikazi (za ispit)";
        cout << "\n4. Prijava - dodaj novu";
        cout << "\n5. Unos ocjena";
        cout << "\n0. EXIT\n";

        cin >> x;

        if (x == 1) {
            prikazi_ispite(ispiti, brojac_ispita);
        }

        if (x == 2) {
            ispiti[brojac_ispita++] = ucitaj_ispit();
        }

        if (x == 3) {
            if (brojac_ispita == 0) continue;

            Ispit& i = odaberite_ispit(ispiti, brojac_ispita);

            for (int j = 0; j < i.broj_prijava; j++) {
                cout << "\nStudent: ";
                info(i.prijave[j].student);

                cout << "\nOcjena: " << i.prijave[j].ocjena << endl;
            }
        }

        if (x == 4) {
            if (brojac_ispita == 0) continue;

            Ispit& i = odaberite_ispit(ispiti, brojac_ispita);

            PrijavaZaIspit p;

            cout << "\nOdaberi studenta:";
            p.student = odaberite_osobu();

            cout << "\nDatum prijave (d m g): ";
            p.datum_prijave = ucitaj_datum();

            cout << "Datum odjave (d m g): ";
            p.datum_odjave = ucitaj_datum();

            p.ocjena = 0;

            i.prijave[i.broj_prijava++] = p;
        }

        if (x == 5) {
            if (brojac_ispita == 0) continue;

            Ispit& i = odaberite_ispit(ispiti, brojac_ispita);

            for (int j = 0; j < i.broj_prijava; j++) {
                cout << "\nUnesi ocjenu za ";
                info(i.prijave[j].student);
                cout << ": ";

                cin >> i.prijave[j].ocjena;
            }
        }

    } while (x != 0);

    return 0;
}