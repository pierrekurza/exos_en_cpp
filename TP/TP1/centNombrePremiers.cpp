#include <iostream>
using namespace std;



int main()
{
    long ancien = 1;
    long nouveau;
    int i;
    int compteur = 0;
    bool estPremier;

    while(compteur < 100)
    {
    	nouveau = ancien + 1;
    	i = 2;
    	estPremier = true;
    	while(i < nouveau && estPremier)
    	{
    		estPremier = (nouveau % i)!=0;
    		i++;
    	}
    	if(estPremier)
    		{
    			cout << nouveau <<endl;
    			compteur++;
    		}
    		ancien=nouveau;
    	}
    }
