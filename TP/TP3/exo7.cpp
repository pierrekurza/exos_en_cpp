#include <iostream>
using namespace std;

short nbMots(string chaine)
{
    short nbMots = 0;
    for(int i  = 0 ; i < chaine.size(); i++)
    {
        if(chaine[i] == ' ')
            nbMots++;
        if(chaine[i] == ' ' && chaine[i - 1] == ' ')
            nbMots--;
    }
    return nbMots + 1;
}

int main()
{
    string phrase;
    cout << "Saisissez une phrase : ";
    getline(cin, phrase);
    cout << "Il y a : " << nbMots(phrase) << " mots, dans -> " << phrase << endl;
    return 0;
}
