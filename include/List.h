//
// Created by tecdaz on 02/10/22.
//

#ifndef TDA_LIST_H
#define TDA_LIST_H


class List {
    public:
        List();
        void add(float element);
        float pop();
        float pop(int index);
        float operator[](int index);

    private:

    float * data = new float[0];

};


#endif //TDA_LIST_H
