//
// Created by Joshua Crocker on 2019-01-15.
//

#include <iostream>
#include "IntStack.h"

IntStack::IntStack()
{
    head = nullptr;
}

void IntStack::push(int val)
{
    Node *node = new Node();
    node->setValue(val);
    node->setNext(head);

    std::cout << "[*] Push " << val << " onto the stack" << std::endl;

    head = node;
}

int IntStack::pop()
{
    if (head == nullptr)
    {
        throw 999;
    }

    Node *popped = head;

    int value = popped->getValue();
    head = head->getNext();

    std::cout << "[*] Pop " << value << " from the stack" << std::endl;

    delete popped;
    return value;
}


