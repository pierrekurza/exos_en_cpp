#include <iostream>
using namespace std;

string Couleur[4] = {"Trèfle", "Carreau", "Pique", "Coeur"};
string Face[8] = {"sept", "huit", "neuf", "dix", "valet", "dame", "roi", "as"};

struct Carte
{
    int couleur;
    int face;
    int valeur;
};

typedef Carte monJeuDeCartes[32];
typedef Carte cinqCartes[5];

void construireJeu(monJeuDeCartes& game)
{
    int compteur = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            game[compteur].couleur = i;
            game[compteur].face = j;
            if(j <= 8)
                game[compteur].valeur = j + 2;
            else if(j <= 11)
                game[compteur].valeur = 10;
            else
                game[compteur].valeur = 11;
            compteur++;
        }
    }
}

void afficherJeu(monJeuDeCartes game)
{
    for(int i = 0; i < 32; i++)
    {
        int coul = game[i].couleur;
        int face = game[i].face;
        cout << Face[face] << " de " << Couleur[coul] << endl;
    }
}

void melangerCartes(monJeuDeCartes game)
{
    for(int k = 0; k < 32; k++)
    {
        swap(game[rand()%32], game[rand()%32]);
    }
}

void distribuerCinqCartes(cinqCartes cinq, monJeuDeCartes jeu)
{
    for(int i = 0 ; i < 5; i++)
    {

        cinq[i].couleur = jeu[i].couleur;
        cinq[i].face = jeu[i].face;
    }
}

void afficheMain(cinqCartes cinq)
{
    for(int i = 0; i < 5; i++)
    {
        int coul = cinq[i].couleur;
        int face = cinq[i].face;
        cout << Face[face] << " de " << Couleur[coul] << endl;
    }
}

bool possedeUnePaire(cinqCartes cinq)
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(cinq[i].face == cinq[j].face)
                return true;
        }
    }
    return false;
}

void possedeUnJeu(cinqCartes cinq)
{
    int cpt = 0;

}


int main()
{
    srand((unsigned)time(0));
    monJeuDeCartes jeu;
    cinqCartes uneMain;
    construireJeu(jeu);
    melangerCartes(jeu);
    distribuerCinqCartes(uneMain, jeu);
    afficheMain(uneMain);
    if(possedeUnePaire(uneMain) == 1)
        cout << "Tu as une paire !" << endl;
    else
        cout << "tu n'en as pas ! " << endl;
    return 0;
}
