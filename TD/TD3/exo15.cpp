#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


int main()
{
    int n, cin >> n;
    int tab[n];
    //On Suppose que le tab est trié !
    for(int i = 0; i < n/2; i++)
    {
        int j = n - i - 1;
        swap(tab[i], tab[j]);
    }
    for(int i = 0; i < n; i++)
        cout << tab[i] << endl;
}
