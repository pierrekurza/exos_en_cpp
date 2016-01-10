#include <iostream>
#include <cmath>
using namespace std;

int getMax(int a, int b, int c)
{
    int maxNumber = max(a, max(b,c));
    return maxNumber;
}

int main()
{
    int a, b, c;
    cout << "Saisissez ici 3 entiers positifs" << endl;
    cin >> a >> b >> c;
    cout << "Le plus grand chiffre est : " << getMax(a,b,c) << endl;
    return 0;
}
