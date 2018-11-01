#include <iostream>
#include "_3dShapes.h "
#include "Sphere.h"
#include "Shape.h"
#include "_2dShapes.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "_3dShapes.h"

using namespace std;

// default constructor
_3dShapes::_3dShapes()
{
    radius = 0 ;
}
// Parameterized Constructor
_3dShapes :: _3dShapes (int r, string c) : Shape(c)
{
    radius = r ;
}

