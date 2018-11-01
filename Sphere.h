#ifndef SPHERE_H
#define SPHERE_H
#include <iostream>
#include "_3dShapes.h"
#include "Shape.h"
#include "_2dShapes.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "_3dShapes.h"

using namespace std;

class Sphere : public _3dShapes
{
    public:
        Sphere();
        Sphere ( int r , string c ) ;
        double calcArea() ;
        double calcVolume () ;
};

#endif // SPHERE_H
