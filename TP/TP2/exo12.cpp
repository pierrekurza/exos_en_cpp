#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define tabSize 100

using namespace std;

void remplirTab(int* tab)
{

    for (int i = 0; i < tabSize; i++)
    {
        int randomInt = rand()%101;
        tab[i] = randomInt;
    }
}

void triCroissantTab(int* tab, int* tabTrie)
{

    int valTmp = tab[0];

    bool trie = false;
    do
    {
        for (int j = 0 ; j < tabSize - 1; j++)
        {
            for (int k = 0; k < tabSize; k++)
            {
                if(tab[0] > tab[1])
                {
                    valTmp = tab[j];
                    tab[j] = tab[j+1];
                    tab[j+1] = valTmp;
                    tabTrie[k] = valTmp;
                }
            }
        }
    } while(trie);

    cout << endl;

    cout << "Voici le tableau trié : " << endl;
    for (int l = 0;l < tabSize; l++)
    {
        cout << tabTrie[l] << endl;
    }
}

void afficherTabNonTrie(int* tab)
{
    for (int i = 0; i < tabSize; i++)
        cout << tab[i] << endl;
}

int main()
{
    //Variables
    srand((unsigned)time(0));
    int tableauARemplir[tabSize];
    int newTableau[tabSize];
    //Fonctions
    remplirTab(tableauARemplir);
    afficherTabNonTrie(tableauARemplir);
    triCroissantTab(tableauARemplir, newTableau);
    return 0;
}
