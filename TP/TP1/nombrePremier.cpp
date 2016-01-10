#include <iostream>
using namespace std;

int main()
{
  int n, i, flag=0;
  cout << "Entrez un entier positif: ";
  cin >> n;
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "C'est un nombre premier" << endl;
  else
      cout << "Ce n'est pas un nombre premier" << endl;
  return 0;
}
