//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_LIST_H
#define MY_PROJECT_NAME_LIST_H
#include "NodeQueue.h"

template<class E>
class List {
private:
    NodeQueue<E> *inicio;
    NodeQueue<E> *cola;

public:
    List();
    bool vacia();
    E *valorInicio();
    E *valorFinal();
    void agregar(NodeQueue<E> *referencia, E *valor);
    void agregarInicio(E *valor);
    void agregarFinal(E *valor);
    void borrar(NodeQueue<E> *referencia);
    void borrarInicio();
    void borrarFinal();
    string toString();
    //friend ostream *operator<<(ostream *os, const NodeQueue<E> *list);
};

template<class E>
List<E>::List() {
    this->inicio = new NodeQueue<E>;
    this->cola = new NodeQueue<E>;
    inicio->setSiguiente(cola);
    cola->setAnterior(inicio);
}

template<class E>
bool List<E>::vacia() {
    return (inicio->getSiguiente() == cola);
}

template<class E>
E *List<E>::valorInicio() {
    NodeQueue<E> *temp = inicio->getSiguiente();
    if(temp == nullptr){
        return nullptr;
    }
    return temp->getDatos();
}

template<class E>
E *List<E>::valorFinal() {
    NodeQueue<E> *temp = cola->getSiguiente();
    if(temp == nullptr){
        return nullptr;
    }
    return temp->getDatos();
}

template<class E>
void List<E>::agregar(NodeQueue<E> *referencia, E *valor) {
    NodeQueue<E> *nuevo = new NodeQueue<E>();
    nuevo->setDatos(valor);
    nuevo->setSiguiente(referencia);
    nuevo->setAnterior(referencia->getAnterior());
    referencia->getAnterior()->setSiguiente(nuevo);
    referencia->setAnterior(nuevo);

}

template<class E>
void List<E>::agregarInicio(E *valor) {
    agregar(inicio->getSiguiente(),valor);
}

template<class E>
void List<E>::agregarFinal(E *valor) {
    agregar(cola,valor);
}

template<class E>
void List<E>::borrar(NodeQueue<E> *referencia) {
    NodeQueue<E> *ant = referencia->getAnterior();
    NodeQueue<E> *sig = referencia->getSiguiente();
    ant->setSiguiente(sig);
    sig->setAnterior(ant);
    delete referencia;
}

template<class E>
void List<E>::borrarInicio() {
    borrar(inicio->getSiguiente());
}

template<class E>
void List<E>::borrarFinal() {
    borrar(cola->getAnterior());
}

template<class E>
string List<E>::toString() {
    stringstream ss;
    NodeQueue<E> *temp = inicio->getSiguiente();
    if(temp == cola){
        ss << "Lista vacia!" << endl;
    }else{
        //ss << "NULL <->";
        while (temp != cola){
            ss << *temp->getDatos() << "\n";
            temp = temp->getSiguiente();
        }
        ss << "\n" << endl;
    }
    return ss.str();
}

/*template <class E>
ostream *operator<<(ostream *os, const NodeQueue<E> *list) {
    for (auto &one: list->getDatos()){
        os << *one << endl;
    }
    return os;
}*/

#endif //MY_PROJECT_NAME_LIST_H
