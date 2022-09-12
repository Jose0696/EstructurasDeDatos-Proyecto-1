//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_QUEUELIST_H
#define MY_PROJECT_NAME_QUEUELIST_H

#include <ostream>
#include "List.h"

template<class type>
class QueueList {
private:
    List<type> *S;
    int n;

public:
    QueueList();
    virtual ~QueueList();

    void enqueue(type *e);
    int size();
    bool empty() const;
    type *front() ;
    void dequeue();

};

template<class type>
QueueList<type>::QueueList() {
    S = new List<type>;
}

template<class type>
void QueueList<type>::enqueue(type *e) {
    ++n;
    S->agregarFinal(e);
}

template<class type>
int QueueList<type>::size() {
    return n;
}

template<class type>
QueueList<type>::~QueueList() {
    delete S;
}

template<class type>
bool QueueList<type>::empty() const {
    return n == 0;
}

template<class type>
type *QueueList<type>::front()  {
    if(empty())
        cout << "Top sobre un stack vacio!";
    return S->valorInicio();
}

template<class type>
void QueueList<type>::dequeue() {
    if(empty())
        cout << "Top sobre un stack vacio!";
    S->borrarInicio();
    n--;
}

#endif //MY_PROJECT_NAME_QUEUELIST_H
