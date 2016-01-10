#include <iostream>
#include <cmath>
using namespace std;

bool triChiffres(int a, int b, int c)
{
    bool estRange = (a <= b) && (a <= c);
    return estRange;
}

int main()
{
    int a,b,c;
    cout << "Entrez 3 entiers :" << endl;
    cin >> a >> b >> c;
    if (triChiffres(a,b,c))
        cout << "Les chiffres sont rangés ! " << endl;
    else
        cout << "Ils ne sont pas rangés !" << endl;

    return 0;
}
