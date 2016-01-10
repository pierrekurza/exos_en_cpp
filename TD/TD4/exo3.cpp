#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define tabSize 10
using namespace std;

struct Point
{
    float x;
    float y;
};

void remplirTab(int* tabx, int* taby)
{

    for (int i = 0; i < tabSize; i++)
    {
        int randomInt = rand()%21;
        tabx[i] = randomInt;
        int randomInt = rand()%21;
        taby[i] = randomInt;
    }
}

int main()
{
    srand((unsigned)time(0));
    Point G;
    int tabX[tabSize];
    int tabY[tabSize];
    G.x = 0;
    G.y = 0;
    remplirTab(tabX, tabY);
    for(int i = 0; i < tabSize; i++)
    {
        G.x += tabX[i].x;
        G.y += tabY[i].y;
    }
    G.x /= 10.0;
    G.y /= 10.0;

    cout << "(" << G.x << ":" << G.y << ")" << endl;
}
