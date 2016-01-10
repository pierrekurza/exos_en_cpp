#include <iostream>
#include <cmath>
using namespace std;

void secondDegre(float a, float b, float c)
{
    float delta = (b * b) - (4 * a * c);

    if(delta == 0)
    {
        cout << "Il n'y a qu'une seule solution !" << endl;
    }

    else if (delta > 0)
    {
        cout << "Il y a deux solutions possibles !" << endl;
    }

    else
        cout << "Aucune solution possible !" << endl;

}

int main()
{
    float a , b ,c;
    cout << "Entrez les valeurs de a, b, c :" << endl;
    cin >> a >> b >> c ;
    secondDegre(a,b,c);
    return 0;
}
