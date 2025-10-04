#include <iostream>
using namespace std;

int main()
{

  int MAX = 20;

  int arreglo[MAX];

  for (int i = 0; i < 20; i++)
  {
    int x;

    cout << "Ingresa el número " << (i + 1) << ": ";
    cin >> x;

    int j = i - 1;

    while (j >= 0 && arreglo[j] > x)
    {
      arreglo[j + 1] = arreglo[j];
      j--;
    }
    arreglo[j + 1] = x;
  }

  cout << "\nArreglo final ordenado: ";

  for (int i = 0; i < 20; i++)
  {
    cout << arreglo[i] << (i < 19 ? ' ' : '\n');
  }

  return 0;
}