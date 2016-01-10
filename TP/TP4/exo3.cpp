#include <iostream>
using namespace std;

enum Case {
    rouge,
    jaune,
    vide
};

typedef Case Plateau[6][7];

void init(Plateau& jeu){
    for(int i = 0; i < 6; i++)
        for(int j = 0; i < 7; j++)

}

void afficher(const Plateau& jeu){

}

void update(Plateau& jeu, const Case joueur, const int colonne){

}



int main(){
    Plateau jeu;
    init(jeu);
    bool tourDeJeu = true;
    while(!terminal(jeu))
    {
        afficher(jeu);

        Case joueur = vide;
        int colonne =0;

        if(tourDeJeu == true){

            cout << "Joueur rouge: " << endl;
            joueur = rouge;
        }
        else {
            cout << "Joueur jaune: " << endl;
            joueur = jaune;
        }
        cin >> colonne;
        update(jeu, joueur, colonne);
        tourDeJeu = 1 - tourDeJeu;
    }
    return 0;
}

