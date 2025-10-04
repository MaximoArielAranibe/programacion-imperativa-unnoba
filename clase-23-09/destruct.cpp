#include <iostream>
using namespace std;

/* struct Persona{
  int edad;
  string nombre;
  long dni;
  bool recibido;
} miPersona; */


struct Persona
{
  int edad;
  string nombre;
  long dni;
  bool recibido;
};

void imprimirPersona(const Persona& p){
  cout << "Nombre" << p.nombre << endl;
}

int main()
{
  Persona miPersona;
  miPersona.dni = 8000;
  cout << miPersona.dni << endl;

  Persona maximo = {23, "maximo", 43732268, true};
  Persona maximo = {.edad = 23, .nombre = "maximo", .dni = 43732268, .recibido = true}; // Por si nos queremos saltear el orden.
  cout << maximo.nombre << endl; // Si o si de a un campo, c++ no imprime arreglos completos, ni personas con campos completos

  imprimirPersona(maximo);


  return 0;
}