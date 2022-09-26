//
// Created by Jose on 25/9/2022.
//

#ifndef MY_PROJECT_NAME_PRIORITYQUEUE_H
#define MY_PROJECT_NAME_PRIORITYQUEUE_H

#include "Heap.h"
#include "Heap.cpp"
#include "RuntimeException.h"

template <typename type>
class PriorityQueue {
private:
    Heap<type>* T;
public:
    PriorityQueue(int capacity);
    int size()const;
    bool empty()const;
    void push(type& e);
    const type& max();
    void pop();
    int getCapacity()const;
    string toString();
};


#endif //MY_PROJECT_NAME_PRIORITYQUEUE_H
