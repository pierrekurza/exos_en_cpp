#include <iostream>
#include <cmath>
using namespace std;

void conversion()
{

  float dollars;
  float yens;
  float euros;
  float livres;
  int uniteDeConversion;
  int montant;

  cout << "Saisissez une valeur à convertir" << endl;
  cin >> montant;
  cout << "Quelle est l'unité utilisée : Dollars(1), Yen(2), Euros(3), Livres(4)" << endl;
  cin >> uniteDeConversion;

  switch (uniteDeConversion) {
    case 1: //conversion dollars
    euros = (montant * 1.1421);
    cout << euros << ": €" << endl;
    yens = (montant * 0.0084);
    cout << yens << ": Yens" << endl;
    livres = (montant * 1.5637);
    cout << livres << ": Livres" << endl;
    break;

    case 2: //conversion en Yens
    dollars = (montant * 119.3820);
    cout << dollars << ": $" << endl;
    euros = (montant * 136.3450);
    cout << euros << ": €" << endl;
    livres = (montant * 186.6800);
    cout << livres << ": Livres" << endl;
    break;

    case 3: //conversion en euros
    dollars = (montant * 0.8757);
    cout << dollars << ": $" << endl;
    yens = (montant * 136.3450);
    cout << yens << ": Y" << endl;
    livres = (montant * 1.3695);
    cout << livres << ": Livres" << endl;
    break;

    case 4: //Conversion en Livres
    dollars = (montant * 1.5586);
    cout << dollars << ": $" << endl;
    euros = (montant * 1.3712);
    cout << euros << ": €" << endl;
    yens = (montant * 186.9600);
    cout << yens << ": yens" << endl;
    break;

    default: //en cas d'érreur
    cout << "Ceci n'est pas un chiffre ! " << endl;
    break;
  }
}

int main()
{
  conversion();
  return 0;
}
