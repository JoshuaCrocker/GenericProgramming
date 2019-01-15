//
// Created by Joshua Crocker on 2019-01-15.
//

#ifndef GENERICPROGRAMMING_NODE_H
#define GENERICPROGRAMMING_NODE_H


template<typename T>
class Node
{
private:
    T value;
    Node *next;
public:
    Node();
    T getValue() const;
    void setValue(T value);
    Node *getNext() const;
    void setNext(Node *next);
};

template<typename T>
Node<T>::Node()
{}

template<typename T>
T Node<T>::getValue() const
{
    return value;
}

template<typename T>
void Node<T>::setValue(T value)
{
    Node::value = value;
}

template<typename T>
Node<T> *Node<T>::getNext() const
{
    return next;
}

template<typename T>
void Node<T>::setNext(Node<T> *next)
{
    Node::next = next;
}

#endif //GENERICPROGRAMMING_NODE_H
