//
// Created by Joshua Crocker on 2019-01-15.
//

#ifndef GENERICPROGRAMMING_INTSTACK_H
#define GENERICPROGRAMMING_INTSTACK_H

#include <iostream>
#include "Node.h"

template<typename T>
class Stack
{
private:
    Node<T> *head;
public:
    Stack();

    void push(T val);
    T pop();
    void iterate(void callback(T &val));
    void iterate(T callback(T val));
    void iterate(void callback(T &val, void *p), void *ptr);
};

template<typename T>
Stack<T>::Stack()
{
    head = nullptr;
}

template<typename T>
void Stack<T>::push(T val)
{
    Node<T> *node = new Node<T>();
    node->setValue(val);
    node->setNext(head);

    std::cout << "[*] Push " << val << " onto the stack" << std::endl;

    head = node;
}

template<typename T>
T Stack<T>::pop()
{
    if (head == nullptr)
    {
        throw 999;
    }

    Node<T> *popped = head;

    T value = popped->getValue();
    head = head->getNext();

    std::cout << "[*] Pop " << value << " from the stack" << std::endl;

    delete popped;
    return value;
}

template<typename T>
void Stack<T>::iterate(T callback(T val))
{
    Node<T> *current = head;

    while (current != nullptr)
    {
        current->setValue(callback(current->getValue()));
        current = current->getNext();
    }
}

template<typename T>
void Stack<T>::iterate(void callback(T &val))
{
    Node<T> *current = head;

    while (current != NULL)
    {
        T temp = current->getValue();
        callback(temp);
        current->setValue(temp);

        current = current->getNext();
    }
}

template<typename T>
void Stack<T>::iterate(void callback(T &val, void *p), void *ptr)
{
    Node<T> *current = head;

    while (current != NULL)
    {
        T temp = current->getValue();
        callback(temp, ptr);
        current->setValue(temp);

        current = current->getNext();
    }
}

#endif //GENERICPROGRAMMING_INTSTACK_H
