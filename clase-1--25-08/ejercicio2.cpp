#include <iostream>
using namespace std;

void tablas(int limite)
{
  for (int i = 1; i <= limite; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      cout << i << "x" << j << "=" << i * j << endl;
    }
  }
}

int main()
{
  int limite;

  cout << "Ingrese el limite";
  cin >> limite;

  tablas(limite);

  return 0;
}