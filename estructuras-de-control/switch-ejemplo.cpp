#include <iostream>
using namespace std;

int main()
{

  char condicion; //a o puede ser b
  int num1, num2;


  cout << "Ingresa el primer numero";
  cin >> num1;

  cout << "Ingresa el segundo numero";
  cin >> num2;

  cout << "Ingresa a si queres sumar, ingresa b si queres restar";
  cin >> condicion;

  switch (condicion)
  {
    case 'a':
      cout << "El resultado es: " << (num1 + num2) << endl;
    break;

  case 'b':
      cout << "El resultado es: " << (num1 - num2) << endl;
    break;

  default:
    cout << "No ingresaste un caracter valido";
    break;
  }

  return 0;
}