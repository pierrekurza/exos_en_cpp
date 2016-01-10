#include <iostream>
using namespace std;

void tierce()
{
    int p = 10;
    int nbChevaux;
    cout << "Nombre de chevaux : ";
    cin >> nbChevaux;
    cout << endl;
    long long f = 1;
    for (int i = 0; i <= nbChevaux + 1; i++)
        f = f*(p-i);
    long long g = 1;
    for (int i = 1; i <= nbChevaux + 1; i++)
        g = g*i;
    cout << "Ordre : " << 1.0/f << endl;
    cout << "Désordre : " << (1.0*g)/f << endl;
}

int main()
{
    tierce();
}
