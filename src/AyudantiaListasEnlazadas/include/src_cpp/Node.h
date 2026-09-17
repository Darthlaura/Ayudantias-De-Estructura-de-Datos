#pragma once 


class Node {

    private: 
    int value; 
    Node* siguiente; 



    public: 

    Node(int value); 

    int getValue(); 
    Node* getSiguiente(); 
    void setValue(int value); 
    void setSiguiente(Node* siguiente); 
    ~Node(); 



};