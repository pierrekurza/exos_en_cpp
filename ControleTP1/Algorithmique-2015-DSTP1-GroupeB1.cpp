#include <iostream>
#include <numeric>
#include <cmath>
#include <cfloat>
#include <cctype>
#include <cstdlib>

using namespace std;

// Si besoin, la valeur maximum d'un double est DBL_MAX (définie dans l'header cfloat)

//-----------------------------------------------------------------------------
//
// Ne pas effacer, types de données utilisés dans l'examen
//
//-----------------------------------------------------------------------------

struct Point
{
	double x;
	double y;
};

typedef Point Figure [10];

//-----------------------------------------------------------------------------
//
// Ne pas effacer, fonctions utilisées dans l'examen
//
//-----------------------------------------------------------------------------

void init(Figure& tab)
{
	srand (time(NULL));
	for(int i = 0; i < 10; i++)
	{
		tab[i].x = 1 + (rand() % 10) * sqrt((double) i);
		tab[i].y = 1 + (rand() % 10) * sqrt((double) i);
	}
}

double dist(const Point& p1, const Point& p2)
{
	// Distance entre deux points
	return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
}

ostream& operator<<(ostream& output, const Point& p)
{
	// Affiche un point
	output << "(" << p.x << "," << p.y << ")";
	return output;
}

ostream& operator<<(ostream& output, const Figure& tab)
{
	// Affiche un ensemble de points
	for(int i = 0; i < 10; i++)
		output << tab[i] << endl;
	return output;
}

//-----------------------------------------------------------------------------
//
// Fonctions à remplir
//
//-----------------------------------------------------------------------------

// Question 1
bool plus_petit_que(const Point& p1, const Point& p2)
{
	// Affiche vrai si p1 est plus petit que p2 :
	// p1 est plus petit que p2 si et seulement si
	// p1.x est plus petit que p2.x ou bien
	// p1.x est égal à p2.x et p1.y est plus petit que p2.y
	if( (p1.x < p2.x) || (p1.x == p2.x && p1.y < p2.y))
		return true;
	else
		return false;
}

// Question 2
Point barycentre(const Figure& tab)
{
	// Retourne le barycentre de tab :
	// G est le barycentre de tab si et seulement si
	// G.x = (1/N) (tab[1].x + ... + tab[N-1].x)
	// où N est la taille de x (de même pour G.y)
	Point G;
	for(int i = 0; i < 10; i++)
	{
		G.x += (tab[i].x);
		G.y += (tab[i].y);
	}
	G.x /= 10;
	G.y /= 10;
	return G;
}

// Question 3
void trier(Figure& tab)
{
	// Trie la figure selon plus_petit_que
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(plus_petit_que(tab[i], tab[j]))
			{
				swap(tab[i].x, tab[j].x);
				swap(tab[i].y, tab[j].y);
			}
		}
	}
}

// Question 4
Point plus_proche(const Figure& tab, const Point p)
{
	Point proche;
	proche.x = tab[0].x;
	proche.y = tab[0].y;
	// Retourne le point de la figure le plus proche de p
	for(int i = 0; i < 10; i++)
	{
		if(dist(proche, p) > dist(tab[i],p))
		{
			proche.x = tab[i].x;
			proche.y = tab[i].y;
		}
	}
	return proche;
}

// Question 5
double perimetre(const Figure& tab)
{
	// Retourne le perimetre du polygone associe a la figure
	double perim = 0;
	for(int i =0; i < 10; i++)
		perim += dist(tab[i], tab[i+1]);
	perim += dist(tab[0], tab[0]);
	return perim;
}

//-----------------------------------------------------------------------------
//
// Ne pas effacer fonction principale
// Pour tester, vous pouvez mettre en commentaire les fonctions non implémentées
//
//-----------------------------------------------------------------------------

int main()
{
	Figure tab;
	init(tab);
	cout << "Figure initiale" << endl;
	cout << tab << endl;

	// Trier la figure
	trier(tab);
	cout << "Figure triee" << endl;
	cout << tab << endl;

	// Trouver le barycentre
	Point g = barycentre(tab);
	cout << "Barycentre: " << g << endl;

	// Trouver le plus proche voisin
	Point p;
	p.x = 12.0;
	p.y = 10.0;
	Point voisin = plus_proche(tab, p);
	cout << "MonPoint_P = " << p << " " << endl;
	cout << "Plus proche voisin: " << voisin << endl;

	// Trouver le perimetre
	double per = perimetre(tab);
	cout << "Perimetre: " << per << endl;
}
