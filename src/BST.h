//
// Created by Jose on 25/9/2022.
//

#ifndef MY_PROJECT_NAME_BST_H
#define MY_PROJECT_NAME_BST_H
#include "Node.cpp"
#include "PriorityQueue.h"

template <class type>
class BST {
private:
    int cant = 0;
    Node<type> *root;
    Node<type> *makeEmpty(Node<type> *t);
    Node<type> *insert(type *x, Node<type> *t);
    Node<type> *findMin(Node<type> *t);
    Node<type> *findMax(Node<type> *t);
    Node<type> *remove(int x, Node<type> *t);
    void inOrder(PriorityQueue<type>* cola, Node<type>* t);
    Node<type> *find(Node<type> *t, string x);
public:
    BST();
    virtual ~BST();
    void insert(type *t);
    void remove(int x);
    void encolarEnCola(PriorityQueue<type>* cola);
    type* search(string t);
    int getCant();
    string toString(Node<type>* t);
    Node<type> *getRoot() const;
    string gArchivo(Node<type>* t);
};


#endif //MY_PROJECT_NAME_BST_H
