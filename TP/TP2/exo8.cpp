#include <iostream>
#include <cstdlib>
#include <ctime>
#define tabSize 100
using namespace std;

void remplirTab(int* tab)
{

    for (int i = 0; i < tabSize; i++)
    {
        int randomInt = rand()%11;
        tab[i] = randomInt;
        cout << tab[i] << endl;
    }

}

void calculSommeTab(const int* tab)
{
    int somme = 0;
    for(int i = 0; i < tabSize; i++)
    {
        somme += tab[i];
    }
    cout << "La somme du tableau est de : " << somme << endl;
}

int main()
{
    srand((unsigned)time(0));
    int tableauARemplir[tabSize];
    remplirTab(tableauARemplir);
    calculSommeTab(tableauARemplir);
    return 0;
}
