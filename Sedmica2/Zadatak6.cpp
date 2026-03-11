/*
 * Napisati rekurzivnu funkciju maxElement(niz, n) koja vraća
 * najveći element u niz-u dužine n.
 */

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int maxElement(int niz[], int n) {
    if (n==1) return niz[0];
    int m = maxElement(niz,n-1);
    return (niz[n-1]>m ? niz[n-1] : m);
}
int main() {
    srand(time(NULL));
    rand();
    int n;
    cout << "Unesite broj elemenata: ";
    cin >> n;
    int A[n];
    cout << "Generisani brojevi: ";
    for (int i=0;i<n;i++) {
        A[i] = rand()%100+1;
        cout << A[i] << " ";
    }
    cout << "\nNajveci broj je: " << maxElement(A,n);
    cout << endl;
    system("pause");
    return 0;
}