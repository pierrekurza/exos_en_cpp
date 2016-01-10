#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

vector<string> lexique(vector<string>& lexique)
{
    ifstream monFichierTexte;
    string mot;
    monFichierTexte.open("mots2.txt");
    while(monFichierTexte.good())
    {
        getline(monFichierTexte, mot);
        lexique.push_back(mot);
    }
    monFichierTexte.close();
return lexique;
}

void printTab(vector<string> tab)
{
    for(int i = 0; i < tab.size(); i++)
        cout << tab[i] << endl;
    cout << endl;
}

int main()
{
    vector<string> monLexique;
    lexique(monLexique);
    printTab(monLexique);
    return 0;
}
