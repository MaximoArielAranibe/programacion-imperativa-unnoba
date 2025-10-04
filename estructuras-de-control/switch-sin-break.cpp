// Si ejecutamos, independientemente de la letra que pongamos nos va a rediccionar al default porque causa "Fall Through" o "Caer sobre" por no tener incluidos los breaks.
/*
El uso correcto del “break” es fundamental para evitar el "fall through" (caer a
través) no deseado, salvo que se quiera intencionadamente que el flujo de ejecución caiga
al siguiente caso.
 */

#include <iostream>
using namespace std;
int main()
{
  char letra;
  cout << "Ingresa una letra (A-C): ";
  cin >> letra;
  switch (letra)
  {
  case 'A':
    cout << "Letra A" << endl;
  case 'B':
    cout << "Letra B" << endl;
  case 'C':
    cout << "Letra C" << endl;
  default:
    cout << "Letra no válida." << endl;
  }
  return 0;
}