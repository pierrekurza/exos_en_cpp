#include <iostream>
#include <cmath>
using namespace std;

void reTri(int a, int b, int c)
{
    int tmp;
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    if(a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
     if(b > c)
     {
         tmp = b;
         b = c;
         c = tmp;
     }
     cout << a << ", " << b << ", " << c << endl;
}

int main()
{
    int a,b,c;
    cout << "Entrez 3 entiers :" << endl;
    cin >> a >> b >> c;
    reTri(a,b,c);
    return 0;
}
