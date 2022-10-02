#include "Point.h"
#ifndef SEGMENT_H
#define SEGMENT_H



class Segment
{
    public:
        Segment(Point a, Point b);
        float longitude()const;
        Point getA()const;
        Point getB()const;
        void translatePointA(Point newPoint);
        void translatePointB(Point newPoint);

    protected:

    private:
        Point a, b;

};

#endif // SEGMENT_H
