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
    break;
  case 'B':
    cout << "Letra B" << endl;
    break;
  case 'C':
    cout << "Letra C" << endl;
    break;
  default:
    cout << "Letra no válida." << endl;
    break;
  }
  return 0;
}