//
// Created by Jose on 25/9/2022.
//

#include "BST.h"

template <class type>
BST<type>::BST() {
    root = nullptr;
}

template <class type>
BST<type>::~BST() {
    root = makeEmpty(root);
}

template <class type>
Node<type>* BST<type>::makeEmpty(Node<type> *t) {
    if(t == nullptr){
        return nullptr;
    }
    {
        makeEmpty(t->getLeft());
        makeEmpty(t->getRight());
        delete t;
    }
    return nullptr;
}

template <class type>
Node<type>* BST<type>::insert(type *x, Node<type> *t) {
     if (t == nullptr) {
        t = new Node<type>(x);
    } else if (x->getID() < t->getData()->getID())
        t->setLeft(insert(x, t->getLeft()));
    else if (x->getID() > t->getData()->getID())
        t->setRight(insert(x, t->getRight()));
    return t;
}

template <class type>
Node<type>* BST<type>::findMin(Node<type> *t) {
    if (t == nullptr)
        return nullptr;
    else if (t->getLeft() == nullptr)
        return t;
    else
        return findMin(t->getLeft());
}

template <class type>
Node<type>* BST<type>::findMax(Node<type> *t) {
    if(t == nullptr)
        return nullptr;
    else if(t->getRight() == nullptr)
        return t;
    else
        return findMax(t->getRight());
}

template <class type>
void BST<type>::inOrder(PriorityQueue<type>* cola, Node<type>* t) {
    if (t == nullptr)
        return;

    inOrder(cola,t->getLeft());
    cola->push(*t->getData());
    inOrder(cola,t->getRight());


//    if (t == nullptr)
//        return nullptr;
//    else if (x < t->getData()->getID())
//        return find(t->getLeft(), x);
//    else if (x > t->getData()->getID())
//        return find(t->getRight(), x);
//    else if(x == t->getData()->getID())
//        return t;
//    else
//        return nullptr;
}

template <class type>
Node<type>* BST<type>::remove(int x, Node<type> *t) {
    Node<type>* temp;
    if(t == nullptr){
        return nullptr;
    }else if(x < t->getData()){
        t->setLeft(remove(x, t->getLeft()));
    }
    else if(x > t->getData()){
        t->setRight(remove(x, t->getRight()));
    }
    else if(t->getLeft() && t->getRight()){
        temp = findMin(t->getRight());
        t->setData(temp->getData());
        t->setRight(remove(t->getData(), t->getRight()));
    }
    else{
        temp = t;
        if(t->getLeft() == nullptr)
            t = t->getRight();
        else if(t->getRight() == nullptr)
            t = t->getLeft();
        delete temp;
    }
    return t;
}

template <class type>
Node<type>* BST<type>::find(Node<type> *t, string x) {

    if (t == nullptr)
        return nullptr;
    else if (x < t->getData()->getID())
        return find(t->getLeft(), x);
    else if (x > t->getData()->getID())
        return find(t->getRight(), x);
    else if(x == t->getData()->getID())
        return t;
    else
        return nullptr;
}

template <class type>
void BST<type>::insert(type* t) {
    cant++;
    root = insert(t,root);
}

template <class type>
void BST<type>::remove(int x) {
    root = remove(x,root);
}

template <class type>
type* BST<type>::search(string t) {
    Node<type>* nodo = find(root, t);
    if(nodo != nullptr)
        return nodo->getData();
    else
        return nullptr;
}

template <class type>
int BST<type>::getCant() {
    return cant;
}

template<class type>
Node<type> *BST<type>::getRoot() const {
    return root;
}

template <class type>
string BST<type>::toString(Node<type> *t) {
    return t->getData()->toString();
}

template<class type>
string BST<type>::gArchivo(Node<type> *t) {
    return t->getData()->toSave();
}

template<class type>
void BST<type>::encolarEnCola(PriorityQueue<type> *cola) {
    inOrder(cola, root);
}