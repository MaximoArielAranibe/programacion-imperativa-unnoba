#include <iostream>
using namespace std;

bool insertarElementoAlFinal(int arr[], int &dimesionLogica, const int dimensionFisica, int el)
{
  if (dimesionLogica < dimensionFisica)
  {

    int posInsercion = dimesionLogica;

    arr[posInsercion] = el;

    dimesionLogica++;

    return true;
  }
  else
  {
    cout << "ERROR: Arreglo lleno, no se puede insertar." << endl;
    return false;
  }
}

void mostrarArreglo(int arr[], int dimensionLogica) {
  cout << "Arreglo: [";
  for (int i = 0; i < dimensionLogica; i++){
    cout << arr[i] << (i < dimensionLogica - 1 ? ", " : "");
  }
  cout << "]";

}

int main()
{

  const int MAX = 10;
  int arreglo[MAX];
  int dimensionLogica = 0; //

  cout << "--- Insercion al Final ---" << endl;


  insertarElementoAlFinal(arreglo, dimensionLogica, MAX, 10 );
  insertarElementoAlFinal(arreglo, dimensionLogica, MAX, 20 );
  insertarElementoAlFinal(arreglo, dimensionLogica, MAX, 30 );

  mostrarArreglo(arreglo, dimensionLogica);


      return 0;
}