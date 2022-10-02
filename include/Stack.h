#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    int elements;
    float * data = new float[0];

public:
    Stack();
    void add(float element);
    float pop();
    bool is_empty()const;

    ~Stack();
};

#endif