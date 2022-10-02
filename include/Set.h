#ifndef SET_H
#define SET_H


class Set
{
    public:
        Set();
        void add(float x);
        void del(float x);
        bool is_empty()const;
        int getSize()const;
        float getElement(const int & index)const;
        void unionS(const Set &y);
        bool pertenece(float val)const;
        Set intersection(const Set & y)const;


        virtual ~Set();

    protected:



    private:
    int size;
    float * data = new float[0];
};

#endif // SET_H

