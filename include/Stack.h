#ifndef STACK_H
#define STACK_H

class Stack
{
private:
    float * top;
    float * data = new float[0];

public:
    Stack();
    void stack(float element);
    float pop();
    bool is_empty()const;
    
    ~Stack();
};

#endif