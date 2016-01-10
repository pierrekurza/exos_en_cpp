#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

void IntToBinary(int chiffre)
{
    if (chiffre / 2 != 0)
        IntToBinary(chiffre / 2);
    cout << chiffre % 2;
}

int main()
{
    int nombre;
    cout << "Entrez un nombre : " ;
    cin >> nombre;
    cout <<"Le résultat binaire est : ";
    IntToBinary(nombre);
    cout << endl;
    return 0;
}
