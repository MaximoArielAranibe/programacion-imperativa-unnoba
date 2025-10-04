/*
Cuando se declara un arreglo, se debe indicar el tamaño de dicho arreglo, y éste
permanecerá constante durante el ciclo de vida del programa o de la función, es decir, no
podrá cambiar su tamaño de manera dinámica (por esto es que son arreglos de tamaño
estático): si el espacio es insuficiente o sobra durante la ejecución del programa, no hay
nada que hacer (más que modificar el código y volver a correr el programa), ya que el
tamaño es fijo.
 */

/*
Si el arreglo se declara en main{ }, durante toda la vida o ejecución del
programa estará ocupando la porción de memoria necesaria y ese recurso no podrá ser
empleado en otra cosa. Si se lo declara dentro de una función o un bloque, ocupará
memoria mientras el control de ejecución opere dentro de dicha función o bloque.
 */
#include <iostream>
using namespace std;

int main()
{

  /* Tenemos estas 3 maneras de declarar arreglos estaticos */

  int numeros[5] = {1, 2, 3, 4, 5};
  /*   int numeros2[] = {1, 2, 3, 4, 5};
    int valores[3]{10, 20}; */

  cout << numeros << endl; // si hacemos esto nos va a dar la posicion en memoria, ej: 0x61fefc

  // Para poder acceder a un elemento en particular se debe indicar el nombre del arreglo y la posicion del indice donde se encuentre dicho elemento.

  // Ejemplo:

  cout << numeros[3] << endl; // nos devolvera 4.

  /* 3.5. Iteración sobre un arreglo
Para acceder a todos los elementos de un arreglo (por ejemplo: para imprimirlos
o para buscar la posición de un elemento en particular), iteraremos incrementando una
variable numérica, que nos servirá de índice. */

  // DIMESIÓN FISICA: por ejemplo int arr[5] = {1,2,3}, la dimension fisica seria 5. mientras que la dimension logica es 3.

  // Entonces, para recorrer el arreglo me voy a guiar por la dimensión lógica.

  cout << "Iterar/Recorrer un arreglo: " << endl;

  char V[5] = {'a', 'e', 'i'};

  int dimension_logica = 3;

  for (int i = 0; i < dimension_logica; i++)
  {
    cout << V[i] << endl;
  };

  /*
  3.6. Insertar elementos en un arreglo
  Al insertar un nuevo elemento en un arreglo, la dimensión lógica nos indicará si es
  posible o no agregar un nuevo elemento.
   */

  char U[5] = {'a', 'b', 'c'};

  int dimensionLogica = 3;

  const int dimensionFisica = 5;

  for (int i = 0; i < dimensionLogica; i++)
  {
    cout << U[i] << endl;
  }
  if (dimensionLogica != dimensionFisica)
  /* Antes de insertar el nuevo elemento se
corrobora que haya espacio en el arreglo. */
  {
    U[dimensionLogica] = 'o';
    dimensionLogica++;
  }

  cout << "\nDespués de insertar:\n";
  for (int i = 0; i < dimensionLogica; i++)
  {
    cout << U[i] << endl;
  }

  return 0;
}
