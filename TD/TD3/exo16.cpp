#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <numeric>
#include <limits>
using namespace std;

int main()
{
    int tab[100];
    float m1 = numeric_limits<float>::infinity();
    float m2 = -m1;

    for(int i = 0; i < 100;i++)
    {
        m1 = std::min(m1, tab[i]);
        m2 = std::min(m2, tab[i]);
    }
    cout << m2 - m1 << endl;
}
