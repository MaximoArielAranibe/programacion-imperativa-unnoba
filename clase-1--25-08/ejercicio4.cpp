/*
Cargar un arreglo con 20 números enteros ingresados por teclado de manera que el arreglo siempre se
encuentre ordenado en forma ascendente. El arreglo se cargará por completo.
Hacer dos variantes, suponiendo que el usuario carga los datos de las siguientes formas:
a) El usuario ingresa los números en orden ascendente (Inserción al final)
b) El usuario ingresa los números sin un orden en particular (Inserción ordenada) */

#include <iostream>
using namespace std;

int main()
{
  int arreglo[20];

  for (int i = 0; i < 20; i++)

  {
    cout << "Ingrese un número empezando desde el menor" << endl;
    cin >> arreglo[i];
    cout << arreglo[i] << "" << endl;
  };

  return 0;
}