#include "Circle.h"
#include "math.h"
#include "Point.h"

using namespace std;

Circle::Circle(){
}

Circle::Circle(Point center, float radius)
{
    this->center = center;
    this->radius = radius;
}

Point Circle::Getcenter()const{
    return this->center;
}

void Circle::Setcenter(Point new_point){
    this->center = new_point;
}

float Circle::Getradius()const{
    return this->radius;
}

void Circle::Setradius(float new_radius){
    this->radius = new_radius;
}

float Circle::getPerimeter()const{
    return 2 * 3.14 * Getradius();
}

float Circle::getArea()const{
    return 3.14 * pow(Getradius(), 2);
}

float Circle::getDiameter()const{
    return Getradius() * 2;
}

Circle::~Circle()
{
    //dtor
}
