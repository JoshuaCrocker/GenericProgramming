#include <iostream>
#include "IntStack.h"

int main()
{
    IntStack *stack = new IntStack();
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->pop();
    stack->pop();
    stack->push(4);
    stack->push(5);
    stack->pop();
    stack->pop();
    stack->pop();
    stack->pop();

    return 0;
}