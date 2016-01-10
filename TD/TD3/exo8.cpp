#include <iostream>
#define tabSize 20
using namespace std;

int main()
{
    double tableau[tabSize];
    tableau[0] = 1000;
    for(int i = 1; i < tabSize; i++)
    {
        tableau[i] = tableau[i-1] * 1.0225;
    }
    for (int j = 0; j < tabSize;j++)
    {
        cout << tableau[j] <<  endl;
    }
    return 0;
}
