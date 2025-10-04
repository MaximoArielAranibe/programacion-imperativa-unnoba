/* Escribe un programa que solicite al usuario ingresar un carácter y un número entero positivo. Luego imprime en
pantalla un triángulo formado por el carácter ingresado, con altura igual al número que se ingresó.
Ejemplo:
Ingresa un carácter: #
Ingresa un número entero positivo: 5

##
###
####
##### */

#include <iostream>
using namespace std;

int main()
{

  char caracter;
  int num;

  cout << "Ingrese un caracter" << endl;
  cin >> caracter;
  cout << "Ingrese un número entero positivo" << endl;
  cin >> num;

  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << caracter;
    }
    cout << endl;
  }

  return 0;
}