#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define tabSize 20
using namespace std;

void remplirTab(int* tab)
{
    for (int i = 0; i < tabSize; i++)
    {
        int randomInt = rand()%11;
        tab[i] = randomInt;
    }
}

void nbOccurences(int* tab)
{
    int occurence = 0;
    int nombreChoisi;
    cout << "Choisissez un nombre : ";
    cin >> nombreChoisi;
    if (nombreChoisi > 10)
        return;
    for (int i = 0; i < tabSize; i++)
    {
        if(nombreChoisi == tab[i])
            occurence++;
    }
    cout << "Le nombre d'occurences de " << nombreChoisi << " est de : " << occurence << endl;
}

int main()
{
    srand((unsigned)time(0));
    int tableauARemplir[tabSize];
    remplirTab(tableauARemplir);
    nbOccurences(tableauARemplir);
    return 0;
}
