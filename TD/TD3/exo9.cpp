#include <iostream>
#define tabSize 20
using namespace std;

int main()
{
    int shaddocks[tabSize];
    shaddocks[0] = 1;
    shaddocks[1] = 1;
    for(int i= 2; i < tabSize; i++)
    {
        shaddocks[i] = shaddocks[i-1] + shaddocks[i-2];
    }
    for (int c = 0; c < tabSize; c++)
    {
        cout << shaddocks[c] << endl;
    }
    return 0;
}
