#include <iostream>
using namespace std;

int main()
{

	int j,jm;
	int s=0;
	int m=0;

cout<<"Entrez un nombre compris entre 1 et 365 : "<<endl;
cin>>j;


do
	{

	jm=(j-s);

	if(m==2)
		s=(s+28);

		else{

			if ((m==4) or (m==6) or (m==9) or (m==11))
				{
				s=(s+30);
				}

			else
			{
			s=(s+31);
			}

	}
	m++;
	}
	while (j>s);
	cout<<"Jour du mois : "<<j<<endl;
	cout<<"Mois de l'année : "<<m<<endl;

return 0;
}
