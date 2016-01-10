#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    int taille;
    cout << "Taille du tableau : ";
    cin >> taille;
    int tab[taille];

    for (int i = 0; i < taille; i++)
    {
        int val;
        cout << "Valeur : ";
        cin >> val;
        tab[i] = val;
        int j = i - 1;
        while (j >= 0 && tab[j] > tab[j+1] ) {
            swap(tab[j], tab[j+1]);
            j--;
        }
    }
}
