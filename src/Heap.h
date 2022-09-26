//
// Created by Jose on 25/9/2022.
//

#ifndef MY_PROJECT_NAME_HEAP_H
#define MY_PROJECT_NAME_HEAP_H
#include "RuntimeException.h"

template<class type>
class Heap {
private:
    type* *arr;
    int capacity;
    int heap_size;
public:
    Heap(int capacity);
    int parent(int i);
    int left(int i);
    int right(int i);
    type* get(int index);
    void deleteKey(int i);
    void insertKey(type* k);
    int getSize()const;
    void swap(type** x, type** y);
    int getCapacity()const;
    type* getMax();
    type* extractMax();
    void shiftUp(int i);
    void shiftDown(int i);

    void decreaseKey(int i, type* new_value);
    void MaxHeapify(int i);
};


#endif //MY_PROJECT_NAME_HEAP_H
