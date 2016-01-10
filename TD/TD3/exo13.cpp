#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    int taille;
    cout << "Entrez une taille de tab : ";
    cin >> taille;
    int tab[taille];
    bool trie = false;
    for (int i = 0 ; i < taille; i++)
    {
        if (tab[i] < tab[i+1])
            trie=true;
    }
    if(trie == true)
        cout << "Le tableau est trié ! " << endl;
    else
        cout << "Il n'est pas trié ! " << endl;
    return 0;
}
