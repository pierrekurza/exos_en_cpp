#include <iostream>
using namespace std;

void binary(int number) {
	int remainder;

	if(number <= 1) {
		cout << number;
		return;
	}

	remainder = number%2;
	binary(number >> 1);
	cout << remainder;
}

int main()
{
	int number;
	cout << "Entrez un entier positif : ";
	cin >> number;
	if (number < 0)
		cout << "Erreur ! Ceci n'est pas un entier positif" << endl;
	else {
		cout << number << " -> Après conversion : ";
		binary(number);
		cout << endl;
	}
}
