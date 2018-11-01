#include <iostream>
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
Sphere :: Sphere()
{
    radius = 0 ;
}
// Parameterized Constructor
Sphere :: Sphere( int r , string c ) : _3dShapes( r , c )
{

}

//purpose: this function to calculate the area of a sphere
double Sphere :: calcArea()
{
    return ( 4 * 3.14 * radius * radius ) ;
}
//purpose: this function to calculate the volume of a sphere
double  Sphere :: calcVolume()
{
    return (  (4.0/3.0) * 3.14 * radius * radius * radius  ) ;
}
