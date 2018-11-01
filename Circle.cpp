#include <iostream>
#include "Circle.h"
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
Circle::Circle()
{
  radius = 0 ;
}
// Parameterized Constructor
Circle :: Circle ( int r, string c ) :  _2dShapes (r, c)
{
};
//purpose: this function to calculate the area of a circle
double Circle :: calcArea ()
{
    return (  3.14 * radius * radius ) ;
}
//purpose: this function to show to the user there is no volume for the circle
double Circle :: calcVolume ()
{
    cout << "Circle has no Volume" ;

}

