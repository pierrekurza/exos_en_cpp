#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int taille, nombres, max, nombre1;
	cout << "La taille de la séquence : " ;
	cin >> taille;
	cout << "Entrez la séquence d'entiers" << endl;
	cin >> nombre1;
	if (taille > 1)
	{
		for(int i=1; i < taille; i++)
		{
			cin >> nombres;
			max = std::max(nombre1, nombres);
		}
	}
	cout << "La valeur max de la séquence est : " << max << endl;
	return 0;
}