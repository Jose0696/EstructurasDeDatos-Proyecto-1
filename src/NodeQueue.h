//
// Created by Jose on 11/9/2022.
//

#ifndef MY_PROJECT_NAME_NODEQUEUE_H
#define MY_PROJECT_NAME_NODEQUEUE_H

template<class type>
class NodeQueue{
private:
    type *data;
    NodeQueue *next;
    NodeQueue *previous;
public:
    NodeQueue() = default;
    virtual ~NodeQueue() = default;

    type *getDatos() const {
        return data;
    }

    void setDatos(type *datos) {
        NodeQueue::data = datos;
    }

    NodeQueue *getSiguiente() const {
        return next;
    }

    void setSiguiente(NodeQueue *siguiente) {
        NodeQueue::next = siguiente;
    }

    NodeQueue *getAnterior() const {
        return previous;
    }

    void setAnterior(NodeQueue *anterior) {
        NodeQueue::previous = anterior;
    }

};
#endif //MY_PROJECT_NAME_NODEQUEUE_H
