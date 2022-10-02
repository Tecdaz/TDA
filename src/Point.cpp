#include "Point.h"
#include "math.h"

using namespace std;

Point::Point(){
}

Point::Point(float x, float y){
    this->x = x;
    this->y = y;
}

float Point::coordX()const{
    return this->x;
}

float Point::coordY()const{
    return this->y;
}

float Point::distance(const Point & point2)const{
//Calcula la diferencia de las coordenadas
    const float distanceX = pow(this->x - point2.coordX(), 2);
    const float distanceY = pow(this->y - point2.coordY(), 2);

    const float norm = sqrt(distanceX + distanceY);
    return norm;
}

void Point::translate(float x,float y){
    this-> x = x;
    this-> y = y;
}

bool Point::operator==(const Point & otherPoint)const{
    return (this->coordX() == otherPoint.coordX()) && (this->coordY() == otherPoint.coordY());
}
