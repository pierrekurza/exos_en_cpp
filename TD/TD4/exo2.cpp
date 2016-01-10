#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    float x;
    float y;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;
};

bool estRectangle(struct Triangle T)
{
    float ab = (T.a.x - T.b.x) * (T.a.x - T.b.x) + (T.a.y - T.b.y) * (T.a.y - T.b.y);
    float bc = (T.b.x - T.b.x) * (T.b.x - T.b.x) + (T.b.y - T.b.y) * (T.b.y - T.b.y);
    float ac = (T.a.x - T.c.x) * (T.a.x - T.c.x) + (T.a.y - T.c.y) * (T.a.y - T.c.y);

    if(ab >= ab && ab >= ac)
        return ab == bc + ac;
    if (ac >= ab && ac >= bc)
        return ac == bc + ab;
    return bc == ac + ab;
}

int main()
{
    Triangle troisCotes;
    if(estRectangle(troisCotes))
        cout << "Il est #rekt" << endl;
    else
        cout << "Il n'est pas #rekt ! " << endl;
    return 0;
}
