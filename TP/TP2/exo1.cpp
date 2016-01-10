#include <iostream>
#include <math.h>
using namespace std;

int n;
int b500,b200,b100,b50,b10,b5,p2,p1;

int main()
{
	cout << "Entrez la somme désirée : "<<endl;
	cin >> n;
	b500=n/500;
	n=n%500;
	b200=n/200;
	n=n%200;
	b100=n/100;
	n=n%100;
	b50=n/50;
	n=n%50;
	b10=n/10;
	n=n%10;
	b5=n/5;
	n=n%5;
	p2=n/2;
	n=n%2;
	p1=n/1;
	n=n%1;


	cout<<"Billets de 500€ : "<<b500<<endl;
	cout<<"Billets de 200€ : "<<b200<<endl;
	cout<<"Billets de 100€ : "<<b100<<endl;
	cout<<"Billets de 50€ : "<<b50<<endl;
	cout<<"Billets de 10€ : "<<b10<<endl;
	cout<<"Billets de 5€ : "<<b5<<endl;
	cout<<"Pièces de 2€ : "<<p2<<endl;
	cout<<"Pièces de 1€  : "<<p1<<endl;


	return 0;
}
