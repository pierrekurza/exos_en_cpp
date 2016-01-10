#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

typedef double Vector4[4];
typedef double Matrix44[4][4];

void fill(Matrix44& mat, const double val)
{
	for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
            mat[i][j] = val;
}

void add(Matrix44& mat, const int x, const int y, const double val)
{
	// l'entrée de mat à la ligne x et la colonne y doit avoir la valeur val
	// Saisir votre code ici
        mat[x][y] = val;
}

void scalar_multiplication(Matrix44& mat, const double val)
{
	// Toutes les entrées de mat sont multipliées par val

	// Saisir votre code ici
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
        {
            mat[i][j] *= val;
        }
}

void diag(Matrix44& mat, Vector4& vec)
{
	// Le vecteur vec prend la diagonale de la matrice mat

	// Saisir votre code ici
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++)
        {
            if(i == j)
            vec[i] = mat[i][j];
        }
}

void print(const Matrix44& mat)
{
	// La matrice doit être affichée ligne par ligne
	// Ne pas modifier les deux premières instructions utilisées pour le formatage
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);
	for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void print(const Vector4& vec)
{
	// Affichage du vecteur
	// Ne pas modifier le code

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);

	for(int x = 0; x < 4; x++)
		cout << vec[x] << " ";

	cout << endl;
}


int main()
{
	Matrix44 mat;

	// Initialiser la matrice avec des zeros
	fill(mat, 0);


	// Remplir la matrice avec les sommes de rangée + colonne
	for(int x = 0; x < 4; x++)
		for(int y = 0; y < 4; y++)
			add(mat,x,y,x+y);

	// Multiplier la matrice par racine de 2
	scalar_multiplication(mat, sqrt(2.0));

	// Afficher la matrice
	print(mat);

	// Extraire la diagonale
	Vector4 vec;
	diag(mat,vec);

	// Afficher la diagonale
	cout << endl;
	cout << "Diagonale : " << endl;
	print(vec);
}
