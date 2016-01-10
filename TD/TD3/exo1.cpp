#include <iostream>
using namespace std;

int main()
{
    int valeur;
	do
	{
		cout << "Entrez une valeur pour la table de multiplication : ";
		cin >> valeur;
	} while (valeur < 1 or valeur >= 10);

    for(int i = 1; i <= 10;i++)
    {
        cout << i << " x " << valeur << " = " << valeur*i << endl;
    }
}
