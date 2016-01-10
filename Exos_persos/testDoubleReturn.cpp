#include <iostream>
using namespace std;

int calcul()
{
    int x = 4*9;
    return x;
}
int main()
{
    int res = (calcul() + calcul());
    cout << res << endl;
    return 0;
}


