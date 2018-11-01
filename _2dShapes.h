#ifndef _2DSHAPES_H
#define _2DSHAPES_H
#include <iostream>
#include "Shape.h"

using namespace std;

class _2dShapes : public Shape
{
    public:
        _2dShapes();
        _2dShapes (int  r , string c ) ;
        virtual double calcArea() = 0  ;
        virtual double calcVolume() = 0 ;
    protected:
     int radius ;
};

#endif // _2DSHAPES_H
