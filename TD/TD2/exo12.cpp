#include <iostream>
using namespace std;

void conversion(int somme)
{
    int b500,b200,b100,b50,b10,b5,p2,p1;
	b500=somme/500;
	somme=somme%500;
	b200=somme/200;
	somme=somme%200;
	b100=somme/100;
	somme=somme%100;
	b50=somme/50;
	somme=somme%50;
	b10=somme/10;
	somme=somme%10;
	b5=somme/5;
	somme=somme%5;
	p2=somme/2;
	somme=somme%2;
	p1=somme/1;
	somme=somme%1;

	cout<<"Billets de 500€ : "<<b500<<endl;
	cout<<"Billets de 200€ : "<<b200<<endl;
	cout<<"Billets de 100€ : "<<b100<<endl;
	cout<<"Billets de 50€ : "<<b50<<endl;
	cout<<"Billets de 10€ : "<<b10<<endl;
	cout<<"Billets de 5€ : "<<b5<<endl;
	cout<<"Pièces de 2€ : "<<p2<<endl;
	cout<<"Pièces de 1€  : "<<p1<<endl;
}

int main()
{
    int sommeArgent;
    cout << "Distributeur automatique de billets." << endl;
    cout << "Entrer une somme d'argent : ";
    cin >> sommeArgent;
    cout << "Voici votre monnaie : " << endl;
    conversion(sommeArgent);
    return 0;
}
