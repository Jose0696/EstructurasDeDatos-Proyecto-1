//
// Created by Jose on 25/9/2022.
//

#include "Heap.h"

template<class type>
Heap<type>::Heap(int capacity) {
    heap_size=-1;
    Heap<type>::capacity=capacity;
    arr= new type*[capacity];
}

template<class type>
void Heap<type>::MaxHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest = i;
    if(arr[i]<arr[left(i)]||arr[i]<arr[right(i)]){
        if(arr[left(i)]>arr[right(i)]){
            swap(&arr[i],&arr[left(i)]);
            MaxHeapify(left(i));
        }
        else{
            swap(&arr[i], &arr[right(i)]);
            MaxHeapify(right(i));
        }
    }
}

template<class type>
int Heap<type>::parent(int i) {
    return (i-1)/2;
}

template<class type>
int Heap<type>::left(int i) {
    return ((2*i)+1);
}

template<class type>
int Heap<type>::right(int i) {
    return ((2*i)+2);
}

template<class type>
type *Heap<type>::getMax() {
    return arr[0];
}

template<class type>
type *Heap<type>::extractMax() {
    type* root = arr[0];
    arr[0]=arr[heap_size];
    heap_size--;
    shiftDown(0);
    return root;

}

template<class type>
void Heap<type>::decreaseKey(int i, type *new_value) {
    arr[i]=new_value;
    while (i!=0&&arr[parent(i)]>arr[i]){
        swap(&arr[i],&arr[parent(i)]);
        i = parent(i);
    }
}

template<class type>
void Heap<type>::deleteKey(int i) {
    arr[i]=getMax();
    shiftUp(i);
    extractMax();
}

template<class type>
void Heap<type>::insertKey(type *k) {
    if(heap_size==capacity){
        throw new RuntimeException(" Overflow: Could not push key");
        return;
    }
    heap_size++;
    int i = heap_size;
    arr[i]=k;
    while (i != 0 && arr[parent(i)] > arr[i]){
        swap(&arr[i],&arr[parent(i)]);
        i= parent(i);
    }
}

template<class type>
type *Heap<type>::get(int index) {
    return arr[index];
}

template<class type>
int Heap<type>::getSize() const {
    return heap_size+1;
}

template <class type>
void Heap<type>::swap(type** x, type** y){
    type* temp = *x;
    *x=*y;
    *y=temp;
}

template<class type>
int Heap<type>::getCapacity() const {
    return capacity;
}

template<class type>
void Heap<type>::shiftUp(int i) {
    while (i>0&&arr[parent(i)]<arr[i]){
        swap(&arr[parent(i)],&arr[i]);
        i= parent(i);
    }
}

template<class type>
void Heap<type>::shiftDown(int i) {
    int maxIndex = i;
    int l = left(i);
    if(l<=heap_size&&arr[l]>arr[maxIndex])
        maxIndex = l;
    int r = right(i);
    if(r<=heap_size&&arr[r]>arr[maxIndex])
        maxIndex = r;
    if(i!=maxIndex){
        swap(&arr[i],&arr[maxIndex]);
        shiftDown(maxIndex);
    }
}
