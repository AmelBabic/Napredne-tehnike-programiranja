/*
 * Napisati rekurzivnu funkciju brojCifara(n) koja vraća broj
 * cifara cijelog broja n
 * Napisati rekurzivnu funkciju sumaCifara(n) koja vraća sumu
 * cifara cijelog broja n
 */

#include <iostream>
using namespace std;

int brojCifara(int n) {
    if (n==0) return 0;
    return 1+brojCifara(n/10);
}
int sumaCifara(int n) {
    if (n==0) return 0;
    return abs(n%10)+sumaCifara(n/10);
}
int main() {
    int x;
    cout << "Unesite cijeli broj: ";
    cin >> x;
    cout << "Broj cifara: " << brojCifara(x) << endl;
    cout << "Suma cifara: " << sumaCifara(x);
    cout << endl;
    system("pause");
    return 0;
}