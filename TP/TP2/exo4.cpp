#include <iostream>
using namespace std;

int main()
{
	int n;
	int c;
	float r;
	float i;

	cout<< "Entrer la valeur de n : "<<endl;
	cin>>n;
	for(i=1; i<n; i=i+2){
		if (c%2==0){
			r=r-(1/i);
			c=c+1;
	}

	else{
		r=r+(1/i);
		c=c+1;
	}
}
cout<<"La valeur de pi vaut : "<< 4*r <<endl;

return 0;
}
