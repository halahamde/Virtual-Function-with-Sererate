#include <iostream>
#include "Shape.h"
#include "_2dShapes.h"
#include "_3dShapes.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cylinder.h"

using namespace std;

// default constructor
Square::Square()
{
    length = 0 ;
}
// Parameterized Constructor
Square :: Square ( int r, string c ) :  _2dShapes (r, c)
    {
        length = r ;
    };
    //purpose: this function to calculate the area of a square
    double Square :: calcArea ()
    {
        return ( length * length ) ;
    }
    //purpose: this function to show to the user there is no volume for the square
    double Square :: calcVolume ()
    {
        cout << "Square has no Volume" ;
    }

