/*
 * Napraviti rekurzivnu funkciju Fibonaci(int f) koja vraca
 * f-ti Fibonacijev broj
 * F0 = F1 = 1
 * Fn = Fn-2 + Fn-1
 * Ispisati prvih n Fibonacijevih brojeva i njihovu sumu
 */

#include <iostream>
using namespace std;

int Fibonaci(int f) {
    if (f<3) {
        return 1;
    }else {
        return Fibonaci(f-2)+Fibonaci(f-1);
    }
}
int main() {
    int n;
    do {
        cout << "Unesite prirodni broj: ";
        cin >> n;
    }while (n<1);
    int suma=0;
    cout << "Fibonacijevi brojevi: ";
    for (int i = 1;i<=n;i++) {
        cout << Fibonaci(i) << " ";
        suma += Fibonaci(i);
    }
    cout << "\nSuma prvih " << n << " Fibonacijevih brojeva iznosi: " << suma;
    cout << endl;
    system("pause");
    return 0;
}