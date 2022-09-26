//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_NODE_H
#define MY_PROJECT_NAME_NODE_H

#include "Customer.h"

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

#endif //MY_PROJECT_NAME_NODE_H
