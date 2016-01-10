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
        int randomInt = rand()%21;
        tab[i] = randomInt;
    }
}

void moyenneTab(int* tab)
{
    double moyenne = 0.0;
    float somme = 0;
    for(int i = 0; i < tabSize; i++)
    {
        somme += tab[i];
    }
    moyenne = somme / tabSize;
    cout << "La moyenne est de : " << moyenne << endl;
}

void varianceTab(int* tab)
{
    double resultat = 0.0;
    double somme = 0.0;
    double moyenne = 0.0;
    for(int j = 0; j < tabSize; j++)
    {
        somme += tab[j] * tab[j];
    }
    resultat = somme / tabSize;
    cout << "La variance est de : " << resultat << endl;
}

int main()
{
    srand((unsigned)time(0));
    int tableauARemplir[tabSize];
    remplirTab(tableauARemplir);
    moyenneTab(tableauARemplir);
    varianceTab(tableauARemplir);
    return 0;
}
