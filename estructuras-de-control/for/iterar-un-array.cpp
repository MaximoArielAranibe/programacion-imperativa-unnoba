#include <iostream>
using namespace std;

int main()
{
  int numeros[] = {2, 4, 5, 6, 7};

  for (int i = 0; i < 5; i++)
  {
    cout << "Elemento en el indice " << i << ": " << numeros[i] << endl;
  }

  return 0;
}