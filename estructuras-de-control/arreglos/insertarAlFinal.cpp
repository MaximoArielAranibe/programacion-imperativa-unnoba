#include <iostream>
using namespace std;

// Función para insertar un elemento al final del arreglo.
bool insertarElementoAlFinal(int arr[], int &dimesionLogica, const int dimensionFisica, int el)
{
    // Verifica si hay espacio disponible (lógica < física).
    if (dimesionLogica < dimensionFisica)
    {
        // La posición de inserción es el valor actual de la dimensión lógica.
        int posInsercion = dimesionLogica;

        // Inserta el elemento.
        arr[posInsercion] = el;

        // Incrementa la dimensión lógica.
        dimesionLogica++;

        return true;
    }
    else
    {
        // El arreglo está lleno.
        cout << "ERROR: Arreglo lleno, no se puede insertar." << endl;
        return false;
    }
}

// Función para mostrar solo los elementos válidos del arreglo.
void mostrarArreglo(int arr[], int dimensionLogica)
{
    cout << "Arreglo: [";
    // Itera solo hasta la dimensión lógica.
    for (int i = 0; i < dimensionLogica; i++)
    {
        cout << arr[i]
             // Agrega ", " después de cada elemento, excepto el último.
             << (i < dimensionLogica - 1 ? ", " : "");
    }
    cout << "]";
}

int main()
{
    // Dimensión física (capacidad máxima)
    const int MAX = 10;
    // Declaración del arreglo
    int arreglo[MAX];
    // Dimensión lógica (elementos actualmente almacenados)
    int dimensionLogica = 0;

    cout << "--- Insercion al Final ---" << endl;

    // Inserciones:
    insertarElementoAlFinal(arreglo, dimensionLogica, MAX, 10);
    insertarElementoAlFinal(arreglo, dimensionLogica, MAX, 20);
    insertarElementoAlFinal(arreglo, dimensionLogica, MAX, 30);

    // Muestra el resultado final (10, 20, 30)
    mostrarArreglo(arreglo, dimensionLogica);

    return 0;
}