#include <iostream>
using namespace std;

enum Format {
    CD,
    MP3,
    Vinyle
};

enum Genre {
    classique,
    dubstep,
    dlectro,
    j-Core,
    hardcore,
    futureBass,
    house
};

struct Date {
    int jour;
    int mois;
    int annee;
};

struct Album {
    string titre;
    string groupe;
    string genre;
    Date date;
    int duree;
    Format format;
};

typedef Album Bibliotheque[100];

void construire(Bibliotheque& bib)
{
    for(int i = 0; i < 100; i++)
    {
        cin >> bib[i].titre;
        cin >> bib[i].groupe;
        int g;
        cin >> g;
        bib[i].genre=(Genre)g;
        cin >> bib[i].date.jour;
        cin >> bib[i].date.mois;
        cin >> bib[i].date.annee;
        cin >> bib[i].duree;
        int f;
        cin >> f;
        bib[i].format=(Format)f;
    }
}
