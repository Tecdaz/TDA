#include "Stack.h"

Stack::Stack(/* args */){
    elements = 0;
}

bool Stack::is_empty()const{
    return elements == 0;
}
void Stack::add(float element){
    data[elements] = element;
    elements ++;
}

float Stack::pop(){
    float result = data[elements-1];
    elements --;
    return result;
}

Stack::~Stack()
{
}