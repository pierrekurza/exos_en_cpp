#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string Couleur[4] = {"Trèfle", "Carreau", "Pique", "Coeur"};
string Face[13] = {"deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf", "dix", "valet", "dame", "roi", "as"};

struct Carte {
    int couleur;
    int face;
    int valeur;
};

typedef Carte Jeu[52];

void construireJeu(Jeu& game)
{
    int compteur = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
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

void melangerCartes(Jeu& game)
{
    for(int k = 0; k < 52; k++)
    {
        swap(game[rand()%52], game[rand()%52]);
    }
}

void piocheCarte(Jeu game)
{
    int coul = game[0].couleur;
    int face = game[0].face;
    int valeurCarte = game[0].valeur;
    cout << "La premiere carte est : " << Face[face] << " de " << Couleur[coul] << " et sa valeur est de : " << valeurCarte << endl;
}

void afficherJeu(Jeu game)
{
    for(int i = 0; i < 52; i++)
    {
        int coul = game[i].couleur;
        int face = game[i].face;
        cout << Face[face] << " de " << Couleur[coul] << endl;
    }
}

void blackJack(Jeu game)
{
    construireJeu(game);
    melangerCartes(game);
    piocheCarte(game);
    int somme;
    bool gagne = false;

    do
    {

        if(somme == 21)
        {
            cout << "GG, tu as gagné !!!" << endl;
            gagne = true;
        }
        else
            cout << "Tu as perdu !" << endl;
    } while (!gagne);
}

int main()
{
    srand((unsigned)time(0));
    Jeu game;
    blackJack(game);
    return 0;
}
