#include <iostream>
using namespace std;

const int tailleTab = 1000;

typedef Album Bibliotheque[tailleTab];

enum Genre {
    classique,
    dubstep,
    dlectro,
    j-Core,
    hardcore,
    futureBass,
    house
};

struct Album {
    string titre;
    string groupe;
    Genre genre;
};

void saisir(Album& a)
{
    cin >> a.titre;
    cin >> a.groupe;
    int g;
    cin >> g;
    a.genre=(Genre)g;
}

void tri_online(Bibliotheque& bib)
{
    for(int i = 0; i < tailleTab ; i++)
    {
        Album a;
        saisir(a);
        inserer(bib, a, pos);
    }
}

void inserer(Bibliotheque& bib, Album a, int pos)
{
    bib[i] = a;
    int j = i -1;
    while(bib[j].titre > bib[j+1].titre)
        swap(bib[j], bib[j+1]);
}

int main()
{
    return 0;
}
