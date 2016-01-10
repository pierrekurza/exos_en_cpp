#include <iostream>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <vector>
#include <time.h>       /* time */

using namespace std;

typedef double Matrix55[5][5];
typedef double Vector5[5];

int diagonale(const Matrix55& A, Vector5& D)
{
	for(int i = 0; i < 5; i++)
		D[i] = A[i][i];
}

void somme(const Matrix55& A, const Matrix55& B, Matrix55& C)
{
	// C = A + B
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            C[i][j] = A[i][j] + B[i][j];
	// Saisir votre code ici

}

bool estSymmetrique(const Matrix55& A)
{
	// Teste si A est symmétrique (A[i,j] = A[j,i])
	// Saisir votre code ici
    int cpt =0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
        if(A[i][j] == A[j][i])
            cpt++;
        if(cpt == 25)
            return true;
        return false;
}

int produit(const Matrix55& A, const Vector5& b, Vector5& c)
{
	// c = Ab
	// c est donc le vecteur obtenu en applicant la matrice A sur le vecteur b
	// (un exercice très similaire a été vu en TD)
	// Saisir votre code ici
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            c[i] += A[i][j] * b[j];
}


// Ne pas effacer (affiche un vecteur)
ostream &operator <<(ostream &output, const Vector5& vec)
{
	output.setf(ios::fixed, ios::floatfield);
	output.precision(3);
	for (unsigned i = 0; i < 5; i++)
		output << setw(6) << vec[i] << " ";
	output << endl;
	return output;
}


// Ne pas effacer (affiche une matrice)
ostream &operator <<(ostream &output, const Matrix55& mat)
{
	output.setf(ios::fixed, ios::floatfield);
	output.precision(3);
	for (unsigned i = 0; i < 5; i++)
	{
		for (unsigned j = 0; j < 5; j++)
			output << setw(6) << mat[i][j] << " ";
		output << endl;
	}
	return output;
}


// Ne pas effacer (construit une matrice aléatoire symétrique)
void random(Matrix55& mat)
{
	for (unsigned i = 0; i < 5; i++)
		for (unsigned j = 0; j < 5; j++)
			{
			mat[i][j] = ((double) rand() / (RAND_MAX));
			mat[j][i] = mat[i][j];
			}
}


// Ne pas effacer: test des fonctions
int main()
{
	srand (time(NULL));

	Matrix55 A;
	random(A);

	// Affiche A
	cout << "matrice A" << endl << A << endl;

	Matrix55 B;
	random(B);

	// Affiche B
	cout << "matrice B" << endl << B << endl;

	// Affiche C = A + B
	Matrix55 C;
	somme(A,B,C);
	cout << "matrice C" << endl << C << endl;

	// Teste si C est symmétrique
	cout << "C est symmetrique ? " << estSymmetrique(C) << endl;

	// Affiche diagonale de A
	Vector5 D;
	diagonale(A,D);
	cout << "diagonale de A (vecteur D)" << endl << D << endl;

	// Affiche produit de B et D
	Vector5 E;
	produit(B,D,E);
	cout << "application de B sur D" << endl << E << endl;
}
