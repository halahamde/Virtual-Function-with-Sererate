#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "_2dShapes.h"

using namespace std;



class Circle : public _2dShapes
{
    public:
        Circle();
        Circle ( int r , string c ) ;
        double calcArea () ;
        double calcVolume () ;
};

#endif // CIRCLE_H
