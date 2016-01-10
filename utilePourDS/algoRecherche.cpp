//Recherche Dichotomique
int main()
{
    int tableau[n] = {}
    int i, gauche = 0, droite = n-1 , valeur;

    cout << "Entrez une valeur à chercher : ";
    cin >> valeur;
    cout << endl;

    do
    {
        mid = ((gauche + droite) / 2);
        if ( valeur < tableau[mid])
            droite = i-1;
        else
            gauche = i+1;
    } while (valeur == tableau && gauche > droite)

    if (valeur == tableau[mid])
        cout << i << endl;
    else
        cout << "Non Trouvé ! " << endl;
}

//tri Par séléection
int main()
{
    int tableau[n] = {0,...,0};
    int tmp, min;
    for(int i=0; i < n-1;  i++)
    {
        min = i;
        for(int j=i+1; i < n-1; i++)
        {
            if (tableau[j] < tableau[min])
                min = j;
        }
    tmp = tableau[min];
    tableau[min] = tableau[i];
    tableau[i] = tmp;
    }
}

//Tri par insertion
int main()
{
    int tableau[n] = {valeurs};
    int valeurARechercher;

    for (int i=1; i < n-1; i++)
    {
        valeurARechercher = tableau[i];
        int j = i;
        while ((j > 0) && (tableau[j-1] > valeurARechercher))
        {
            tableau[j] = tableau[j-1];
            j -= 1;
        }
        tableau[j] = val;
    }
}

//Recherche séquentielle
int main()
{
    int tableau[4] = {12,44,23,96};
    int i, valeurARechercher;
    bool trouve;

    cout << "Entrer la veleur de votre choix : ";
    cin >> valeurARechercher;

    i = 0;
    do
    {
        trouve = tableau[i] = valeurARechercher;
        i = i + 1;
    } while(trouve or i = 4);

    if (trouve)
        cout << i-1 << endl;
    else
        cout << "Non Trouvé" << endl;
}
