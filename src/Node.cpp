//
// Created by Jose on 25/9/2022.
//

#include "Node.h"

template <class type>
Node<type>::Node(type* data, Node<type> *left, Node<type> *right) : data(data), left(left), right(right) {}

template <class type>
Node<type>::~Node() {

}

template <class type>
type* Node<type>::getData() const {
    return data;
}

template <class type>
void Node<type>::setData(type* data) {
    Node::data = data;
}

template <class type>
Node<type> *Node<type>::getLeft() const {
    return left;
}

template <class type>
void Node<type>::setLeft(Node<type> *left) {
    Node::left = left;
}

template <class type>
Node<type> *Node<type>::getRight() const {
    return right;
}

template <class type>
void Node<type>::setRight(Node<type> *right) {
    Node::right = right;
}