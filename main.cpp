#include <iostream>
#include "Point.h"
#include "Segment.h"
#include "Circle.h"
#include "Set.h"

using namespace std;

int main()
{
    Set a, b;
    cout << a.is_empty() << endl;
    for (int i = 0; i < 5; i++){
        a.add(i);
    }
    for (int i = 3; i < 8; i++){
        b.add(i);
    }
    cout << a.getSize() << endl;

    cout << a.getSize() << endl;

    Set c = a.intersection(b);
    cout << c.getSize() << endl;

}
