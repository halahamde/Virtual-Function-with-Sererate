#include <iostream>
#include "Cylinder.h"
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
Cylinder::Cylinder()
{
    radius = 0 ;
    height = 0 ;
}
// Parameterized Constructor
Cylinder :: Cylinder ( int r, int h, string c ) :  _3dShapes (r, c)
{
    height = h ;
};
//purpose: this function to calculate the area of a cylinder
double Cylinder :: calcArea()
{
    return (( 2 * 3.14 * radius * height ) + ( 2 * 3.14 * radius * radius ) ) ;
}
//purpose: this function to calculate the volume of a cylinder
double Cylinder :: calcVolume ()
{
    return (  3.14 * radius * radius * height   ) ;
}

