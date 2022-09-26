//
// Created by Jose on 25/9/2022.
//

#include "PriorityQueue.h"

template<typename type>
PriorityQueue<type>::PriorityQueue(int capacity) {
    T = new Heap<type>(capacity);
}

template<typename type>
int PriorityQueue<type>::size() const {
    return T->getSize();
}

template<typename type>
bool PriorityQueue<type>::empty() const {
    return size()==0;
}

template<typename type>
void PriorityQueue<type>::push(type& e) {
    if (T->getSize() < T->getCapacity())
        T->insertKey(&e);
    else {
        throw new QueueException(" Overflow: Maximum capacity reached");
        return;
    }
}

template<typename type>
const type &PriorityQueue<type>::max() {
    return *(T->getMax());
}

template<typename type>
void PriorityQueue<type>::pop() {
    if(!empty())
        T->deleteKey(0);
    else{
        throw new QueueException("Error: Empty stack");
        return;
    }
}

template<typename type>
int PriorityQueue<type>::getCapacity() const {
    return T->getCapacity();
}

template<typename type>
string PriorityQueue<type>::toString() {
    stringstream s;
    s<<"Customers in queue: "<<endl;
    for(int i=0;i< T->getSize(); i++)
        s <<i<<": "<< T->get(i)->toString() << endl;
    return s.str();
}