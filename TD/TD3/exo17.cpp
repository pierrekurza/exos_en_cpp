#include <iostream>
#include <cstdlib>
#include <cmath>
#define tabSize 1000
using namespace std;


void rechercheDichotomique(int* tab)
{
  int i, gauche = 0, droite = tabSize - 1, mid , valeur;

  cout << "Entrez une valeur à chercher : ";
  cin >> valeur;
  cout << endl;

  do {
      mid = ((gauche + droite) /2);
      if (valeur < tab[mid])
        droite = mid - 1;
      else
        gauche = mid + 1;
    } while (valeur != tab[mid] && gauche < droite);

    if (valeur == tab[mid])
        cout << i << endl;
    else
        cout << "Non Trouvé ! " << endl;
}

int main()
{
    int tab[tabSize];
    rechercheDichotomique(tab);
    return 0;

}
