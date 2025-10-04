#include <iostream>
using namespace std;

// Busca la PRIMERA aparición de numeroABuscar en arr[0..dml-1].
// Devuelve el índice (0-based) de la primera aparición, o -1 si no está.
int busquedaBinaria(int arr[], int numeroABuscar, int dml)
{
    int izquierda = 0;           // límite izquierdo del rango en el que buscamos
    int derecha = dml - 1;       // límite derecho
    int resultado = -1;          // -1 = no encontrado (valor por defecto)

    // Mientras el rango sea válido
    while (izquierda <= derecha)
    {
        // Calculo seguro del medio (evita overflow en índices grandes)
        int medio = izquierda + (derecha - izquierda) / 2;

        // 3 casos: igual / menor / mayor
        if (arr[medio] == numeroABuscar)
        {
            // Encontré una aparición: la guardo
            resultado = medio;
            // Pero quiero la PRIMERA aparición, así que sigo buscando a la izquierda
            derecha = medio - 1;
        }
        else if (arr[medio] < numeroABuscar)
        {
            // El valor buscado es más grande -> busco en la mitad derecha
            izquierda = medio + 1;
        }
        else
        {
            // arr[medio] > numeroABuscar -> busco en la mitad izquierda
            derecha = medio - 1;
        }
    }

    // Si resultado sigue -1 => no se encontró; si no, contiene la primera aparición
    return resultado;
}

int main()
{
    const int MAX = 10;
    int arreglo[MAX] = {1, 2, 3, 5, 5, 6, 6, 8, 9, 10};

    int buscado = 5;
    int pos = busquedaBinaria(arreglo, buscado, MAX);

    if (pos != -1)
        cout << "Primera aparicion del " << buscado << " en indice " << pos << endl;
    else
        cout << buscado << " no se encontro en el arreglo" << endl;

    return 0;
}

