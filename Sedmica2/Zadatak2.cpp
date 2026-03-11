/*
 * Napisati rekurzivnu funkciju za računanje faktorijela prirodnog broja
 */

#include <iostream>
using namespace std;

int faktorijel(int n) {
    if (n==0 || n==1) {
        return 1;
    }else{
        return n*faktorijel(n-1);
    }
}
int main() {
    int n;
    do {
        cout << "Unesite neki prirodni broj: ";
        cin >> n;
    }while (n<0);
    cout << n << "! = " << faktorijel(n) << endl;
    cout << endl;
    system("pause");
    return 0;
}