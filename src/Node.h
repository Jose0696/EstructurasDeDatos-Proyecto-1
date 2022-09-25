//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_NODE_H
#define MY_PROJECT_NAME_NODE_H

template<class type>
class Node{
private:
    type *data;
    Node* left;
    Node* right;
public:
    Node(type *data = nullptr, Node *left = nullptr, Node *right = nullptr);
    virtual ~Node();
    type* getData() const;
    void setData(type* data);
    Node *getLeft() const;
    void setLeft(Node *left);
    Node *getRight() const;
    void setRight(Node *right);
};

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

#endif //MY_PROJECT_NAME_NODE_H
