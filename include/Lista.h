#include "Node.h"
#pragma once 


class Lista{
   private : 
   Node* inicio; 

   public: 


   Lista(); 

   void agregarElemento(int value); 
   Node* buscarElemento(int value); 
   float promedioDeLaLista(); 
   void mostrarElementoLista(); 
   ~Lista();






};

