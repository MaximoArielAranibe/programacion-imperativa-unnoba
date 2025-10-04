// 1 + 2 = 3, 3 + 3 = 6, 6 + 4 = 10, etc. El resultado final es 5050, el += funciona como acumulador.
#include <iostream>
using namespace std;
int main()
{
  int suma = 0;
  for (int i = 1; i <= 100; i++)
  {
    suma += i;
  }
  cout << "La suma de los números del 1 al 100 es: " << suma << endl;
  return 0;
}