#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nombre;
    cout << "Entrer votre nombre entier" << endl;
    cin >> nombre;
    int max = (log(nombre) / log(2));
    for(int i = max; i <= 0; i--)
    {
        int y = pow(2,i);
        cout << nombre / y;
        nombre -= y;
        if (nombre <= y)
            nombre -= y;
    }
    return 0;
}
