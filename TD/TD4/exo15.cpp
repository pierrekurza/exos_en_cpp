#include <iostream>
#define TAILLE_TAB 100
using namespace std;

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

int min(Album biblio, int gauche, int droite)
{
    int idx_min = gauche;
    int val_min = biblio[gauche];

    for(int i = gauche + 1; i <= droite; i++)
        if(biblio[i] < val_min)
        {
            val_min = biblio[i];
            idx_min = i;
        }
        return idx_min;
}

void triAlbums(Album& bib[TAILLE_TAB])
{
    for(int i = 0; i < TAILLE_TAB; i++)
    {
            int min = min(biblio, i + 1, TAILLE_TAB - 1);
            swap(biblio[i], biblio[j]);
    }
}

int main()
{
    return 0;
}
