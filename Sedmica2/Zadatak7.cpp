/*
* Rekurzivno ukloniti sve duplikate iz vektora
 * bez dodatnog seta/mape...
 */

#include <iostream>
#include <vector>
using namespace std;

void ukloniDuplikate(vector<int>& v, int i = 0, int j = 1) {
    if (i>= v.size()) return;
    if (j>= v.size()) {
        ukloniDuplikate(v,i+1,i+2);
        return;
    }
    if (v[i] == v[j]) {
        v.erase(v.begin()+j);
        ukloniDuplikate(v,i,j);
    }else {
        ukloniDuplikate(v,i,j+1);
    }
}
int main() {
    vector<int> vektor = {3,2,3,1,5,4,3,2,1,6};
    ukloniDuplikate(vektor);
    cout << "Elementi vektora nakon uklanjanja duplikata\n";
    for (auto i : vektor) {
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}