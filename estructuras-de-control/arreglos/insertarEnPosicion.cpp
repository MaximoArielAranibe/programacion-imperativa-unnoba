#include <iostream>
using namespace std;

bool insertarEnPosicion(int arr[], int &dimensionLogica, const int dimensionFisica, int el, int pos)
{
  if (dimensionLogica >= dimensionFisica)
  {
    cout << "ERROR: Arreglo lleno, no se puede insertar el valor" << el << "." << endl;

    return false;
  }

  if (pos < 0 || pos > dimensionLogica)
  {
    cout << "ERROR: Posicion de insercion " << pos << " invalida. Debe estar entre 0 y " << dimensionLogica << endl;
    return false;
  }

  // 3) Desplazamiento hacia la derecha
  for (int i = dimensionLogica; i > pos; i--)
  {
    arr[i] = arr[i - 1];
  };

  // 4) Inserción

  arr[pos] = el;

  dimensionLogica++;

  return true;
}

void mostrarArreglo(int arr[], int dimensionLogica)
{
  cout << "Arreglo: [";
  for (int i = 0; i < dimensionLogica; i++)
  {
    cout << arr[i] << (i < dimensionLogica - 1 ? ", " : "");
  }
  cout << "]";
}

int main()
{

  const int MAX = 20;
  int arreglo[MAX] = {2, 4, 6, 8, 10};
  int dimensionLogica = 5;

  insertarEnPosicion(arreglo, dimensionLogica, MAX, 6, 1);

  mostrarArreglo(arreglo, dimensionLogica);
  return 0;
}