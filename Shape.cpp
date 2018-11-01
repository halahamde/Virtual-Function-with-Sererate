#include "Shape.h"
#include <iostream>
using namespace std;

// default constructor
Shape::Shape()
{
   color = " " ;
}
// Parameterized Constructor
Shape :: Shape ( string c ) {
color = c ;

}
// purpose : this function to set a color to call it in the main
void Shape :: setColor ( string c )
    {
        color = c ;
    }
 // purpose : this function to return the color in the main
    string Shape :: getColor ()
    {
        return color ;
    }
