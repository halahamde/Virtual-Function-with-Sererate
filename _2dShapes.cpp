#include <iostream>
#include "_2dShapes.h"
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
_2dShapes :: _2dShapes ()
{
    radius= 0 ;
}
// Parameterized Constructor
_2dShapes :: _2dShapes (int r, string c) : Shape(c)
{
    radius = r ;
}

