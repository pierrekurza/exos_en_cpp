#include <iostream>

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

typedef int Frequence[7];

void nbAlbumsParGenre(Album biblio[100], Frequence& freq)
{
    for(int i = 0; i < 7; i++)
    {
        freq[i] = 0;
        for(int j =0 ; j < 100; j++)
        {
            freq[i] += biblio[j].genre == (Genre)i;
        }
    }
}

vector<int> frequences(Album bib[100])
{
    vector<int> freq(12,0);
    for(int i = 0; i < 100; i++)
    {
        int g = bib[i].genre;
        freq[g]++;
    }
    return freq;
}

int main()
{
    nbAlbumsParGenre();
    return 0;
}
