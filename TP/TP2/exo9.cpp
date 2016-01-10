#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define tabSize 100
using namespace std;

void remplirTabAndMaxValue(int* tab)
{
    int maximum = 0;
    for (int i = 0; i < tabSize; i++)
    {
        int randomInt = rand()%11;
        tab[i] = randomInt;
        maximum = max(maximum, tab[i]);
        cout << tab[i] << endl;
    }
        cout << "La valeur maximale du tableau est de : " << maximum << endl;
}

int main()
{
    srand((unsigned)time(0));
    int tableauARemplir[tabSize];
    remplirTabAndMaxValue(tableauARemplir);
}
