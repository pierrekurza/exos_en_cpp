#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define tabSize 100
using namespace std;



int main()
{
    int tab[tabSize];
    int i = 0;
    bool consecutif = true;

    do
    {
        consecutif = (tab[i+1] == tab[i]+1);
        i++;
    } while(i < 99 && consecutif);
    cout << consecutif << endl;
    return 0;
}
