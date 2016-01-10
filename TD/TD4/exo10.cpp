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

int occurences(Album bib[100], Genre g)
{
    int c = 0;
    for(int i = 0; i < 100; i++)
        c += (bib[i].genre == g);
    return c;
}

int rechercher(Album bib[N], string t)
{
    int index = 0;
    for(int i = 0; i < N; i++)
    {
        if(bib[i].titre == t)
            return i;
        else
            return N;
    }
}

int main()
{
    occurences();
    rechercher();
}
