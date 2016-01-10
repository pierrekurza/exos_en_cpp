#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double factorielle(unsigned int nombre)
{
    double resultatFactorielle;
    for( int i=0; i <= nombre; i++)
    {
    resultatFactorielle = resultatFactorielle * i + 1;
    }
    return resultatFactorielle;
}

int main()
{
    unsigned int nombre;
    cout << "Entrer un nombre : ";
    cin >> nombre;
    factorielle(nombre);
    cout << "Le résultat est : " << factorielle(nombre) << endl;
    return 0;
}
