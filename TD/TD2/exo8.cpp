#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int taille, nombres;
	float resultat, somme;
	cout << "La taille de la séquence : " ;
	cin >> taille;
	cout << "Entrez la séquence d'entiers" << endl;
	for(int i=0; i < taille; i++)
	{
		cin >> nombres;
		somme += nombres;
	}
	resultat = (somme / taille);
	cout << "La moyenne de cette séquence est de : " << resultat << endl;
	return 0;
}
