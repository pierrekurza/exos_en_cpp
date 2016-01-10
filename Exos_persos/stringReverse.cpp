#include <iostream>
#include <string>
using namespace std;

string reverseString(string s)
{
    string tmp ="";
    for (int i = s.size() - 1 ; i >= 0; i--)
    {
        tmp += s[i];
    }
    return tmp;
}

int main()
{
    string phrase;
    string newPhrase = "";
    cout << "Entrez une phrase : ";
    getline(cin,phrase);
    newPhrase = reverseString(phrase);
    cout << "Après inversion : ";
    cout << newPhrase << endl;
    return 0;
}
