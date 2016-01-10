#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x,y;
	cout<< "Valeur pour x : "<< endl;
	cin >> x;
	cout << "Valeur pour y : "<< endl;
	cin >> y;
		while (x!=y)
			if (x>y)
				x=(x-y);
			else
				y=(y-x);
cout <<"Afficher la valeur de x : "<< x <<endl;

return 0;
}
