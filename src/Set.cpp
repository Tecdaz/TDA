#include "Set.h"
#include "iostream"

using namespace std;

Set::Set()
{
    size = 0;
}

bool Set::pertenece(float val)const{
    for (int i = 0; i<size; i++){
        if (data[i] == val){
            return true;
        }
    }
    return false;
}

void Set::add(float val){
    if (not(pertenece(val))) {
        data[size] = val;
        size ++;
    }
}

bool Set::is_empty()const{
    return (size == 0);
}

void Set::del(float val){
    int i = 0;
    while(i < size  && data[i] != val){
        i ++;
    }
    if (i < size){
        data[i] = data[size-1];
        size --;
    }
}

int Set::getSize()const{
    return size;
}

float Set::getElement(const int & index)const{
    if (index < size){
        return data[index];
    }
}

void Set::unionS(const Set &y){
    float element;
    for(int i = 0; i<y.getSize(); i++){
        element = y.getElement(i);
        add(element);
    }
}

Set Set::intersection(const Set & y)const{
    Set a;
    float element;
    for(int i = 0; i< size; i++){
        element = data[i];
        if (y.pertenece(element)){
            a.add(element);
        }
    }
    return a;
}


Set::~Set()
{
    //dtor
}
