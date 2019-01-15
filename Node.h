//
// Created by Joshua Crocker on 2019-01-15.
//

#ifndef GENERICPROGRAMMING_NODE_H
#define GENERICPROGRAMMING_NODE_H


class Node
{
private:
    int value;
    Node *next;
public:
    Node();
    int getValue() const;
    void setValue(int value);
    Node *getNext() const;
    void setNext(Node *next);
};


#endif //GENERICPROGRAMMING_NODE_H
