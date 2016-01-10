#include <iostream>
#include <cmath>
using namespace std;

/*
déterminer la portée des variables
*/

int a = 100; //sur tout le programme


float sumCarres(int n) //portée de 'n', uniquement dans la fonction sumCarres()
{
    int x = 0; //Dans toute la fonction

    for(int i = 0; i < n; i++) //le 'i' n'apparait que dans le for()
    {
        float y = i * i;
        x += y;
    }
    return x;
}

int main()
{
    int x = sumCarres(a); //que dans le main()
    for(int j = 0; j < 100; j++) //uniquement dans le for()
    {
        float y = sqrt(j)
        x -= y;
    }
    return 0;
}
