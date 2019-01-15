//
// Created by Joshua Crocker on 2019-01-15.
//

#include "Node.h"

Node::Node()
{}

int Node::getValue() const
{
    return value;
}

void Node::setValue(int value)
{
    Node::value = value;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *next)
{
    Node::next = next;
}
