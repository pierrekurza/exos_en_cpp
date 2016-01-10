//Correction
#include <iostream>
using namespace std;

int main()
{
    int n;
    float somme;
    cout << "Entrer le nombre entier: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        somme += 1/i;
    }
    cout << "Le résultat est :" << somme << endl;
    return 0;
}

