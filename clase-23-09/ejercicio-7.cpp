#include <iostream>
#include <string>
#include <algorithm> // para transform
using namespace std;

struct Libro
{
    string titulo;
    string autor;
    string editorial;
    long isbn;
    int cantidadHojas;

    void imprimirDesdeStruct()
    {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Editorial: " << editorial << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Cantidad de hojas: " << cantidadHojas << endl;
        cout << "--------------------------" << endl;
    }
};

void imprimirLibros(Libro libros[], int dl)
{
    for (int i = 0; i < dl; i++)
    {
        cout << "Libro #" << i + 1 << endl;
        libros[i].imprimirDesdeStruct();
    }
}

string minusculas(const string& s)
{
    string t = s;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    return t;
}

int main()
{
    const int MAX = 500;
    Libro biblioteca[MAX];
    int librosLogica = 0;

    while (librosLogica < MAX)
    {
        Libro nuevo;
        cout << "\n--- Cargando libro #" << librosLogica + 1 << " ---\n";

        cout << "Ingrese titulo: ";
        getline(cin, nuevo.titulo);

        if (minusculas(nuevo.titulo) == "el hobbit")
        {
            biblioteca[librosLogica] = nuevo;
            librosLogica++;
            cout << "\nSe cargó 'El hobbit'. Finalizando carga.\n";
            break;
        }

        cout << "Ingrese autor: ";
        getline(cin, nuevo.autor);

        cout << "Ingrese editorial: ";
        getline(cin, nuevo.editorial);

        cout << "Ingrese ISBN: ";
        cin >> nuevo.isbn;

        cout << "Ingrese cantidad de hojas: ";
        cin >> nuevo.cantidadHojas;
        cin.ignore(); // limpiar buffer

        biblioteca[librosLogica] = nuevo;
        librosLogica++;
    }

    cout << "\n=== Biblioteca cargada (" << librosLogica << " libros) ===\n";
    imprimirLibros(biblioteca, librosLogica);

    return 0;
}
