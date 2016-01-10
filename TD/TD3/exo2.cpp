#include <iostream>
using namespace std;

void annivMarie()
{
    int anniversaire;
    float boulaisses = 100.0;
    cout << "Quel àge à Marie ? ";
    cin >> anniversaire;
    for(int i=0; i < anniversaire;i++)
    {
        boulaisses += 100 + (2*i);
    }
    cout << "Marie à : " << boulaisses << " Boulaisses" << endl;
}

int main()
{
    annivMarie();
}
