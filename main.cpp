#include <iostream>
#include "Stack.h"

void doubleInt(int &value)
{
    value *= 2;
}

void sum(int &value, void *ptr)
{
    int *totalPtr = (int *) ptr;
    (*totalPtr) += value;
}

int main()
{
    Stack<int> *stack = new Stack<int>();
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);

    int total = 0;
    stack->iterate(sum, &total);
    std::cout << "[>] Total is " << total << std::endl;

    stack->iterate(doubleInt);

    stack->pop();
    stack->pop();
    stack->pop();
    stack->pop();
    stack->pop();

    std::cout << "[*] ----------" << std::endl;

    Stack<float> *floatingStack = new Stack<float>();
    floatingStack->push(1.0);
    floatingStack->push(1.5);
    floatingStack->push(2.1);
    floatingStack->pop();
    floatingStack->pop();
    floatingStack->push(3.0);
    floatingStack->pop();
    floatingStack->pop();

    std::cout << "[*] ----------" << std::endl;

    Stack<char> *charStack = new Stack<char>();
    charStack->push('a');
    charStack->push('b');
    charStack->push('c');
    charStack->pop();
    charStack->pop();
    charStack->pop();
    charStack->push('d');
    charStack->pop();

    return 0;
}