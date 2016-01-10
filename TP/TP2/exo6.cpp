#include <iostream>
using namespace std;

int main()
{
    int mois[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int choixJour, y = 0;
    int m = 0;
    int jours = 0;
    int i = 0;
    bool trouve = false;

    cout << "Quel jour ? : " ;
    cin >> choixJour;

    do
    {
        if(y + mois[i] < choixJour)
        {
            y += mois[i];
            i++;
        }
        else
            m = 1;
            jours = choixJour - y;
            trouve = true;
    } while (!trouve && i <= 12);

    cout << "Le mois est : " << m+1 << endl;
    cout << "Le jour est : " << jours << endl;
    return 0;
}
