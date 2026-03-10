/*
* Napraviti funkciju za množenje dva broja (void)
 * a = 3
 * b = 4
 * Ispis -> 3*4 = 12
 *
 * a = 5
 * b = -2
 * Ispis -> 5*(-2) = -10
 */

#include <iostream>
using namespace std;

void pomnozi(int a, int b)
{
    if (b<0)
    {
        cout<<a<<"*("<<b<<") = "<<a*b<<endl;
    }else cout<<a<<"*"<<b<<" = "<<a*b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    pomnozi(a,b);
    return 0;
}