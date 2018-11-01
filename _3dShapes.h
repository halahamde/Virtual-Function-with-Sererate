#ifndef _3DSHAPES_H
#define _3DSHAPES_H
#include <iostream>
#include "Shape.h"

using namespace std;

class _3dShapes : public Shape
{
    public:
        _3dShapes();
        _3dShapes (int r , string c )  ;
        virtual double calcArea() = 0 ;
        virtual double calcVolume() = 0 ;

    protected:
        int radius ;
};

#endif // _3DSHAPES_H
