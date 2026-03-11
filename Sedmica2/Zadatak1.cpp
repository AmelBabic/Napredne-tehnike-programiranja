/*
 * Rekurzivna funkcija - funkcija koja poziva sama sebe
 * int rekurzija(argumenti){
 *      if(uslov){
 *          return 1;
 *      }else{
 *          obrada podataka...
 *          return rekurzija(argumenti modifkovani);
 *      }
 * }
 * Funkcija koja računa sumu prvih n prirodnih brojeva
 */

#include <iostream>
using namespace std;

int suma(int n) {
    if (n==1) {
        return 1;
    }else{
        return n+suma(n-1);
    }
}

int main() {
    int n;
    do {
        cout << "Unesite neki prirodni broj: ";
        cin >> n;
    }while (n<1);
    cout << "Suma brojeva od 1 do " << n << " iznosi " << suma(n) << endl;
    cout << endl;
    system("pause");
    return 0;
}