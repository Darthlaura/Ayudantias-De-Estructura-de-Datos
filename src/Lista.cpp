#include <iostream> 
#include "Lista.h"
using namespace std; 


Lista::Lista(){
    //declaramos que el nodo de la lista sera null
     inicio = nullptr; 

}

void Lista::agregarElemento(int value){
    Node* nuevo = new Node(value); 
    //si la lista esta vacia
    if(inicio == nullptr){
        //incio sera igual a nuevo
        inicio = nuevo;   
        return; // y retornamos 
    }
    
    //Creamos una nueva referencia de puntro para cursor 
    //cursor estara en el inicio
    Node* cursor = inicio; 

    while(cursor->getSiguiente() != nullptr) {
       
       cursor = cursor->getSiguiente();
    }

    cursor->setSiguiente(nuevo); 


} 

//buscar elemento 
Node* Lista::buscarElemento(int value){
    //colocamos el cursor en el inicio  
    Node* cursor = inicio; 
    
    while (cursor->getSiguiente() != nullptr){
         
         if (cursor->getValue() == value) {
             return cursor;
         }
         cursor =cursor->getSiguiente();


    }

    return nullptr;
    }


//obtener el promedio 

float Lista::promedioDeLaLista() {
   if (inicio == nullptr){
    return 0;

   } 

int suma =0; 
int cantidad =0; 

Node* cursor = inicio; 
while (cursor!= nullptr){
    suma = suma + cursor->getValue(); 
    cantidad++;
    cursor = cursor->getSiguiente(); 
}
   return (float) suma/cantidad;

}


//mostrar todos los elementos 

void Lista::mostrarElementoLista(){


     Node* cursor = inicio; 
    while(cursor !=nullptr){
   cout << cursor->getSiguiente() << " -> "; 
   cursor = cursor->getSiguiente(); 
    } 

    cout << "nullptr" << endl; 
}


//destructor 

Lista::~Lista(){
   Node* cursor = inicio; 

   while( cursor != nullptr){

    Node* siguiente = cursor->getSiguiente(); 
    delete cursor; 
    cursor = siguiente;
   } 

    inicio = nullptr; 


}






