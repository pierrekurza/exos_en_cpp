#include <iostream>
#include <cmath>
using namespace std;

void calculette(float a, float b, char operateur)
{
	switch(operateur)
	{
		case '+':
			cout <<  a + b << endl;
		break;

		case '-':
			cout <<  a - b << endl;
		break;

		case '*':
			cout <<  a * b << endl;
		break;

		case '/':
			cout <<  a / b << endl;
		break;

		default:
		break;
	}
}

int main()
{
	float a,b;
	char operateur;
	cout << "Entrez les valeurs pour a: " << endl;
	cin >> a;
	cout << "Saisissez un opérateur(+, -, *, /): " << endl;
	cin >> operateur;
	cout << "Entrez les valeurs pour b: " << endl;
	cin >> b;
	cout << "Le résultat est : " ;
	calculette(a,b,operateur);
	return 0;
}
