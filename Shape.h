#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std ;

class Shape
{
    public:
        virtual double calcArea() = 0 ;
        virtual double calcVolume () = 0 ;
        Shape();
        Shape(string ) ;
        void setColor ( string) ;
        string getColor ();
    protected:
    string color ;
};

#endif // SHAPE_H
