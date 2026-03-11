/*
 * Napisait rekurzivnu funkciju za određivanje NZD dva prirodna broja
 */

#include <iostream>
using namespace std;

int NZD(int a, int b) {
    if (b==0) {
        return a;
    }else {
        return NZD(b,a%b);//Koristen je Euklidov algoritam
    }
}
int main() {
    int x,y;
    do {
        cout << "Unesite prvi broj: ";
        cin >> x;
    }while (x<1);
    do {
        cout << "Unesite drugi broj: ";
        cin >> y;
    }while (y<1);
    cout << "NZD(" << x << "," << y << ") = " << NZD(x,y);
    cout << endl;
    system("pause");
    return 0;
}