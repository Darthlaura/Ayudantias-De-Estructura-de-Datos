#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    // Creamos una lista vacía
    Lista lista;

    // Agregamos nodos
    lista.agregarElemento(10);
    lista.agregarElemento(20);
    lista.agregarElemento(30);
    lista.agregarElemento(40);

    // Mostramos la lista
    cout << "Lista:" << endl;
    lista.mostrarElementoLista();

    // Calculamos el promedio
    cout << "Promedio: " << lista.promedioDeLaLista() << endl;

    // Buscamos un nodo
    Node* encontrado = lista.buscarElemento(30);

    if (encontrado != nullptr)
    {
        cout << "Nodo encontrado: "
             << encontrado->getValue()
             << endl;
    }
    else
    {
        cout << "Nodo no encontrado" << endl;
    }

    return 0;
}