#include <iostream>
using namespace std;

// d: imprimir todos los valores de la matriz, colocando cada fila en una nueva linea;

int main()
{

  int matriz[7][10];

  for (int i = 0; i < 7; i++){
    int cambio = matriz[i][2];
    matriz[i][2] = matriz[i][4];
    matriz[i][4] = cambio;
  }

    return 0;
}