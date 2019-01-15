//
// Created by Joshua Crocker on 2019-01-15.
//

#ifndef GENERICPROGRAMMING_INTSTACK_H
#define GENERICPROGRAMMING_INTSTACK_H


#include "Node.h"


// First in, last out
class IntStack
{
private:
    Node *head;
public:
    IntStack();

    void push(int val);
    int pop();

};


#endif //GENERICPROGRAMMING_INTSTACK_H
