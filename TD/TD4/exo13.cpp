#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

double distance(Point& a, Point& b)
{
    return sqrt( (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) );
}

double distanceLaPlusGrande(Point tab[100])
{
    double max = 0;
    for(int i = 0; i < 99; i++)
        for(int j = i+1 ; j < 100; j++)
            if(distance(tab[i], tab[j]) > max)
                max = distance(tab[i], tab[j]);
    return max;
}

int main()
{
    max(distance())
    return 0;
}
