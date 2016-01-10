#include <iostream>
using namespace std;

void population()
{
    int populationTotale = 0;
    int populationBeta = 5000000;
    int populationAlpha = 10000000;
    int annee = 1;
    while (populationBeta < populationAlpha)
    {
        populationAlpha += 500000;
        populationBeta *= 1.03;
        annee++;
    }
    cout << "A partir de la " << annee << " ème année, la population Beta aura dépassée la population Alpha ! " << endl;
}

int main()
{
    population();
    return 0;
}
