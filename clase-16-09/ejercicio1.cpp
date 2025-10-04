/* Ejercicio 3.
Escribir un programa en C++ que realice una búsqueda binaria en un arreglo de números enteros donde algunos números pueden llegar a repetirse. El programa debe encontrar la primera aparición del número buscado e
informarlo en pantalla.
 */

#include <iostream>
using namespace std;

int busquedaBinaria(int arr[], int numeroABuscar, int dml)
{

  int izquierda = 0;
  int derecha = dml - 1;

  int resultado = -1;
  while (izquierda <= derecha)
  {
    int medio = (izquierda + derecha) / 2;
    if (arr[medio] == numeroABuscar)
    {
      resultado = medio;
      derecha = medio - 1;
    }
    else if (arr[medio] < numeroABuscar)
    {
      izquierda = medio + 1;
    }
    else
    {
      derecha = medio - 1;
    }
  }
  return resultado;
}

int main()
{

  int MAX = 10;

  int arreglo[10] = {1, 2, 3, 5, 5, 6, 6, 8, 9, 10};

  int pos = busquedaBinaria(arreglo, 5, MAX);
  if (pos != -1)
    cout << "Primera aparicion en indice " << pos << endl;
  else
    cout << "No encontrado" << endl;

  return 0;
}