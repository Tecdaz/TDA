#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"


class Circle
{
    public:
        Circle();
        Circle(Point center, float radius);
        virtual ~Circle();

        Point Getcenter()const;
        void Setcenter(Point val);
        float Getradius()const;
        void Setradius(float val);
        float getPerimeter()const;
        float getArea()const;
        float getDiameter()const;


    protected:

    private:
        Point center;
        float radius;
};

#endif // CIRCLE_H
