#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    int tableau[100];
    int i,j,x;
    bool trouve = false;
    cout << " Entrer votre valeur : ";
    cin >> x ;
    i = 0;
    j = 99;
    do
    {
        trouve=(tableau[i] == x) || (tableau[j] == x);
        i++;
        j−−;
    }
    while (!trouve && i <= j);
    if(trouve)
    {
        if(tableau[--i] == x)
            cout << i << endl;
        else
            cout << ++j << endl;
    }
    return 0;
}
