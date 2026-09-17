#include "Node.h"


Node::Node(int value){
    this->value = value; 
    this-> siguiente = nullptr; 
}

int Node::getValue(){
    return value; 

}
Node* Node::getSiguiente(){
    return siguiente; 
}

void Node::setValue(int value){
    this->value = value;
}

void Node::setSiguiente(Node* siguiente) {
    this->siguiente = siguiente;
}

Node::~Node()

{

    
}