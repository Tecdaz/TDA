#include "Segment.h"
#include "Point.h"

Segment::Segment(Point a, Point b)
{
    this->a = a;
    this->b = b;
}

float Segment::longitude()const{
    return this->a.distance(this->b);
}

void Segment::translatePointA(Point newPoint){
    this->a = newPoint;
}

void Segment::translatePointB(Point newPoint){
    this->b = newPoint;
}
