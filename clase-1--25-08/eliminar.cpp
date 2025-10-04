#include <iostream>
using namespace std;

// La función que has proporcionado, ahora completa
void eliminar_ocurrencias(int numero, int &dimensionM, int arreglo[])
{
  for (int i = 0; i < dimensionM; i++)
  {
    if (arreglo[i] == numero)
    {
      // Desplaza los elementos a la izquierda
      for (int j = i; j < dimensionM - 1; j++)
      {
        arreglo[j] = arreglo[j + 1];
      }
      // Decrementa la dimensión
      dimensionM--;
      // Decrementa 'i' para volver a chequear la posición
      i--;
    }
  }
}

int main()
{
  int mi_arreglo[] = {1, 5, 2, 5, 3, 5, 4};
  int dimension = 7;
  int numero_a_eliminar = 5;

  cout << "Arreglo original: ";
  for (int i = 0; i < dimension; ++i)
  {
    cout << mi_arreglo[i] << " ";
  }
  cout << "\n";

  eliminar_ocurrencias(numero_a_eliminar, dimension, mi_arreglo);

  cout << "Arreglo despues de eliminar " << numero_a_eliminar << ": ";
  for (int i = 0; i < dimension; ++i)
  {
    cout << mi_arreglo[i] << " ";
  }
  cout << "\n";
  cout << "Nueva dimension: " << dimension << std::endl;

  return 0;
}