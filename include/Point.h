#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(float x, float y);
        float coordX()const;
        float coordY()const;
        float distance(const Point & point2)const;
        void translate(float x,float y);
        bool operator==(const Point & otherPoint)const;

    protected:

    private:
    float x,y;
};

#endif // POINT_H
